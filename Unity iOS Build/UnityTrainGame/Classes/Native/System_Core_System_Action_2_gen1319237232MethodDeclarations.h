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

// System.Action`2<System.Boolean,System.Int32>
struct Action_2_t1319237232;
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

// System.Void System.Action`2<System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m690558584_gshared (Action_2_t1319237232 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m690558584(__this, ___object, ___method, method) ((  void (*) (Action_2_t1319237232 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m690558584_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Boolean,System.Int32>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m1066314183_gshared (Action_2_t1319237232 * __this, bool ___arg1, int32_t ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m1066314183(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t1319237232 *, bool, int32_t, const MethodInfo*))Action_2_Invoke_m1066314183_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Boolean,System.Int32>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m3364114130_gshared (Action_2_t1319237232 * __this, bool ___arg1, int32_t ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m3364114130(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_2_t1319237232 *, bool, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m3364114130_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Boolean,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m2562360456_gshared (Action_2_t1319237232 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m2562360456(__this, ___result, method) ((  void (*) (Action_2_t1319237232 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m2562360456_gshared)(__this, ___result, method)
