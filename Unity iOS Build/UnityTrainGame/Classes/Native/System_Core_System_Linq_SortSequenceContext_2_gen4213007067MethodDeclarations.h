#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Linq.SortSequenceContext`2<System.Object,System.Int32>
struct SortSequenceContext_2_t4213007067;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t4146091719;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1252154900;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t70478024;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection2805156518.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Int32>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C"  void SortSequenceContext_2__ctor_m2638472483_gshared (SortSequenceContext_2_t4213007067 * __this, Func_2_t4146091719 * ___selector, Il2CppObject* ___comparer, int32_t ___direction, SortContext_1_t70478024 * ___child_context, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m2638472483(__this, ___selector, ___comparer, ___direction, ___child_context, method) ((  void (*) (SortSequenceContext_2_t4213007067 *, Func_2_t4146091719 *, Il2CppObject*, int32_t, SortContext_1_t70478024 *, const MethodInfo*))SortSequenceContext_2__ctor_m2638472483_gshared)(__this, ___selector, ___comparer, ___direction, ___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Int32>::Initialize(TElement[])
extern "C"  void SortSequenceContext_2_Initialize_m3137705959_gshared (SortSequenceContext_2_t4213007067 * __this, ObjectU5BU5D_t11523773* ___elements, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m3137705959(__this, ___elements, method) ((  void (*) (SortSequenceContext_2_t4213007067 *, ObjectU5BU5D_t11523773*, const MethodInfo*))SortSequenceContext_2_Initialize_m3137705959_gshared)(__this, ___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Int32>::Compare(System.Int32,System.Int32)
extern "C"  int32_t SortSequenceContext_2_Compare_m968446610_gshared (SortSequenceContext_2_t4213007067 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m968446610(__this, ___first_index, ___second_index, method) ((  int32_t (*) (SortSequenceContext_2_t4213007067 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m968446610_gshared)(__this, ___first_index, ___second_index, method)
