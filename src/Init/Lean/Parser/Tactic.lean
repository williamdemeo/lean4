/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
prelude
import Init.Lean.Parser.Term

namespace Lean
namespace Parser

@[init] def regBuiltinTacticParserAttr : IO Unit :=
let leadingIdentAsSymbol := true;
registerBuiltinParserAttribute `builtinTacticParser `tactic leadingIdentAsSymbol

@[init] def regTacticParserAttribute : IO Unit :=
registerBuiltinDynamicParserAttribute `tacticParser `tactic

@[inline] def tacticParser {k : ParserKind} (rbp : Nat := 0) : Parser k :=
categoryParser `tactic rbp

def tacticSeq {k : ParserKind} : Parser k :=
sepBy1 tacticParser "; " true

namespace Tactic

@[builtinTacticParser] def «intro» := parser! nonReservedSymbol "intro " >> optional ident
@[builtinTacticParser] def «intros» := parser! nonReservedSymbol "intros " >> many ident
@[builtinTacticParser] def «assumption» := parser! nonReservedSymbol "assumption"
@[builtinTacticParser] def «apply» := parser! nonReservedSymbol "apply " >> termParser
@[builtinTacticParser] def nestedTacticBlock := parser! "begin " >> tacticSeq >> "end"
@[builtinTacticParser] def nestedTacticBlockCurly := parser! "{" >> tacticSeq >> "}"
@[builtinTacticParser] def orelse := tparser! pushLeading >> " <|> " >> tacticParser 1

end Tactic

namespace Term

@[builtinTermParser] def tacticBlock := parser! symbol "begin " appPrec >> tacticSeq >> "end"

end Term

end Parser
end Lean