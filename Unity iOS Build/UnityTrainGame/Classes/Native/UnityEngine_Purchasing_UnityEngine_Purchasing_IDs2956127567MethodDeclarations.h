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

// UnityEngine.Purchasing.IDs
struct IDs_t2956127567;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t3577824552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.IDs::.ctor()
extern "C"  void IDs__ctor_m1206690211 (IDs_t2956127567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.IDs::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * IDs_System_Collections_IEnumerable_GetEnumerator_m2246266332 (IDs_t2956127567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
extern "C"  void IDs_Add_m1562610554 (IDs_t2956127567 * __this, String_t* ___id, StringU5BU5D_t2956870243* ___stores, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.IDs::SpecificIDForStore(System.String,System.String)
extern "C"  String_t* IDs_SpecificIDForStore_m3999326133 (IDs_t2956127567 * __this, String_t* ___store, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> UnityEngine.Purchasing.IDs::GetEnumerator()
extern "C"  Il2CppObject* IDs_GetEnumerator_m3102322120 (IDs_t2956127567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
