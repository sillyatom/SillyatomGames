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

// System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>
struct Action_2_t3870962322;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init1104172581.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m2512218974_gshared (Action_2_t3870962322 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m2512218974(__this, ___object, ___method, method) ((  void (*) (Action_2_t3870962322 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m2512218974_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m167089997_gshared (Action_2_t3870962322 * __this, bool ___arg1, int32_t ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m167089997(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t3870962322 *, bool, int32_t, const MethodInfo*))Action_2_Invoke_m167089997_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m2185912408_gshared (Action_2_t3870962322 * __this, bool ___arg1, int32_t ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m2185912408(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_2_t3870962322 *, bool, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m2185912408_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m1067414722_gshared (Action_2_t3870962322 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m1067414722(__this, ___result, method) ((  void (*) (Action_2_t3870962322 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m1067414722_gshared)(__this, ___result, method)
