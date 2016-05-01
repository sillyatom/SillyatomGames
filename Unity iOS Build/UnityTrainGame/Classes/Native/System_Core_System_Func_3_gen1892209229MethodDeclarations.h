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

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1892209229;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m4028180665_gshared (Func_3_t1892209229 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_3__ctor_m4028180665(__this, ___object, ___method, method) ((  void (*) (Func_3_t1892209229 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m4028180665_gshared)(__this, ___object, ___method, method)
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
extern "C"  Il2CppObject * Func_3_Invoke_m4101486064_gshared (Func_3_t1892209229 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method);
#define Func_3_Invoke_m4101486064(__this, ___arg1, ___arg2, method) ((  Il2CppObject * (*) (Func_3_t1892209229 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Func_3_Invoke_m4101486064_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m69685489_gshared (Func_3_t1892209229 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_3_BeginInvoke_m69685489(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_3_t1892209229 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m69685489_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult System.Func`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_3_EndInvoke_m1319796459_gshared (Func_3_t1892209229 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_3_EndInvoke_m1319796459(__this, ___result, method) ((  Il2CppObject * (*) (Func_3_t1892209229 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m1319796459_gshared)(__this, ___result, method)
