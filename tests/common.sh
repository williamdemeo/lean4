set -euo pipefail

ulimit -s 8192
DIFF=diff
if diff --color --help >/dev/null 2>&1; then
    DIFF="diff --color";
fi

function fail {
    echo $1
    exit 1
}

INTERACTIVE=no
if [ $1 == "-i" ]; then
    INTERACTIVE=yes
    shift
fi
f="$1"
shift
[ $# -eq 0 ] || fail "Usage: test_single.sh [-i] test-file.lean"

function compile_lean {
    lean --c="$f.c" "$f" || fail "Failed to compile $f into C file"
    leanc -O3 -DNDEBUG -o "$f.out" "$@" "$f.c" || fail "Failed to compile C file $f.c"
}

function exec_check {
    ret=0
    [ -v expected_ret ] || expected_ret=0
    [ -f "$f.expected.ret" ] && expected_ret=$(< "$f.expected.ret")
    "$@" > "$f.produced.out" 2>&1 || ret=$?
    if [ -n "$expected_ret" ] && [ $ret -ne $expected_ret ]; then
        echo "Unexpected return code $ret executing '$@'; expected $expected_ret. Output:"
        cat "$f.produced.out"
        exit 1
    fi
}

function diff_produced {
    if test -f "$f.expected.out"; then
        if $DIFF -u --ignore-all-space -I "executing external script" "$f.expected.out" "$f.produced.out"; then
            exit 0
        else
            echo "ERROR: file $f.produced.out does not match $f.expected.out"
            if [ $INTERACTIVE == "yes" ]; then
                meld "$f.produced.out" "$f.expected.out"
                if diff -I "executing external script" "$f.expected.out" "$f.produced.out"; then
                    echo "-- mismatch was fixed"
                fi
            fi
            exit 1
        fi
    else
        echo "ERROR: file $f.expected.out does not exist"
        if [ $INTERACTIVE == "yes" ]; then
            read -p "copy $f.produced.out (y/n)? "
            if [ $REPLY == "y" ]; then
                cp -- "$f.produced.out" "$f.expected.out"
                echo "-- copied $f.produced.out --> $f.expected.out"
            fi
        fi
        exit 1
    fi
}