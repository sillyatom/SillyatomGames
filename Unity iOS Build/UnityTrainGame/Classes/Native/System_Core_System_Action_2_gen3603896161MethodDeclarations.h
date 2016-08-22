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

// System.Action`2<System.Boolean,System.Object>
struct Action_2_t3603896161;
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

// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1942110965_gshared (Action_2_t3603896161 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m1942110965(__this, ___object, ___method, method) ((  void (*) (Action_2_t3603896161 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m1942110965_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m2625457686_gshared (Action_2_t3603896161 * __this, bool ___arg1, Il2CppObject * ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m2625457686(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t3603896161 *, bool, Il2CppObject *, const MethodInfo*))Action_2_Invoke_m2625457686_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Boolean,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m516909757_gshared (Action_2_t3603896161 * __this, bool ___arg1, Il2CppObject * ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m516909757(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_2_t3603896161 *, bool, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m516909757_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Boolean,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m3710875525_gshared (Action_2_t3603896161 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m3710875525(__this, ___result, method) ((  void (*) (Action_2_t3603896161 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m3710875525_gshared)(__this, ___result, method)
