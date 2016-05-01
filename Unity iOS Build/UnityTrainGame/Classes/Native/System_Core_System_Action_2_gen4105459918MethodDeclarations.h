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

// System.Action`2<System.Object,System.Object>
struct Action_2_t4105459918;
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

// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m4171654682_gshared (Action_2_t4105459918 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m4171654682(__this, ___object, ___method, method) ((  void (*) (Action_2_t4105459918 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m4171654682_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m1325815329_gshared (Action_2_t4105459918 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m1325815329(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t4105459918 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Action_2_Invoke_m1325815329_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m3413657584_gshared (Action_2_t4105459918 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m3413657584(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_2_t4105459918 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m3413657584_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m3926193450_gshared (Action_2_t4105459918 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m3926193450(__this, ___result, method) ((  void (*) (Action_2_t4105459918 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m3926193450_gshared)(__this, ___result, method)
