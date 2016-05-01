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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>
struct Func_2_t1968944879;
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

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2928513618_gshared (Func_2_t1968944879 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2928513618(__this, ___object, ___method, method) ((  void (*) (Func_2_t1968944879 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2928513618_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::Invoke(T)
extern "C"  Il2CppObject * Func_2_Invoke_m2365559760_gshared (Func_2_t1968944879 * __this, KeyValuePair_2_t2686855369  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2365559760(__this, ___arg1, method) ((  Il2CppObject * (*) (Func_2_t1968944879 *, KeyValuePair_2_t2686855369 , const MethodInfo*))Func_2_Invoke_m2365559760_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m3198438015_gshared (Func_2_t1968944879 * __this, KeyValuePair_2_t2686855369  ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3198438015(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t1968944879 *, KeyValuePair_2_t2686855369 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m3198438015_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_2_EndInvoke_m772157956_gshared (Func_2_t1968944879 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m772157956(__this, ___result, method) ((  Il2CppObject * (*) (Func_2_t1968944879 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m772157956_gshared)(__this, ___result, method)
