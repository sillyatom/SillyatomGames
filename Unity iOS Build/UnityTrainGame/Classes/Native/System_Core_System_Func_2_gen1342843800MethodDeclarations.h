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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct Func_2_t1342843800;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22686855369.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3426930465_gshared (Func_2_t1342843800 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3426930465(__this, ___object, ___method, method) ((  void (*) (Func_2_t1342843800 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3426930465_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m2666468261_gshared (Func_2_t1342843800 * __this, KeyValuePair_2_t2686855369  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2666468261(__this, ___arg1, method) ((  bool (*) (Func_2_t1342843800 *, KeyValuePair_2_t2686855369 , const MethodInfo*))Func_2_Invoke_m2666468261_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m2630802776_gshared (Func_2_t1342843800 * __this, KeyValuePair_2_t2686855369  ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m2630802776(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t1342843800 *, KeyValuePair_2_t2686855369 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m2630802776_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m1011898703_gshared (Func_2_t1342843800 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1011898703(__this, ___result, method) ((  bool (*) (Func_2_t1342843800 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m1011898703_gshared)(__this, ___result, method)
