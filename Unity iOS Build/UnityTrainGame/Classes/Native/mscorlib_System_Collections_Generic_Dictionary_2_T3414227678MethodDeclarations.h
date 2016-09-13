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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t3414227678;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2315864263_gshared (Transform_1_t3414227678 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2315864263(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3414227678 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2315864263_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3312956448  Transform_1_Invoke_m3585722581_gshared (Transform_1_t3414227678 * __this, Il2CppObject * ___key, KeyValuePair_2_t3312956448  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3585722581(__this, ___key, ___value, method) ((  KeyValuePair_2_t3312956448  (*) (Transform_1_t3414227678 *, Il2CppObject *, KeyValuePair_2_t3312956448 , const MethodInfo*))Transform_1_Invoke_m3585722581_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2443975092_gshared (Transform_1_t3414227678 * __this, Il2CppObject * ___key, KeyValuePair_2_t3312956448  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2443975092(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3414227678 *, Il2CppObject *, KeyValuePair_2_t3312956448 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2443975092_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3312956448  Transform_1_EndInvoke_m3344068757_gshared (Transform_1_t3414227678 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3344068757(__this, ___result, method) ((  KeyValuePair_2_t3312956448  (*) (Transform_1_t3414227678 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3344068757_gshared)(__this, ___result, method)
