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

// System.Linq.OrderedSequence`2<System.Object,System.Int32>
struct OrderedSequence_2_t1754067061;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t4146091719;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1252154900;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t70478024;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection2805156518.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m1175215065_gshared (OrderedSequence_2_t1754067061 * __this, Il2CppObject* ___source, Func_2_t4146091719 * ___key_selector, Il2CppObject* ___comparer, int32_t ___direction, const MethodInfo* method);
#define OrderedSequence_2__ctor_m1175215065(__this, ___source, ___key_selector, ___comparer, ___direction, method) ((  void (*) (OrderedSequence_2_t1754067061 *, Il2CppObject*, Func_2_t4146091719 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m1175215065_gshared)(__this, ___source, ___key_selector, ___comparer, ___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Int32>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C"  SortContext_1_t70478024 * OrderedSequence_2_CreateContext_m1322519273_gshared (OrderedSequence_2_t1754067061 * __this, SortContext_1_t70478024 * ___current, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m1322519273(__this, ___current, method) ((  SortContext_1_t70478024 * (*) (OrderedSequence_2_t1754067061 *, SortContext_1_t70478024 *, const MethodInfo*))OrderedSequence_2_CreateContext_m1322519273_gshared)(__this, ___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Int32>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  Il2CppObject* OrderedSequence_2_Sort_m2503037792_gshared (OrderedSequence_2_t1754067061 * __this, Il2CppObject* ___source, const MethodInfo* method);
#define OrderedSequence_2_Sort_m2503037792(__this, ___source, method) ((  Il2CppObject* (*) (OrderedSequence_2_t1754067061 *, Il2CppObject*, const MethodInfo*))OrderedSequence_2_Sort_m2503037792_gshared)(__this, ___source, method)
