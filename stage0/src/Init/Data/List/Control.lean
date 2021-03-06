/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura
-/
prelude
import Init.Control.Basic
import Init.Control.Foldable
import Init.Data.List.Basic

namespace List
universes u v w u₁ u₂

/-
Remark: we can define `mapM`, `mapM₂` and `forM` using `Applicative` instead of `Monad`.
Example:
```
def mapM {m : Type u → Type v} [Applicative m] {α : Type w} {β : Type u} (f : α → m β) : List α → m (List β)
  | []    => pure []
  | a::as => List.cons <$> (f a) <*> mapM as
```

However, we consider `f <$> a <*> b` an anti-idiom because the generated code
may produce unnecessary closure allocations.
Suppose `m` is a `Monad`, and it uses the default implementation for `Applicative.seq`.
Then, the compiler expands `f <$> a <*> b <*> c` into something equivalent to
```
(Functor.map f a >>= fun g_1 => Functor.map g_1 b) >>= fun g_2 => Functor.map g_2 c
```
In an ideal world, the compiler may eliminate the temporary closures `g_1` and `g_2` after it inlines
`Functor.map` and `Monad.bind`. However, this can easily fail. For example, suppose
`Functor.map f a >>= fun g_1 => Functor.map g_1 b` expanded into a match-expression.
This is not unreasonable and can happen in many different ways, e.g., we are using a monad that
may throw exceptions. Then, the compiler has to decide whether it will create a join-point for
the continuation of the match or float it. If the compiler decides to float, then it will
be able to eliminate the closures, but it may not be feasible since floating match expressions
may produce exponential blowup in the code size.

Finally, we rarely use `mapM` with something that is not a `Monad`.

Users that want to use `mapM` with `Applicative` should use `mapA` instead.
-/

@[specialize]
def mapM {m : Type u → Type v} [Monad m] {α : Type w} {β : Type u} (f : α → m β) : List α → m (List β)
  | []    => pure []
  | a::as => return (← f a) :: (← mapM f as)

@[specialize]
def mapA {m : Type u → Type v} [Applicative m] {α : Type w} {β : Type u} (f : α → m β) : List α → m (List β)
  | []    => pure []
  | a::as => List.cons <$> f a <*> mapA f as

@[specialize]
def forM {m : Type u → Type v} [Monad m] {α : Type w} (f : α → m PUnit) : List α → m PUnit
  | []     => pure ⟨⟩
  | h :: t => do f h; forM f t

@[specialize]
def forA {m : Type u → Type v} [Applicative m] {α : Type w} (f : α → m PUnit) : List α → m PUnit
  | []     => pure ⟨⟩
  | h :: t => f h *> forA f t

@[specialize]
def filterAuxM {m : Type → Type v} [Monad m] {α : Type} (f : α → m Bool) : List α → List α → m (List α)
  | [],     acc => pure acc
  | h :: t, acc => do
    let b ← f h
    filterAuxM f t (cond b (h :: acc) acc)

@[inline]
def filterM {m : Type → Type v} [Monad m] {α : Type} (f : α → m Bool) (as : List α) : m (List α) := do
  let as ← filterAuxM f as []
  pure as.reverse

@[inline]
def filterRevM {m : Type → Type v} [Monad m] {α : Type} (f : α → m Bool) (as : List α) : m (List α) :=
  filterAuxM f as.reverse []

@[inline]
def filterMapM {m : Type u → Type v} [Monad m] {α β : Type u} (f : α → m (Option β)) (as : List α) : m (List β) :=
  let rec @[specialize] loop
    | [],     bs => pure bs
    | a :: as, bs => do
      match (← f a) with
      | none   => loop as bs
      | some b => loop as (b::bs)
  loop as.reverse []

@[specialize]
def foldlM {m : Type u → Type v} [Monad m] {s : Type u} {α : Type w} : (f : s → α → m s) → (init : s) → List α → m s
  | f, s, []      => pure s
  | f, s, a :: as => do
    let s' ← f s a
    foldlM f s' as

@[specialize]
def foldrM {m : Type u → Type v} [Monad m] {s : Type u} {α : Type w} : (f : α → s → m s) → (init : s) → List α → m s
  | f, s, []      => pure s
  | f, s, a :: as => do
    let s' ← foldrM f s as
    f a s'

@[specialize]
def firstM {m : Type u → Type v} [Monad m] [Alternative m] {α : Type w} {β : Type u} (f : α → m β) : List α → m β
  | []    => failure
  | a::as => f a <|> firstM f as

@[specialize]
def anyM {m : Type → Type u} [Monad m] {α : Type v} (f : α → m Bool) : List α → m Bool
  | []    => pure false
  | a::as => do
    match (← f a) with
    | true  => pure true
    | false => anyM f as

@[specialize]
def allM {m : Type → Type u} [Monad m] {α : Type v} (f : α → m Bool) : List α → m Bool
  | []    => pure true
  | a::as => do
    match (← f a) with
    | true  => allM f as
    | false => pure false

@[specialize]
def findM? {m : Type → Type u} [Monad m] {α : Type} (p : α → m Bool) : List α → m (Option α)
  | []    => pure none
  | a::as => do
    match (← p a) with
    | true  => pure (some a)
    | false => findM? p as

@[specialize]
def findSomeM? {m : Type u → Type v} [Monad m] {α : Type w} {β : Type u} (f : α → m (Option β)) : List α → m (Option β)
  | []    => pure none
  | a::as => do
    match (← f a) with
    | some b => pure (some b)
    | none   => findSomeM? f as

@[inline] protected def forIn {α : Type u} {β : Type v} {m : Type v → Type w} [Monad m] (as : List α) (init : β) (f : α → β → m (ForInStep β)) : m β :=
  let rec @[specialize] loop
    | [], b    => pure b
    | a::as, b => do
      match (← f a b) with
      | ForInStep.done b  => pure b
      | ForInStep.yield b => loop as b
  loop as init

instance : ForIn m (List α) α where
  forIn := List.forIn

instance : Foldable m (List α) α where
  foldlM := List.foldlM

-- Add two simplification lemmas for `foldlM` over lists
@[simp] theorem foldlM_nil  [Monad m] (f : δ → α → m δ) (d : δ) : foldlM f d ([] : List α) = pure d :=
  rfl
@[simp] theorem foldlM_cons [Monad m] (f : δ → α → m δ) (d : δ) (a : α) (as : List α) : foldlM f d (a::as) = f d a >>= fun d => foldlM f d as :=
  rfl

end List
