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

// System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>
struct Action_2_t746255313;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2274432868.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1506387135_gshared (Action_2_t746255313 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m1506387135(__this, ___object, ___method, method) ((  void (*) (Action_2_t746255313 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m1506387135_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m898835276_gshared (Action_2_t746255313 * __this, bool ___arg1, int32_t ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m898835276(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t746255313 *, bool, int32_t, const MethodInfo*))Action_2_Invoke_m898835276_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m2245492567_gshared (Action_2_t746255313 * __this, bool ___arg1, int32_t ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m2245492567(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_2_t746255313 *, bool, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m2245492567_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m1653560739_gshared (Action_2_t746255313 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m1653560739(__this, ___result, method) ((  void (*) (Action_2_t746255313 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m1653560739_gshared)(__this, ___result, method)
