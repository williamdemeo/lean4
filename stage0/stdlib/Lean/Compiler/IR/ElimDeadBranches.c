// Lean compiler output
// Module: Lean.Compiler.IR.ElimDeadBranches
// Imports: Init Lean.Compiler.IR.Format Lean.Compiler.IR.Basic Lean.Compiler.IR.CompilerM
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_IR_UnreachableBranches_Value_merge_match__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4;
lean_object* l_Lean_IR_UnreachableBranches_Value_merge_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default;
lean_object* l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__4___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_Lean_Compiler_IR_Basic___instance__11;
lean_object* l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3___closed__1;
lean_object* l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5;
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_getD___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__1(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice_match__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_elimDeadBranches___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__2;
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__4___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
extern lean_object* l_Option_get_x21___rarg___closed__3;
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_HashMap_inhabited___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_merge(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_2495____closed__4;
extern lean_object* l_Lean_List_format___rarg___closed__1;
extern lean_object* l_Lean_registerInternalExceptionId___closed__2;
lean_object* l_Array_umapMAux___main___at_Lean_IR_elimDeadBranches___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__4;
lean_object* l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___rarg(lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3___boxed(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__1;
extern lean_object* l_Std_PersistentArrayNode_Std_Data_PersistentArray___instance__1___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2___boxed(lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain___boxed(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_containsCtor___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPParams(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferStep_match__1(lean_object*);
lean_object* l_Lean_Format_joinSep___at_Lean_IR_UnreachableBranches_Value_format___spec__4(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_Value_format___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format_match__1(lean_object*);
lean_object* l_Std_mkPersistentArray___rarg(lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Array_isEqvAux___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_beq_match__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_projValue(lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_resetParamAssignment___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(lean_object*, lean_object*);
extern lean_object* l_Lean_Format_sbracket___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__2(lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2;
uint8_t l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__10(lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__6(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(lean_object*, lean_object*);
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format(lean_object*);
lean_object* l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__4(lean_object*, size_t, size_t);
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__1(lean_object*);
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(lean_object*, uint8_t, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_PersistentHashMap_insertAux___rarg___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_inferStep_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_IR_UnreachableBranches_Value_beq(lean_object*, lean_object*);
lean_object* l_Lean_SMap_switch___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16(lean_object*);
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1___boxed(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__1(lean_object*);
lean_object* l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_resetParamAssignment(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_addFunctionSummary(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_resetVarAssignment(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt;
lean_object* l_Lean_IR_elimDeadBranches_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__2(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__3(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__9(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_widening(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_updateCurrFnSummary(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findVarValue(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5;
size_t l_Lean_Name_hash(lean_object*);
uint8_t l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1___boxed(lean_object*);
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__5(lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(lean_object*, uint8_t, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDead___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_persistentEnvExtensionsRef;
extern lean_object* l_IO_Error_Inhabited___closed__1;
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__5___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
extern lean_object* l_Lean_Lean_Data_Format___instance__10___rarg___closed__1;
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__3___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__5;
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2(lean_object*);
extern lean_object* l_Lean_IR_Decl_Lean_Compiler_IR_Basic___instance__17;
size_t l_USize_mul(size_t, size_t);
lean_object* l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension_match__1(lean_object*);
lean_object* l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_Lean_Compiler_IR_Basic___instance__15;
lean_object* l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_projValue___boxed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_IR_UnreachableBranches_containsCtor(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2;
extern lean_object* l_Array_iterateMAux___main___at_Lean_ppGoal___spec__6___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___boxed(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Format_sbracket___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__1(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_Value_format___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_InterpContext_lctx___default;
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__18(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain_match__1(lean_object*);
lean_object* l_Lean_IR_elimDeadBranches(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_setBody(lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__1;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__8(lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___boxed(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue_match__1(lean_object*);
lean_object* l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_elimDeadBranches_match__1(lean_object*);
extern lean_object* l_Lean_Format_sbracket___closed__4;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2(lean_object*);
extern lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1;
lean_object* l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldAux___main___at_Lean_IR_elimDeadBranches___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__2;
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Format_paren___closed__2;
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
lean_object* l_Std_mkHashMap___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_projValue_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Format_paren___closed__4;
lean_object* l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferStep(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_CtorInfo_beq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_beq_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__2(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDead_match__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_elimDeadBranches___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDead(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6(lean_object*, lean_object*);
lean_object* l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___spec__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_Lean_Compiler_IR_Basic___instance__14;
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPBody(lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_EnvExtensionInterfaceUnsafe_Lean_Environment___instance__6___closed__2;
lean_object* lean_mk_array(lean_object*, lean_object*);
extern size_t l_Std_PersistentHashMap_insertAux___rarg___closed__2;
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_resetVarAssignment___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1(lean_object*);
extern lean_object* l_Lean_Lean_Data_Format___instance__20___closed__1;
lean_object* l_List_elem___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12___boxed(lean_object*, lean_object*);
lean_object* l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
extern lean_object* l_Lean_List_format___rarg___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__1(lean_object*, lean_object*);
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4;
lean_object* l_Lean_List_format___at_Lean_IR_UnreachableBranches_Value_format___spec__3(lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__2(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Format_paren___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4___closed__1;
lean_object* l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_projValue_match__1(lean_object*);
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__13(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__6;
lean_object* l_Lean_IR_UnreachableBranches_containsCtor_match__1(lean_object*);
lean_object* l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4;
lean_object* l_Lean_IR_FnBody_body(lean_object*);
lean_object* l_EStateM_pure___rarg(lean_object*, lean_object*);
lean_object* l_Std_mkHashMap___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12(lean_object*);
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__13___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__2(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3(lean_object*, size_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__3(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_containsCtor_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1;
lean_object* l_Nat_foldAux___main___at_Lean_IR_elimDeadBranches___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3;
lean_object* l_Lean_IR_UnreachableBranches_findVarValue___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDead_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__1;
lean_object* l___private_Init_Util_2__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4;
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__17(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Std_PersistentArray_getAux___rarg___closed__1;
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(1);
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_beq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_7);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_apply_2(x_7, x_1, x_2);
return x_10;
}
}
case 1:
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_4, x_11);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = lean_apply_2(x_7, x_1, x_2);
return x_13;
}
}
case 2:
{
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_7);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_apply_4(x_5, x_14, x_15, x_16, x_17);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_5);
x_19 = lean_apply_2(x_7, x_1, x_2);
return x_19;
}
}
default: 
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
lean_dec(x_2);
x_22 = lean_apply_2(x_6, x_20, x_21);
return x_22;
}
else
{
lean_object* x_23; 
lean_dec(x_6);
x_23 = lean_apply_2(x_7, x_1, x_2);
return x_23;
}
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_beq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_beq_match__1___rarg), 7, 0);
return x_2;
}
}
uint8_t l_Array_isEqvAux___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_4, x_6);
x_11 = lean_array_fget(x_5, x_6);
x_12 = l_Lean_IR_UnreachableBranches_Value_beq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_3 = lean_box(0);
x_6 = x_15;
goto _start;
}
}
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(x_1, x_2, x_5);
x_7 = l_Lean_IR_UnreachableBranches_Value_beq(x_1, x_4);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(x_1, x_2, x_5);
x_7 = 0;
x_8 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(x_4, x_7, x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
else
{
return x_6;
}
}
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(x_1, x_2, x_5);
x_7 = l_Lean_IR_UnreachableBranches_Value_beq(x_4, x_1);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(x_1, x_2, x_5);
x_7 = 0;
x_8 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(x_4, x_7, x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
else
{
return x_6;
}
}
}
}
uint8_t l_Lean_IR_UnreachableBranches_Value_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
case 2:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = l_Lean_IR_CtorInfo_beq(x_7, x_9);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_get_size(x_8);
x_14 = lean_array_get_size(x_10);
x_15 = lean_nat_dec_eq(x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_isEqvAux___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__1(x_8, x_10, lean_box(0), x_8, x_10, x_17);
return x_18;
}
}
}
else
{
uint8_t x_19; 
x_19 = 0;
return x_19;
}
}
default: 
{
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_2, 0);
x_22 = 1;
x_23 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(x_21, x_22, x_20);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = 0;
return x_24;
}
else
{
uint8_t x_25; 
x_25 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(x_20, x_22, x_21);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = 0;
return x_26;
}
}
}
}
}
lean_object* l_Array_isEqvAux___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_UnreachableBranches_Value_beq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_beq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_2);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 2)
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_apply_7(x_4, x_7, x_9, x_10, x_8, x_2, x_11, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_4);
x_14 = lean_apply_2(x_5, x_1, x_2);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_4);
x_15 = lean_apply_2(x_5, x_1, x_2);
return x_15;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_addChoice_match__1___rarg), 5, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Compiler.IR.ElimDeadBranches");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.IR.UnreachableBranches.Value.addChoice");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid addChoice");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1;
x_2 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2;
x_3 = lean_unsigned_to_nat(41u);
x_4 = lean_unsigned_to_nat(10u);
x_5 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 2)
{
if (lean_obj_tag(x_3) == 2)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = l_Lean_IR_CtorInfo_beq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_1, x_8, x_3);
lean_ctor_set(x_2, 1, x_13);
return x_2;
}
else
{
lean_object* x_14; 
x_14 = lean_apply_2(x_1, x_6, x_3);
lean_ctor_set(x_2, 0, x_14);
return x_2;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
x_18 = l_Lean_IR_CtorInfo_beq(x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_1, x_15, x_3);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_6);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_apply_2(x_1, x_6, x_3);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_15);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_box(0);
x_24 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4;
x_25 = lean_panic_fn(x_23, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = lean_box(0);
x_27 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4;
x_28 = lean_panic_fn(x_26, x_27);
return x_28;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_merge_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_11; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_11 = lean_apply_1(x_3, x_2);
return x_11;
}
case 1:
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; 
lean_dec(x_5);
x_12 = lean_apply_1(x_4, x_1);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = lean_apply_1(x_5, x_2);
return x_13;
}
}
case 2:
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
case 1:
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
x_15 = lean_apply_1(x_6, x_1);
return x_15;
}
case 2:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_4);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
x_20 = lean_apply_6(x_7, x_1, x_16, x_17, x_2, x_18, x_19);
return x_20;
}
default: 
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
lean_dec(x_2);
x_22 = lean_apply_2(x_10, x_1, x_21);
return x_22;
}
}
}
default: 
{
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_23; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_23 = lean_apply_1(x_4, x_1);
return x_23;
}
case 1:
{
lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
x_24 = lean_apply_1(x_6, x_1);
return x_24;
}
case 2:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_apply_2(x_9, x_25, x_2);
return x_26;
}
default: 
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
lean_dec(x_2);
x_29 = lean_apply_2(x_8, x_27, x_28);
return x_29;
}
}
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_merge_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_merge_match__1___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
x_10 = lean_nat_sub(x_3, x_4);
lean_dec(x_4);
x_11 = l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__1;
x_12 = lean_array_get(x_11, x_1, x_10);
x_13 = lean_array_get(x_11, x_2, x_10);
lean_dec(x_10);
x_14 = l_Lean_IR_UnreachableBranches_Value_merge(x_12, x_13);
x_15 = lean_array_push(x_5, x_14);
x_4 = x_9;
x_5 = x_15;
goto _start;
}
else
{
lean_dec(x_4);
return x_5;
}
}
}
static lean_object* _init_l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_merge), 2, 0);
return x_1;
}
}
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_6 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_5, x_1, x_3);
x_1 = x_6;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_merge(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
return x_2;
}
case 1:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(1);
return x_3;
}
}
case 2:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
return x_1;
}
case 1:
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(1);
return x_4;
}
case 2:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = l_Lean_IR_CtorInfo_beq(x_5, x_7);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_2, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_2, 0);
lean_dec(x_16);
x_17 = lean_array_get_size(x_6);
x_18 = l_Array_empty___closed__1;
lean_inc(x_17);
x_19 = l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(x_6, x_8, x_17, x_17, x_18);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_6);
lean_ctor_set(x_2, 1, x_19);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
x_20 = lean_array_get_size(x_6);
x_21 = l_Array_empty___closed__1;
lean_inc(x_20);
x_22 = l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(x_6, x_8, x_20, x_20, x_21);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_6);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_5);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
default: 
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_2, 0);
x_26 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_27 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_26, x_25, x_1);
lean_ctor_set(x_2, 0, x_27);
return x_2;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
lean_dec(x_2);
x_29 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_30 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_29, x_28, x_1);
x_31 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_31, 0, x_30);
return x_31;
}
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
return x_1;
}
case 1:
{
lean_object* x_32; 
lean_dec(x_1);
x_32 = lean_box(1);
return x_32;
}
case 2:
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_1);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_1, 0);
x_35 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_36 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_35, x_34, x_2);
lean_ctor_set(x_1, 0, x_36);
return x_1;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
lean_dec(x_1);
x_38 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_39 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_38, x_37, x_2);
x_40 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_40, 0, x_39);
return x_40;
}
}
default: 
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_2);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_2, 0);
x_44 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2(x_43, x_41);
lean_ctor_set(x_2, 0, x_44);
return x_2;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_2, 0);
lean_inc(x_45);
lean_dec(x_2);
x_46 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2(x_45, x_41);
x_47 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
}
}
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_format_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_2(x_5, x_10, x_11);
return x_12;
}
default: 
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_1(x_4, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_format_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_format_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_Value_format___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Array_iterateMAux___main___at_Lean_ppGoal___spec__6___closed__1;
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Lean_IR_UnreachableBranches_Value_format(x_7);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_3, x_12);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_11;
goto _start;
}
}
}
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_box(0);
x_4 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_Value_format___spec__2(x_1, x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Format_joinSep___at_Lean_IR_UnreachableBranches_Value_format___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_IR_UnreachableBranches_Value_format(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Lean_IR_UnreachableBranches_Value_format(x_7);
lean_inc(x_2);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_10 = l_Lean_Format_joinSep___at_Lean_IR_UnreachableBranches_Value_format___spec__4(x_4, x_2);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_List_format___at_Lean_IR_UnreachableBranches_Value_format___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_Lean_List_format___rarg___closed__1;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_3 = l_Lean_List_format___rarg___closed__3;
x_4 = l_Lean_Format_joinSep___at_Lean_IR_UnreachableBranches_Value_format___spec__4(x_1, x_3);
x_5 = l_Lean_Format_sbracket___closed__3;
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Lean_Format_sbracket___closed__4;
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_Lean_Format_sbracket___closed__2;
x_10 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = 0;
x_12 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_11);
return x_12;
}
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bot");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_UnreachableBranches_Value_format___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("top");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_UnreachableBranches_Value_format___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("@");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_UnreachableBranches_Value_format___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_format(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_Value_format___closed__2;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_Value_format___closed__4;
return x_3;
}
case 2:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Array_isEmpty___rarg(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___spec__1(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_box(0);
x_11 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_Value_format___spec__2(x_5, x_5, x_9, x_10);
lean_dec(x_5);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Format_paren___closed__3;
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l_Lean_Format_paren___closed__4;
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Format_paren___closed__2;
x_18 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = 0;
x_20 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*1, x_19);
x_21 = l_Lean_Lean_Data_Format___instance__10___rarg___closed__1;
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_5);
x_23 = lean_ctor_get(x_4, 0);
lean_inc(x_23);
lean_dec(x_4);
x_24 = l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___spec__1(x_23);
x_25 = l_Lean_Lean_Data_Format___instance__10___rarg___closed__1;
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
default: 
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = l_Lean_List_format___at_Lean_IR_UnreachableBranches_Value_format___spec__3(x_27);
x_29 = l_Lean_IR_UnreachableBranches_Value_format___closed__6;
x_30 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_Value_format___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_Value_format___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_format), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lean_Data_Format___instance__20___closed__1;
x_2 = l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_truncate_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_3, x_6, x_7, x_2);
return x_8;
}
case 3:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_4, x_9, x_2);
return x_10;
}
default: 
{
lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_apply_2(x_5, x_1, x_2);
return x_11;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_truncate_match__2___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_10, x_3, x_15);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_List_map___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_6, x_2);
x_9 = l_List_map___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_9);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_10, x_2);
x_13 = l_List_map___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(x_1, x_2, x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
uint8_t l_List_elem___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = l_Lean_IR_UnreachableBranches_Value_beq(x_1, x_4);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = l_Lean_Name_getPrefix(x_7);
lean_dec(x_7);
x_9 = l_Lean_NameSet_contains(x_3, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_1);
x_10 = lean_environment_find(x_1, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
x_11 = x_6;
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1(x_1, x_3, x_12, x_11);
x_14 = x_13;
lean_ctor_set(x_2, 1, x_14);
return x_2;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
switch (lean_obj_tag(x_15)) {
case 0:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_8);
x_16 = x_6;
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2(x_1, x_3, x_17, x_16);
x_19 = x_18;
lean_ctor_set(x_2, 1, x_19);
return x_2;
}
case 1:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_15);
lean_dec(x_8);
x_20 = x_6;
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3(x_1, x_3, x_21, x_20);
x_23 = x_22;
lean_ctor_set(x_2, 1, x_23);
return x_2;
}
case 2:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_8);
x_24 = x_6;
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4(x_1, x_3, x_25, x_24);
x_27 = x_26;
lean_ctor_set(x_2, 1, x_27);
return x_2;
}
case 3:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_15);
lean_dec(x_8);
x_28 = x_6;
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5(x_1, x_3, x_29, x_28);
x_31 = x_30;
lean_ctor_set(x_2, 1, x_31);
return x_2;
}
case 4:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_15);
lean_dec(x_8);
x_32 = x_6;
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6(x_1, x_3, x_33, x_32);
x_35 = x_34;
lean_ctor_set(x_2, 1, x_35);
return x_2;
}
case 5:
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_15, 0);
lean_inc(x_36);
lean_dec(x_15);
x_37 = lean_ctor_get_uint8(x_36, sizeof(void*)*5);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_8);
x_38 = x_6;
x_39 = lean_unsigned_to_nat(0u);
x_40 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7(x_1, x_3, x_39, x_38);
x_41 = x_40;
lean_ctor_set(x_2, 1, x_41);
return x_2;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_box(0);
x_43 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_3, x_8, x_42);
x_44 = x_6;
x_45 = lean_unsigned_to_nat(0u);
x_46 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8(x_1, x_43, x_45, x_44);
x_47 = x_46;
lean_ctor_set(x_2, 1, x_47);
return x_2;
}
}
case 6:
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_15);
lean_dec(x_8);
x_48 = x_6;
x_49 = lean_unsigned_to_nat(0u);
x_50 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9(x_1, x_3, x_49, x_48);
x_51 = x_50;
lean_ctor_set(x_2, 1, x_51);
return x_2;
}
default: 
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_15);
lean_dec(x_8);
x_52 = x_6;
x_53 = lean_unsigned_to_nat(0u);
x_54 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10(x_1, x_3, x_53, x_52);
x_55 = x_54;
lean_ctor_set(x_2, 1, x_55);
return x_2;
}
}
}
}
else
{
lean_object* x_56; 
lean_dec(x_8);
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_56 = lean_box(1);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_57 = lean_ctor_get(x_2, 0);
x_58 = lean_ctor_get(x_2, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_2);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
x_60 = l_Lean_Name_getPrefix(x_59);
lean_dec(x_59);
x_61 = l_Lean_NameSet_contains(x_3, x_60);
if (x_61 == 0)
{
lean_object* x_62; 
lean_inc(x_60);
lean_inc(x_1);
x_62 = lean_environment_find(x_1, x_60);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_60);
x_63 = x_58;
x_64 = lean_unsigned_to_nat(0u);
x_65 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1(x_1, x_3, x_64, x_63);
x_66 = x_65;
x_67 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_67, 0, x_57);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
else
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_62, 0);
lean_inc(x_68);
lean_dec(x_62);
switch (lean_obj_tag(x_68)) {
case 0:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_68);
lean_dec(x_60);
x_69 = x_58;
x_70 = lean_unsigned_to_nat(0u);
x_71 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2(x_1, x_3, x_70, x_69);
x_72 = x_71;
x_73 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_73, 0, x_57);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
case 1:
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_68);
lean_dec(x_60);
x_74 = x_58;
x_75 = lean_unsigned_to_nat(0u);
x_76 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3(x_1, x_3, x_75, x_74);
x_77 = x_76;
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_57);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
case 2:
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_68);
lean_dec(x_60);
x_79 = x_58;
x_80 = lean_unsigned_to_nat(0u);
x_81 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4(x_1, x_3, x_80, x_79);
x_82 = x_81;
x_83 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_83, 0, x_57);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
case 3:
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_68);
lean_dec(x_60);
x_84 = x_58;
x_85 = lean_unsigned_to_nat(0u);
x_86 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5(x_1, x_3, x_85, x_84);
x_87 = x_86;
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_57);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
case 4:
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_68);
lean_dec(x_60);
x_89 = x_58;
x_90 = lean_unsigned_to_nat(0u);
x_91 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6(x_1, x_3, x_90, x_89);
x_92 = x_91;
x_93 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_93, 0, x_57);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
case 5:
{
lean_object* x_94; uint8_t x_95; 
x_94 = lean_ctor_get(x_68, 0);
lean_inc(x_94);
lean_dec(x_68);
x_95 = lean_ctor_get_uint8(x_94, sizeof(void*)*5);
lean_dec(x_94);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_60);
x_96 = x_58;
x_97 = lean_unsigned_to_nat(0u);
x_98 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7(x_1, x_3, x_97, x_96);
x_99 = x_98;
x_100 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_100, 0, x_57);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_101 = lean_box(0);
x_102 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_3, x_60, x_101);
x_103 = x_58;
x_104 = lean_unsigned_to_nat(0u);
x_105 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8(x_1, x_102, x_104, x_103);
x_106 = x_105;
x_107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_107, 0, x_57);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
case 6:
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_68);
lean_dec(x_60);
x_108 = x_58;
x_109 = lean_unsigned_to_nat(0u);
x_110 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9(x_1, x_3, x_109, x_108);
x_111 = x_110;
x_112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_112, 0, x_57);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
default: 
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_68);
lean_dec(x_60);
x_113 = x_58;
x_114 = lean_unsigned_to_nat(0u);
x_115 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10(x_1, x_3, x_114, x_113);
x_116 = x_115;
x_117 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_117, 0, x_57);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
}
else
{
lean_object* x_118; 
lean_dec(x_60);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_3);
lean_dec(x_1);
x_118 = lean_box(1);
return x_118;
}
}
}
case 3:
{
uint8_t x_119; 
x_119 = !lean_is_exclusive(x_2);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; 
x_120 = lean_ctor_get(x_2, 0);
x_121 = l_List_map___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(x_1, x_3, x_120);
x_122 = lean_box(1);
x_123 = l_List_elem___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(x_122, x_121);
if (x_123 == 0)
{
lean_ctor_set(x_2, 0, x_121);
return x_2;
}
else
{
lean_object* x_124; 
lean_dec(x_121);
lean_free_object(x_2);
x_124 = lean_box(1);
return x_124;
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_125 = lean_ctor_get(x_2, 0);
lean_inc(x_125);
lean_dec(x_2);
x_126 = l_List_map___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(x_1, x_3, x_125);
x_127 = lean_box(1);
x_128 = l_List_elem___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(x_127, x_126);
if (x_128 == 0)
{
lean_object* x_129; 
x_129 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_129, 0, x_126);
return x_129;
}
else
{
lean_object* x_130; 
lean_dec(x_126);
x_130 = lean_box(1);
return x_130;
}
}
}
default: 
{
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
}
}
}
lean_object* l_List_elem___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_elem___main___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_widening(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_3);
x_5 = l_Lean_NameSet_empty;
x_6 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Name_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_1);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; size_t x_85; uint8_t x_86; 
x_83 = lean_unsigned_to_nat(0u);
x_84 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__4(x_1, x_83, x_4, x_5);
x_85 = 7;
x_86 = x_85 <= x_3;
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_84);
x_88 = lean_unsigned_to_nat(4u);
x_89 = lean_nat_dec_lt(x_87, x_88);
lean_dec(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_84, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_92 = l_Std_PersistentHashMap_insertAux___rarg___closed__3;
x_93 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5(x_3, x_90, x_91, x_90, x_83, x_92);
lean_dec(x_91);
lean_dec(x_90);
return x_93;
}
else
{
return x_84;
}
}
else
{
return x_84;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; size_t x_99; uint8_t x_100; 
x_94 = lean_ctor_get(x_1, 0);
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_1);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_unsigned_to_nat(0u);
x_98 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__4(x_96, x_97, x_4, x_5);
x_99 = 7;
x_100 = x_99 <= x_3;
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_101 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_98);
x_102 = lean_unsigned_to_nat(4u);
x_103 = lean_nat_dec_lt(x_101, x_102);
lean_dec(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_98, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
lean_dec(x_98);
x_106 = l_Std_PersistentHashMap_insertAux___rarg___closed__3;
x_107 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5(x_3, x_104, x_105, x_104, x_97, x_106);
lean_dec(x_105);
lean_dec(x_104);
return x_107;
}
else
{
return x_98;
}
}
else
{
return x_98;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = 1;
x_9 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = l_Lean_Name_hash(x_2);
x_15 = 1;
x_16 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
uint8_t l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Name_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__10(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__9(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__8(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Name_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__8(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Std_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__2(x_6, x_2, x_3);
x_8 = 0;
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Std_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__2(x_10, x_2, x_3);
x_12 = 0;
x_13 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*2, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__6(x_15, x_2, x_3);
x_17 = 1;
lean_ctor_set(x_1, 0, x_16);
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_17);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__6(x_18, x_2, x_3);
x_21 = 1;
x_22 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_21);
return x_22;
}
}
}
}
lean_object* l_Std_mkHashMap___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__1(x_4, x_8, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_3 = x_12;
x_4 = x_10;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14(x_7, x_7, x_8, x_4);
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
x_4 = x_9;
goto _start;
}
}
}
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15(x_2, x_2, x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_SMap_switch___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_2 == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = 0;
x_8 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*2, x_7);
return x_8;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_name_eq(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_5 = x_13;
goto _start;
}
else
{
lean_dec(x_5);
return x_11;
}
}
}
}
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_persistentEnvExtensionsRef;
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_array_get_size(x_6);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19(x_1, x_6, x_6, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_free_object(x_4);
x_11 = lean_box(0);
x_12 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_11, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = l_System_FilePath_dirName___closed__1;
x_15 = l_Lean_Name_toStringWithSep___main(x_14, x_13);
x_16 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_17 = lean_string_append(x_16, x_15);
lean_dec(x_15);
x_18 = l_Lean_registerInternalExceptionId___closed__2;
x_19 = lean_string_append(x_17, x_18);
x_20 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_20);
return x_4;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_4, 0);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_4);
x_23 = lean_array_get_size(x_21);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Array_anyRangeMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19(x_1, x_21, x_21, x_23, x_24);
lean_dec(x_23);
lean_dec(x_21);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(0);
x_27 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_26, x_22);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
lean_dec(x_1);
x_29 = l_System_FilePath_dirName___closed__1;
x_30 = l_Lean_Name_toStringWithSep___main(x_29, x_28);
x_31 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_32 = lean_string_append(x_31, x_30);
lean_dec(x_30);
x_33 = l_Lean_registerInternalExceptionId___closed__2;
x_34 = lean_string_append(x_32, x_33);
x_35 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_22);
return x_36;
}
}
}
}
lean_object* l_Lean_registerSimplePersistentEnvExtension___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_box(0);
x_6 = l_Array_empty___closed__1;
lean_inc(x_4);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2), 3, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3), 2, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1;
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_10);
lean_ctor_set(x_14, 3, x_11);
lean_ctor_set(x_14, 4, x_12);
lean_ctor_set(x_14, 5, x_13);
x_15 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__18(x_14, x_2);
return x_15;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__1(x_1, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__1;
x_3 = l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__2;
x_4 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15(x_1, x_1, x_2, x_3);
x_5 = l_Lean_SMap_switch___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16(x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unreachBranchesFunSummary");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2;
x_2 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3;
x_3 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4;
x_4 = l_Lean_initFn____x40_Lean_Environment___hyg_2495____closed__4;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5;
x_3 = l_Lean_registerSimplePersistentEnvExtension___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__17(x_2, x_1);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__13(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_empty___closed__1;
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_IO_Error_Inhabited___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___rarg), 1, 0);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_Lean_Environment___instance__6___closed__2;
x_2 = lean_box(0);
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1;
x_4 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2;
x_5 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3;
x_6 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_addFunctionSummary(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = l_Lean_IR_UnreachableBranches_functionSummariesExt;
x_6 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_5, x_1, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Name_hash(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(x_4, x_2);
lean_dec(x_4);
return x_7;
}
else
{
lean_dec(x_4);
return x_6;
}
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(x_8, x_2);
lean_dec(x_8);
return x_9;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt;
x_4 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_3, x_1);
x_5 = l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1(x_4, x_2);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_InterpContext_lctx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_usize_of_nat(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findVarValue(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_Std_HashMap_inhabited___closed__1;
x_7 = lean_array_get(x_6, x_4, x_5);
lean_dec(x_4);
x_8 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_7, x_1);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findVarValue___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_findVarValue(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findArgValue_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_findArgValue_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_findArgValue_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findArgValue(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Lean_IR_UnreachableBranches_findVarValue(x_4, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_findArgValue___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_findArgValue(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_mkHashMap___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
uint8_t l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_usize_of_nat(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = lean_usize_of_nat(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__6(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__5(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_nat_dec_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_nat_dec_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_usize_of_nat(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_IR_UnreachableBranches_findVarValue(x_1, x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_array_get_size(x_10);
x_13 = lean_nat_dec_lt(x_11, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(0);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_array_fget(x_10, x_11);
x_16 = l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
x_17 = lean_array_fset(x_10, x_11, x_16);
x_18 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_9);
x_19 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_15, x_1, x_18);
x_20 = lean_array_fset(x_17, x_11, x_19);
lean_ctor_set(x_7, 0, x_20);
x_21 = lean_box(0);
lean_ctor_set(x_5, 0, x_21);
return x_5;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_5, 0);
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_array_get_size(x_23);
x_27 = lean_nat_dec_lt(x_25, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_24);
x_29 = lean_box(0);
lean_ctor_set(x_5, 1, x_28);
lean_ctor_set(x_5, 0, x_29);
return x_5;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_30 = lean_array_fget(x_23, x_25);
x_31 = l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
x_32 = lean_array_fset(x_23, x_25, x_31);
x_33 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_22);
x_34 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_30, x_1, x_33);
x_35 = lean_array_fset(x_32, x_25, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_24);
x_37 = lean_box(0);
lean_ctor_set(x_5, 1, x_36);
lean_ctor_set(x_5, 0, x_37);
return x_5;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_38 = lean_ctor_get(x_5, 1);
x_39 = lean_ctor_get(x_5, 0);
lean_inc(x_38);
lean_inc(x_39);
lean_dec(x_5);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_42 = x_38;
} else {
 lean_dec_ref(x_38);
 x_42 = lean_box(0);
}
x_43 = lean_ctor_get(x_3, 0);
x_44 = lean_array_get_size(x_40);
x_45 = lean_nat_dec_lt(x_43, x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_39);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_42)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_42;
}
lean_ctor_set(x_46, 0, x_40);
lean_ctor_set(x_46, 1, x_41);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_49 = lean_array_fget(x_40, x_43);
x_50 = l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
x_51 = lean_array_fset(x_40, x_43, x_50);
x_52 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_39);
x_53 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_49, x_1, x_52);
x_54 = lean_array_fset(x_51, x_43, x_53);
if (lean_is_scalar(x_42)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_42;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_41);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
lean_object* l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_UnreachableBranches_updateVarAssignment(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_resetVarAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_array_fget(x_5, x_6);
x_12 = l_Std_HashMap_inhabited___closed__1;
x_13 = lean_array_fset(x_5, x_6, x_12);
x_14 = lean_box(0);
x_15 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_11, x_1, x_14);
x_16 = lean_array_fset(x_13, x_6, x_15);
lean_ctor_set(x_3, 0, x_16);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_array_get_size(x_19);
x_23 = lean_nat_dec_lt(x_21, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_array_fget(x_19, x_21);
x_28 = l_Std_HashMap_inhabited___closed__1;
x_29 = lean_array_fset(x_19, x_21, x_28);
x_30 = lean_box(0);
x_31 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_27, x_1, x_30);
x_32 = lean_array_fset(x_29, x_21, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_20);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_resetVarAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_resetVarAssignment(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_resetParamAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_IR_UnreachableBranches_resetVarAssignment(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_resetParamAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_resetParamAssignment(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_3, x_6, x_7, x_2);
return x_8;
}
case 3:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_4, x_9, x_2);
return x_10;
}
default: 
{
lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_apply_2(x_5, x_1, x_2);
return x_11;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_projValue_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_Lean_IR_UnreachableBranches_projValue(x_4, x_1);
x_7 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_6);
x_2 = x_7;
x_3 = x_5;
goto _start;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_box(0);
x_5 = l_Array_getD___rarg(x_3, x_2, x_4);
return x_5;
}
case 3:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_box(0);
x_8 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___spec__1(x_2, x_7, x_6);
return x_8;
}
default: 
{
lean_inc(x_1);
return x_1;
}
}
}
}
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_projValue(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpExpr_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpExpr_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
case 3:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_3, x_9, x_10);
return x_11;
}
case 6:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_2(x_4, x_12, x_13);
return x_14;
}
default: 
{
lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_apply_1(x_5, x_1);
return x_15;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpExpr_match__3___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_1, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_7 = x_2;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_2, x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_fset(x_2, x_1, x_10);
x_12 = x_9;
x_13 = l_Lean_IR_UnreachableBranches_findArgValue(x_12, x_3, x_4);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_1, x_16);
x_18 = x_14;
x_19 = lean_array_fset(x_11, x_1, x_18);
lean_dec(x_1);
x_1 = x_17;
x_2 = x_19;
x_4 = x_15;
goto _start;
}
}
}
lean_object* l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_IR_Decl_name(x_7);
lean_dec(x_7);
x_9 = lean_name_eq(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
}
}
lean_object* l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__4(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = x_2 >> x_3;
x_6 = lean_usize_to_nat(x_5);
x_7 = l_Std_PersistentArray_getAux___rarg___closed__1;
x_8 = lean_array_get(x_7, x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
x_9 = 1;
x_10 = x_9 << x_3;
x_11 = x_10 - x_9;
x_12 = x_2 & x_11;
x_13 = 5;
x_14 = x_3 - x_13;
x_1 = x_8;
x_2 = x_12;
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_usize_to_nat(x_2);
x_18 = l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__1;
x_19 = lean_array_get(x_18, x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
return x_19;
}
}
}
lean_object* l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
x_4 = lean_nat_dec_le(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_usize_of_nat(x_2);
x_7 = lean_ctor_get_usize(x_1, 4);
lean_dec(x_1);
x_8 = l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__4(x_5, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_nat_sub(x_2, x_3);
lean_dec(x_3);
x_11 = l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__1;
x_12 = lean_array_get(x_11, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
return x_12;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = x_5;
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1___boxed), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
x_9 = x_8;
x_10 = lean_apply_2(x_9, x_2, x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
case 3:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l_Lean_IR_UnreachableBranches_findVarValue(x_19, x_2, x_3);
lean_dec(x_2);
lean_dec(x_19);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = l_Lean_IR_UnreachableBranches_projValue(x_22, x_18);
lean_dec(x_18);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = l_Lean_IR_UnreachableBranches_projValue(x_24, x_18);
lean_dec(x_18);
lean_dec(x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
case 6:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
lean_dec(x_1);
x_29 = lean_ctor_get(x_2, 2);
lean_inc(x_29);
x_30 = l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f(x_29, x_28);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_2, 1);
lean_inc(x_31);
lean_dec(x_2);
x_32 = lean_unsigned_to_nat(0u);
x_33 = l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(x_28, x_31, x_32);
lean_dec(x_31);
lean_dec(x_28);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_box(1);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_3);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_33, 0);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_ctor_get(x_3, 1);
lean_inc(x_37);
x_38 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_37, x_36);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_3);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_28);
lean_dec(x_2);
x_40 = lean_ctor_get(x_30, 0);
lean_inc(x_40);
lean_dec(x_30);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_3);
return x_41;
}
}
default: 
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_2);
lean_dec(x_1);
x_42 = lean_box(1);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_3);
return x_43;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__4(x_1, x_4, x_5);
return x_6;
}
}
lean_object* l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_containsCtor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_apply_2(x_6, x_1, x_2);
return x_7;
}
case 1:
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_8 = lean_apply_1(x_3, x_2);
return x_8;
}
case 2:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_3(x_4, x_9, x_10, x_2);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_5, x_12, x_2);
return x_13;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_containsCtor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_containsCtor_match__1___rarg), 6, 0);
return x_2;
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(x_1, x_2, x_5);
x_7 = l_Lean_IR_UnreachableBranches_containsCtor(x_4, x_1);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_Lean_IR_UnreachableBranches_containsCtor(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
case 1:
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
case 2:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Lean_IR_CtorInfo_beq(x_5, x_2);
return x_6;
}
default: 
{
lean_object* x_7; uint8_t x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 0;
x_9 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(x_2, x_8, x_7);
return x_9;
}
}
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_containsCtor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_UnreachableBranches_containsCtor(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = x_4 >> x_5;
x_9 = 1;
x_10 = x_9 << x_5;
x_11 = x_10 - x_9;
x_12 = x_4 & x_11;
x_13 = 5;
x_14 = x_5 - x_13;
x_15 = lean_usize_to_nat(x_8);
x_16 = lean_array_get_size(x_7);
x_17 = lean_nat_dec_lt(x_15, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_7, x_15);
x_19 = l_Std_PersistentArrayNode_Std_Data_PersistentArray___instance__1___closed__1;
x_20 = lean_array_fset(x_7, x_15, x_19);
x_21 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_18, x_12, x_14);
x_22 = lean_array_fset(x_20, x_15, x_21);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_22);
return x_3;
}
}
else
{
lean_object* x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; size_t x_28; size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
lean_dec(x_3);
x_24 = x_4 >> x_5;
x_25 = 1;
x_26 = x_25 << x_5;
x_27 = x_26 - x_25;
x_28 = x_4 & x_27;
x_29 = 5;
x_30 = x_5 - x_29;
x_31 = lean_usize_to_nat(x_24);
x_32 = lean_array_get_size(x_23);
x_33 = lean_nat_dec_lt(x_31, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_23);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_array_fget(x_23, x_31);
x_36 = l_Std_PersistentArrayNode_Std_Data_PersistentArray___instance__1___closed__1;
x_37 = lean_array_fset(x_23, x_31, x_36);
x_38 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_35, x_28, x_30);
x_39 = lean_array_fset(x_37, x_31, x_38);
lean_dec(x_31);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_3);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_3, 0);
x_43 = lean_usize_to_nat(x_4);
x_44 = lean_array_get_size(x_42);
x_45 = lean_nat_dec_lt(x_43, x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_dec(x_43);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_array_fget(x_42, x_43);
x_47 = lean_box(1);
x_48 = lean_array_fset(x_42, x_43, x_47);
x_49 = lean_ctor_get(x_2, 2);
lean_inc(x_49);
lean_dec(x_2);
x_50 = l_Lean_IR_UnreachableBranches_Value_widening(x_49, x_1, x_46);
x_51 = lean_array_fset(x_48, x_43, x_50);
lean_dec(x_43);
lean_ctor_set(x_3, 0, x_51);
return x_3;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_3, 0);
lean_inc(x_52);
lean_dec(x_3);
x_53 = lean_usize_to_nat(x_4);
x_54 = lean_array_get_size(x_52);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_2);
lean_dec(x_1);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_52);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_57 = lean_array_fget(x_52, x_53);
x_58 = lean_box(1);
x_59 = lean_array_fset(x_52, x_53, x_58);
x_60 = lean_ctor_get(x_2, 2);
lean_inc(x_60);
lean_dec(x_2);
x_61 = l_Lean_IR_UnreachableBranches_Value_widening(x_60, x_1, x_57);
x_62 = lean_array_fset(x_59, x_53, x_61);
lean_dec(x_53);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_62);
return x_63;
}
}
}
}
}
lean_object* l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get_usize(x_3, 4);
x_9 = lean_ctor_get(x_3, 3);
x_10 = lean_nat_dec_le(x_9, x_4);
if (x_10 == 0)
{
size_t x_11; lean_object* x_12; 
x_11 = lean_usize_of_nat(x_4);
x_12 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_6, x_11, x_8);
lean_ctor_set(x_3, 0, x_12);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_nat_sub(x_4, x_9);
x_14 = lean_array_get_size(x_7);
x_15 = lean_nat_dec_lt(x_13, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_array_fget(x_7, x_13);
x_17 = lean_box(1);
x_18 = lean_array_fset(x_7, x_13, x_17);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_IR_UnreachableBranches_Value_widening(x_19, x_1, x_16);
x_21 = lean_array_fset(x_18, x_13, x_20);
lean_dec(x_13);
lean_ctor_set(x_3, 1, x_21);
return x_3;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_3, 0);
x_23 = lean_ctor_get(x_3, 1);
x_24 = lean_ctor_get(x_3, 2);
x_25 = lean_ctor_get_usize(x_3, 4);
x_26 = lean_ctor_get(x_3, 3);
lean_inc(x_26);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_3);
x_27 = lean_nat_dec_le(x_26, x_4);
if (x_27 == 0)
{
size_t x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_usize_of_nat(x_4);
x_29 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_22, x_28, x_25);
x_30 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_23);
lean_ctor_set(x_30, 2, x_24);
lean_ctor_set(x_30, 3, x_26);
lean_ctor_set_usize(x_30, 4, x_25);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_nat_sub(x_4, x_26);
x_32 = lean_array_get_size(x_23);
x_33 = lean_nat_dec_lt(x_31, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_23);
lean_ctor_set(x_34, 2, x_24);
lean_ctor_set(x_34, 3, x_26);
lean_ctor_set_usize(x_34, 4, x_25);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_array_fget(x_23, x_31);
x_36 = lean_box(1);
x_37 = lean_array_fset(x_23, x_31, x_36);
x_38 = lean_ctor_get(x_2, 2);
lean_inc(x_38);
lean_dec(x_2);
x_39 = l_Lean_IR_UnreachableBranches_Value_widening(x_38, x_1, x_35);
x_40 = lean_array_fset(x_37, x_31, x_39);
lean_dec(x_31);
x_41 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_41, 0, x_22);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_24);
lean_ctor_set(x_41, 3, x_26);
lean_ctor_set_usize(x_41, 4, x_25);
return x_41;
}
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateCurrFnSummary(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 1);
x_7 = l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(x_1, x_2, x_6, x_4);
lean_dec(x_4);
lean_ctor_set(x_3, 1, x_7);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_12 = l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(x_1, x_2, x_11, x_4);
lean_dec(x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_8 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_3, x_6, x_7);
return x_8;
}
}
lean_object* l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_5, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_5, x_11);
lean_dec(x_5);
x_13 = lean_nat_sub(x_4, x_12);
x_14 = lean_nat_sub(x_13, x_11);
lean_dec(x_13);
x_15 = l_Lean_IR_Lean_Compiler_IR_Basic___instance__14;
x_16 = lean_array_get(x_15, x_1, x_14);
x_17 = l_Lean_IR_Lean_Compiler_IR_Basic___instance__11;
x_18 = lean_array_get(x_17, x_2, x_14);
lean_dec(x_14);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_IR_UnreachableBranches_findVarValue(x_19, x_7, x_8);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_IR_UnreachableBranches_findArgValue(x_18, x_7, x_22);
lean_dec(x_18);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_21);
x_26 = l_Lean_IR_UnreachableBranches_Value_merge(x_21, x_24);
x_27 = l_Lean_IR_UnreachableBranches_Value_beq(x_26, x_21);
lean_dec(x_21);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_25);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_25, 0);
x_30 = lean_array_get_size(x_29);
x_31 = lean_nat_dec_lt(x_3, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
uint8_t x_32; 
lean_dec(x_26);
lean_dec(x_19);
x_32 = 1;
x_5 = x_12;
x_6 = x_32;
x_8 = x_25;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_34 = lean_array_fget(x_29, x_3);
x_35 = l_Std_HashMap_inhabited___closed__1;
x_36 = lean_array_fset(x_29, x_3, x_35);
x_37 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_34, x_19, x_26);
x_38 = lean_array_fset(x_36, x_3, x_37);
lean_ctor_set(x_25, 0, x_38);
x_39 = 1;
x_5 = x_12;
x_6 = x_39;
x_8 = x_25;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_43 = lean_array_get_size(x_41);
x_44 = lean_nat_dec_lt(x_3, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_26);
lean_dec(x_19);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_42);
x_46 = 1;
x_5 = x_12;
x_6 = x_46;
x_8 = x_45;
goto _start;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_48 = lean_array_fget(x_41, x_3);
x_49 = l_Std_HashMap_inhabited___closed__1;
x_50 = lean_array_fset(x_41, x_3, x_49);
x_51 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_48, x_19, x_26);
x_52 = lean_array_fset(x_50, x_3, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_42);
x_54 = 1;
x_5 = x_12;
x_6 = x_54;
x_8 = x_53;
goto _start;
}
}
}
else
{
lean_dec(x_26);
lean_dec(x_19);
x_5 = x_12;
x_8 = x_25;
goto _start;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_5);
x_57 = lean_box(x_6);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_8);
return x_58;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_array_get_size(x_1);
x_7 = 0;
lean_inc(x_6);
x_8 = l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(x_1, x_2, x_5, x_6, x_6, x_7, x_3, x_4);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(x_1, x_2, x_3, x_4, x_5, x_9, x_7, x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_4(x_2, x_5, x_6, x_7, x_8);
return x_9;
}
case 10:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_4(x_3, x_10, x_11, x_12, x_13);
return x_14;
}
default: 
{
lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_apply_1(x_4, x_1);
return x_15;
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_1, x_2);
x_10 = l_Lean_IR_UnreachableBranches_resetParamAssignment(x_9, x_3, x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_2, x_12);
lean_dec(x_2);
x_2 = x_13;
x_4 = x_11;
goto _start;
}
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_array_fget(x_1, x_2);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_10, x_3, x_4);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_2, x_13);
lean_dec(x_2);
x_2 = x_14;
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_16, x_3, x_4);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
x_4 = x_18;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1(x_4, x_6, x_2, x_3);
lean_dec(x_4);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_1 = x_5;
x_3 = x_8;
goto _start;
}
case 10:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2(x_10, x_11, x_2, x_3);
lean_dec(x_10);
return x_12;
}
default: 
{
uint8_t x_13; 
x_13 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
return x_17;
}
}
}
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_forMAux___main___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpFnBody_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_4(x_2, x_8, x_9, x_10, x_11);
return x_12;
}
case 1:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_4(x_3, x_13, x_14, x_15, x_16);
return x_17;
}
case 10:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_apply_4(x_4, x_18, x_19, x_20, x_21);
return x_22;
}
case 11:
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_apply_1(x_5, x_23);
return x_24;
}
case 12:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_apply_2(x_6, x_25, x_26);
return x_27;
}
default: 
{
lean_object* x_28; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_apply_1(x_7, x_1);
return x_28;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpFnBody_match__2___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_IR_UnreachableBranches_containsCtor(x_1, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_3, x_14);
lean_dec(x_3);
x_3 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc(x_4);
x_17 = l_Lean_IR_UnreachableBranches_interpFnBody(x_12, x_4, x_5);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_3, x_19);
lean_dec(x_3);
x_3 = x_20;
x_5 = x_18;
goto _start;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
lean_dec(x_10);
lean_inc(x_4);
x_23 = l_Lean_IR_UnreachableBranches_interpFnBody(x_22, x_4, x_5);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_3, x_25);
lean_dec(x_3);
x_3 = x_26;
x_5 = x_24;
goto _start;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_2);
x_7 = l_Lean_IR_UnreachableBranches_interpExpr(x_5, x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_IR_UnreachableBranches_updateVarAssignment(x_4, x_8, x_2, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_1 = x_6;
x_3 = x_11;
goto _start;
}
case 1:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_2);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_2, 3);
x_19 = l_Lean_IR_LocalContext_addJP(x_18, x_13, x_14, x_15);
lean_ctor_set(x_2, 3, x_19);
x_1 = x_16;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_ctor_get(x_2, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_25 = l_Lean_IR_LocalContext_addJP(x_24, x_13, x_14, x_15);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_25);
x_1 = x_16;
x_2 = x_26;
goto _start;
}
}
case 10:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 3);
lean_inc(x_29);
lean_dec(x_1);
x_30 = l_Lean_IR_UnreachableBranches_findVarValue(x_28, x_2, x_3);
lean_dec(x_28);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1(x_31, x_29, x_33, x_2, x_32);
lean_dec(x_29);
lean_dec(x_31);
return x_34;
}
case 11:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
lean_dec(x_1);
x_36 = l_Lean_IR_UnreachableBranches_findArgValue(x_35, x_2, x_3);
lean_dec(x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_IR_UnreachableBranches_updateCurrFnSummary(x_37, x_2, x_38);
return x_39;
}
case 12:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
lean_dec(x_1);
x_42 = lean_ctor_get(x_2, 3);
lean_inc(x_42);
x_43 = l_Lean_IR_LocalContext_getJPParams(x_42, x_40);
x_44 = l_Lean_IR_LocalContext_getJPBody(x_42, x_40);
lean_dec(x_40);
lean_dec(x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = l_Array_empty___closed__1;
x_46 = l_Option_get_x21___rarg___closed__3;
x_47 = lean_panic_fn(x_45, x_46);
x_48 = l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(x_47, x_41, x_2, x_3);
lean_dec(x_41);
lean_dec(x_47);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = l_Lean_IR_Lean_Compiler_IR_Basic___instance__15;
x_50 = lean_panic_fn(x_49, x_46);
x_51 = lean_ctor_get(x_48, 0);
lean_inc(x_51);
x_52 = lean_unbox(x_51);
lean_dec(x_51);
if (x_52 == 0)
{
uint8_t x_53; 
lean_dec(x_50);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_48);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_48, 0);
lean_dec(x_54);
x_55 = lean_box(0);
lean_ctor_set(x_48, 0, x_55);
return x_48;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_48, 1);
lean_inc(x_56);
lean_dec(x_48);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_48, 1);
lean_inc(x_59);
lean_dec(x_48);
lean_inc(x_50);
x_60 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_50, x_2, x_59);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_1 = x_50;
x_3 = x_61;
goto _start;
}
}
else
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_ctor_get(x_48, 0);
lean_inc(x_63);
x_64 = lean_unbox(x_63);
lean_dec(x_63);
if (x_64 == 0)
{
uint8_t x_65; 
lean_dec(x_44);
lean_dec(x_2);
x_65 = !lean_is_exclusive(x_48);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_48, 0);
lean_dec(x_66);
x_67 = lean_box(0);
lean_ctor_set(x_48, 0, x_67);
return x_48;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_48, 1);
lean_inc(x_68);
lean_dec(x_48);
x_69 = lean_box(0);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_71 = lean_ctor_get(x_44, 0);
lean_inc(x_71);
lean_dec(x_44);
x_72 = lean_ctor_get(x_48, 1);
lean_inc(x_72);
lean_dec(x_48);
lean_inc(x_71);
x_73 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_71, x_2, x_72);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_1 = x_71;
x_3 = x_74;
goto _start;
}
}
}
else
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_43, 0);
lean_inc(x_76);
lean_dec(x_43);
x_77 = l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(x_76, x_41, x_2, x_3);
lean_dec(x_41);
lean_dec(x_76);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_78 = l_Lean_IR_Lean_Compiler_IR_Basic___instance__15;
x_79 = l_Option_get_x21___rarg___closed__3;
x_80 = lean_panic_fn(x_78, x_79);
x_81 = lean_ctor_get(x_77, 0);
lean_inc(x_81);
x_82 = lean_unbox(x_81);
lean_dec(x_81);
if (x_82 == 0)
{
uint8_t x_83; 
lean_dec(x_80);
lean_dec(x_2);
x_83 = !lean_is_exclusive(x_77);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_77, 0);
lean_dec(x_84);
x_85 = lean_box(0);
lean_ctor_set(x_77, 0, x_85);
return x_77;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_77, 1);
lean_inc(x_86);
lean_dec(x_77);
x_87 = lean_box(0);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_77, 1);
lean_inc(x_89);
lean_dec(x_77);
lean_inc(x_80);
x_90 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_80, x_2, x_89);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_1 = x_80;
x_3 = x_91;
goto _start;
}
}
else
{
lean_object* x_93; uint8_t x_94; 
x_93 = lean_ctor_get(x_77, 0);
lean_inc(x_93);
x_94 = lean_unbox(x_93);
lean_dec(x_93);
if (x_94 == 0)
{
uint8_t x_95; 
lean_dec(x_44);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_77);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; 
x_96 = lean_ctor_get(x_77, 0);
lean_dec(x_96);
x_97 = lean_box(0);
lean_ctor_set(x_77, 0, x_97);
return x_77;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_77, 1);
lean_inc(x_98);
lean_dec(x_77);
x_99 = lean_box(0);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_101 = lean_ctor_get(x_44, 0);
lean_inc(x_101);
lean_dec(x_44);
x_102 = lean_ctor_get(x_77, 1);
lean_inc(x_102);
lean_dec(x_77);
lean_inc(x_101);
x_103 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_101, x_2, x_102);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
x_1 = x_101;
x_3 = x_104;
goto _start;
}
}
}
}
default: 
{
uint8_t x_106; 
x_106 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_106 == 0)
{
lean_object* x_107; 
x_107 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_107;
goto _start;
}
else
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_2);
lean_dec(x_1);
x_109 = lean_box(0);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_3);
return x_110;
}
}
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferStep_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_2, x_4, x_5, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 3);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_4(x_3, x_9, x_10, x_11, x_12);
return x_13;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferStep_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_inferStep_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_HashMap_inhabited___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_fset(x_2, x_1, x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_1, x_8);
x_10 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1;
x_11 = lean_array_fset(x_7, x_1, x_10);
lean_dec(x_1);
x_1 = x_9;
x_2 = x_11;
goto _start;
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_array_fget(x_1, x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(1);
x_12 = l_Lean_IR_UnreachableBranches_updateVarAssignment(x_10, x_11, x_3, x_4);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_2, x_14);
lean_dec(x_2);
x_2 = x_15;
x_4 = x_13;
goto _start;
}
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
lean_dec(x_3);
x_11 = lean_nat_sub(x_2, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = l_Lean_IR_Decl_Lean_Compiler_IR_Basic___instance__17;
x_14 = lean_array_get(x_13, x_1, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 3);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
x_18 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_17, x_12);
x_19 = lean_ctor_get(x_5, 1);
x_20 = lean_ctor_get(x_5, 2);
x_21 = lean_ctor_get(x_5, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_12);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_12);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set(x_22, 3, x_21);
x_23 = l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__2(x_15, x_7, x_22, x_6);
lean_dec(x_15);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_IR_UnreachableBranches_interpFnBody(x_16, x_22, x_24);
if (x_4 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
x_28 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_27, x_12);
lean_dec(x_12);
x_29 = l_Lean_IR_UnreachableBranches_Value_beq(x_18, x_28);
lean_dec(x_28);
lean_dec(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = 1;
x_3 = x_10;
x_4 = x_30;
x_6 = x_26;
goto _start;
}
else
{
uint8_t x_32; 
x_32 = 0;
x_3 = x_10;
x_4 = x_32;
x_6 = x_26;
goto _start;
}
}
else
{
lean_object* x_34; uint8_t x_35; 
lean_dec(x_18);
lean_dec(x_12);
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_dec(x_25);
x_35 = 1;
x_3 = x_10;
x_4 = x_35;
x_6 = x_34;
goto _start;
}
}
else
{
lean_dec(x_14);
lean_dec(x_12);
x_3 = x_10;
goto _start;
}
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_3);
x_38 = lean_box(x_4);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_6);
return x_39;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferStep(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_3);
x_4 = x_3;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1(x_5, x_4);
x_7 = x_6;
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
lean_ctor_set(x_2, 0, x_7);
x_10 = lean_array_get_size(x_3);
x_11 = 0;
lean_inc(x_10);
x_12 = l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__3(x_3, x_10, x_10, x_11, x_1, x_2);
lean_dec(x_1);
lean_dec(x_10);
lean_dec(x_3);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_array_get_size(x_3);
x_16 = 0;
lean_inc(x_15);
x_17 = l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__3(x_3, x_15, x_15, x_16, x_1, x_14);
lean_dec(x_1);
lean_dec(x_15);
lean_dec(x_3);
return x_17;
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_forMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_Nat_foldMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__3(x_1, x_2, x_3, x_7, x_5, x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_inferMain_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_3 = l_Lean_IR_UnreachableBranches_inferStep(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = lean_box(0);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_2 = x_12;
goto _start;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_inferMain___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_inferMain(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_elimDeadAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_elimDeadAux_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_4(x_2, x_6, x_7, x_8, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_4(x_3, x_11, x_12, x_13, x_14);
return x_15;
}
case 10:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_apply_4(x_4, x_16, x_17, x_18, x_19);
return x_20;
}
default: 
{
lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_apply_1(x_5, x_1);
return x_21;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_elimDeadAux_match__3___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = x_3;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_array_fget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_fset(x_3, x_2, x_8);
x_10 = x_7;
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_2, x_11);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
x_16 = lean_box(0);
x_17 = l_Lean_IR_UnreachableBranches_containsCtor(x_16, x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
x_18 = lean_box(13);
lean_ctor_set(x_10, 1, x_18);
x_19 = x_10;
x_20 = lean_array_fset(x_9, x_2, x_19);
lean_dec(x_2);
x_2 = x_12;
x_3 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_15);
lean_ctor_set(x_10, 1, x_22);
x_23 = x_10;
x_24 = lean_array_fset(x_9, x_2, x_23);
lean_dec(x_2);
x_2 = x_12;
x_3 = x_24;
goto _start;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_box(0);
x_29 = l_Lean_IR_UnreachableBranches_containsCtor(x_28, x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
x_30 = lean_box(13);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_30);
x_32 = x_31;
x_33 = lean_array_fset(x_9, x_2, x_32);
lean_dec(x_2);
x_2 = x_12;
x_3 = x_33;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_27);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_26);
lean_ctor_set(x_36, 1, x_35);
x_37 = x_36;
x_38 = lean_array_fset(x_9, x_2, x_37);
lean_dec(x_2);
x_2 = x_12;
x_3 = x_38;
goto _start;
}
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_10);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_10, 0);
x_42 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_41);
lean_ctor_set(x_10, 0, x_42);
x_43 = x_10;
x_44 = lean_array_fset(x_9, x_2, x_43);
lean_dec(x_2);
x_2 = x_12;
x_3 = x_44;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_10, 0);
lean_inc(x_46);
lean_dec(x_10);
x_47 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_46);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = x_48;
x_50 = lean_array_fset(x_9, x_2, x_49);
lean_dec(x_2);
x_2 = x_12;
x_3 = x_50;
goto _start;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_3, x_12);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
x_17 = l_Lean_IR_UnreachableBranches_containsCtor(x_2, x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
x_18 = lean_box(13);
lean_ctor_set(x_11, 1, x_18);
x_19 = x_11;
x_20 = lean_array_fset(x_10, x_3, x_19);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_16);
lean_ctor_set(x_11, 1, x_22);
x_23 = x_11;
x_24 = lean_array_fset(x_10, x_3, x_23);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_24;
goto _start;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_11, 0);
x_27 = lean_ctor_get(x_11, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_11);
x_28 = l_Lean_IR_UnreachableBranches_containsCtor(x_2, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
x_29 = lean_box(13);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_29);
x_31 = x_30;
x_32 = lean_array_fset(x_10, x_3, x_31);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_32;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_27);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_26);
lean_ctor_set(x_35, 1, x_34);
x_36 = x_35;
x_37 = lean_array_fset(x_10, x_3, x_36);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_37;
goto _start;
}
}
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_11);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_11, 0);
x_41 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_40);
lean_ctor_set(x_11, 0, x_41);
x_42 = x_11;
x_43 = lean_array_fset(x_10, x_3, x_42);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_43;
goto _start;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_11, 0);
lean_inc(x_45);
lean_dec(x_11);
x_46 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_45);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = x_47;
x_49 = lean_array_fset(x_10, x_3, x_48);
lean_dec(x_3);
x_3 = x_13;
x_4 = x_49;
goto _start;
}
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 3);
x_5 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_4);
lean_ctor_set(x_2, 3, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 2);
x_9 = lean_ctor_get(x_2, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_10 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_9);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_10);
return x_11;
}
}
case 1:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_2, 2);
x_14 = lean_ctor_get(x_2, 3);
x_15 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_13);
x_16 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_14);
lean_ctor_set(x_2, 3, x_16);
lean_ctor_set(x_2, 2, x_15);
return x_2;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
x_19 = lean_ctor_get(x_2, 2);
x_20 = lean_ctor_get(x_2, 3);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_2);
x_21 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_19);
x_22 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_20);
x_23 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_18);
lean_ctor_set(x_23, 2, x_21);
lean_ctor_set(x_23, 3, x_22);
return x_23;
}
}
case 10:
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_2, 1);
x_26 = lean_ctor_get(x_2, 3);
x_27 = x_26;
x_28 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_1, x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(x_1, x_29, x_27);
x_31 = x_30;
lean_ctor_set(x_2, 3, x_31);
return x_2;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_28, 0);
lean_inc(x_32);
lean_dec(x_28);
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(x_1, x_32, x_33, x_27);
lean_dec(x_32);
x_35 = x_34;
lean_ctor_set(x_2, 3, x_35);
return x_2;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_2, 0);
x_37 = lean_ctor_get(x_2, 1);
x_38 = lean_ctor_get(x_2, 2);
x_39 = lean_ctor_get(x_2, 3);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_2);
x_40 = x_39;
x_41 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_1, x_37);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_unsigned_to_nat(0u);
x_43 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(x_1, x_42, x_40);
x_44 = x_43;
x_45 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_45, 0, x_36);
lean_ctor_set(x_45, 1, x_37);
lean_ctor_set(x_45, 2, x_38);
lean_ctor_set(x_45, 3, x_44);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_41, 0);
lean_inc(x_46);
lean_dec(x_41);
x_47 = lean_unsigned_to_nat(0u);
x_48 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(x_1, x_46, x_47, x_40);
lean_dec(x_46);
x_49 = x_48;
x_50 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_50, 0, x_36);
lean_ctor_set(x_50, 1, x_37);
lean_ctor_set(x_50, 2, x_38);
lean_ctor_set(x_50, 3, x_49);
return x_50;
}
}
}
default: 
{
uint8_t x_51; 
x_51 = l_Lean_IR_FnBody_isTerminal(x_2);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = l_Lean_IR_FnBody_body(x_2);
x_53 = lean_box(13);
x_54 = l_Lean_IR_FnBody_setBody(x_2, x_53);
x_55 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_52);
x_56 = l_Lean_IR_FnBody_setBody(x_54, x_55);
return x_56;
}
else
{
return x_2;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDead_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_2, x_4, x_5, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDead_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_elimDead_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDead(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 3);
x_5 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_4);
lean_ctor_set(x_2, 3, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 2);
x_9 = lean_ctor_get(x_2, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_10 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_9);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_10);
return x_11;
}
}
else
{
return x_2;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDead___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_elimDead(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_elimDeadBranches_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_elimDeadBranches_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_elimDeadBranches_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Nat_foldAux___main___at_Lean_IR_elimDeadBranches___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
x_10 = lean_nat_sub(x_3, x_4);
lean_dec(x_4);
x_11 = l_Lean_IR_Decl_Lean_Compiler_IR_Basic___instance__17;
x_12 = lean_array_get(x_11, x_1, x_10);
x_13 = l_Lean_IR_Decl_name(x_12);
lean_dec(x_12);
lean_inc(x_2);
x_14 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_2, x_10);
lean_dec(x_10);
x_15 = l_Lean_IR_UnreachableBranches_addFunctionSummary(x_5, x_13, x_14);
x_4 = x_9;
x_5 = x_15;
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_elimDeadBranches___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = x_3;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_array_fget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_fset(x_3, x_2, x_8);
x_10 = x_7;
x_11 = l_Std_HashMap_inhabited___closed__1;
x_12 = lean_array_get(x_11, x_1, x_2);
x_13 = l_Lean_IR_UnreachableBranches_elimDead(x_12, x_10);
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_2, x_14);
x_16 = x_13;
x_17 = lean_array_fset(x_9, x_2, x_16);
lean_dec(x_2);
x_2 = x_15;
x_3 = x_17;
goto _start;
}
}
}
lean_object* l_Lean_IR_elimDeadBranches(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_1);
x_6 = x_1;
x_7 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
x_8 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1(x_7, x_6);
x_9 = x_8;
x_10 = lean_array_get_size(x_1);
x_11 = lean_box(0);
lean_inc(x_10);
x_12 = l_Std_mkPersistentArray___rarg(x_10, x_11);
x_13 = lean_box(0);
lean_inc(x_5);
lean_inc(x_1);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_1);
lean_ctor_set(x_14, 2, x_5);
lean_ctor_set(x_14, 3, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_12);
x_16 = l_Lean_IR_UnreachableBranches_inferMain___rarg(x_14, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_10);
x_20 = l_Nat_foldAux___main___at_Lean_IR_elimDeadBranches___spec__1(x_1, x_18, x_10, x_10, x_5);
lean_dec(x_10);
lean_dec(x_1);
lean_ctor_set(x_3, 0, x_20);
x_21 = l_Array_umapMAux___main___at_Lean_IR_elimDeadBranches___spec__2(x_19, x_7, x_6);
lean_dec(x_19);
x_22 = x_21;
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_24 = lean_ctor_get(x_3, 0);
x_25 = lean_ctor_get(x_3, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_3);
lean_inc(x_1);
x_26 = x_1;
x_27 = lean_unsigned_to_nat(0u);
lean_inc(x_26);
x_28 = l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1(x_27, x_26);
x_29 = x_28;
x_30 = lean_array_get_size(x_1);
x_31 = lean_box(0);
lean_inc(x_30);
x_32 = l_Std_mkPersistentArray___rarg(x_30, x_31);
x_33 = lean_box(0);
lean_inc(x_24);
lean_inc(x_1);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_1);
lean_ctor_set(x_34, 2, x_24);
lean_ctor_set(x_34, 3, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_32);
x_36 = l_Lean_IR_UnreachableBranches_inferMain___rarg(x_34, x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_30);
x_40 = l_Nat_foldAux___main___at_Lean_IR_elimDeadBranches___spec__1(x_1, x_38, x_30, x_30, x_24);
lean_dec(x_30);
lean_dec(x_1);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_25);
x_42 = l_Array_umapMAux___main___at_Lean_IR_elimDeadBranches___spec__2(x_39, x_27, x_26);
lean_dec(x_39);
x_43 = x_42;
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
return x_44;
}
}
}
lean_object* l_Nat_foldAux___main___at_Lean_IR_elimDeadBranches___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_foldAux___main___at_Lean_IR_elimDeadBranches___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_elimDeadBranches___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_umapMAux___main___at_Lean_IR_elimDeadBranches___spec__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_elimDeadBranches___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_elimDeadBranches(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Format(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Basic(lean_object*);
lean_object* initialize_Lean_Compiler_IR_CompilerM(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_IR_ElimDeadBranches(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Format(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__1 = _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__1);
l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2___closed__1);
l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2 = _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__2);
l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1);
l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2);
l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3);
l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4);
l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1 = _init_l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1();
lean_mark_persistent(l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1);
l_Lean_IR_UnreachableBranches_Value_format___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__1);
l_Lean_IR_UnreachableBranches_Value_format___closed__2 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__2);
l_Lean_IR_UnreachableBranches_Value_format___closed__3 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__3);
l_Lean_IR_UnreachableBranches_Value_format___closed__4 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__4);
l_Lean_IR_UnreachableBranches_Value_format___closed__5 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__5();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__5);
l_Lean_IR_UnreachableBranches_Value_format___closed__6 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__6();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__6);
l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3___closed__1);
l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3 = _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__3);
l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4___closed__1);
l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4 = _init_l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Lean_Compiler_IR_ElimDeadBranches___instance__4);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__1 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__1);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__2 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___closed__2);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5);
res = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_IR_UnreachableBranches_functionSummariesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt);
lean_dec_ref(res);
l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default = _init_l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default);
l_Lean_IR_UnreachableBranches_InterpContext_lctx___default = _init_l_Lean_IR_UnreachableBranches_InterpContext_lctx___default();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_InterpContext_lctx___default);
l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1 = _init_l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1);
l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1 = _init_l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
