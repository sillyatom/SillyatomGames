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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Purchasing.AndroidStore,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Purchasing.AndroidStore,System.Object>>
struct Transform_1_t1157390334;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22534845239.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore2117641833.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Purchasing.AndroidStore,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Purchasing.AndroidStore,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4011142390_gshared (Transform_1_t1157390334 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m4011142390(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1157390334 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4011142390_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Purchasing.AndroidStore,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Purchasing.AndroidStore,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2534845239  Transform_1_Invoke_m1547812930_gshared (Transform_1_t1157390334 * __this, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1547812930(__this, ___key, ___value, method) ((  KeyValuePair_2_t2534845239  (*) (Transform_1_t1157390334 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1547812930_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Purchasing.AndroidStore,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Purchasing.AndroidStore,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2868424429_gshared (Transform_1_t1157390334 * __this, int32_t ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2868424429(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1157390334 *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2868424429_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Purchasing.AndroidStore,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Purchasing.AndroidStore,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2534845239  Transform_1_EndInvoke_m1671267080_gshared (Transform_1_t1157390334 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1671267080(__this, ___result, method) ((  KeyValuePair_2_t2534845239  (*) (Transform_1_t1157390334 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1671267080_gshared)(__this, ___result, method)
