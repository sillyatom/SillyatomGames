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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t231298476;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m951636736_gshared (Transform_1_t231298476 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m951636736(__this, ___object, ___method, method) ((  void (*) (Transform_1_t231298476 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m951636736_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Transform_1_Invoke_m2621918396_gshared (Transform_1_t231298476 * __this, Il2CppObject * ___key, KeyValuePair_2_t3312956448  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2621918396(__this, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t231298476 *, Il2CppObject *, KeyValuePair_2_t3312956448 , const MethodInfo*))Transform_1_Invoke_m2621918396_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1740480411_gshared (Transform_1_t231298476 * __this, Il2CppObject * ___key, KeyValuePair_2_t3312956448  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1740480411(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t231298476 *, Il2CppObject *, KeyValuePair_2_t3312956448 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1740480411_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t130027246  Transform_1_EndInvoke_m798049870_gshared (Transform_1_t231298476 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m798049870(__this, ___result, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t231298476 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m798049870_gshared)(__this, ___result, method)
