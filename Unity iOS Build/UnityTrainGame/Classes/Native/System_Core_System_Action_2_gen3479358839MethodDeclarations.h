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

// System.Action`2<System.Object,System.Boolean>
struct Action_2_t3479358839;
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

// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m3309597785_gshared (Action_2_t3479358839 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m3309597785(__this, ___object, ___method, method) ((  void (*) (Action_2_t3479358839 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m3309597785_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m923698738_gshared (Action_2_t3479358839 * __this, Il2CppObject * ___arg1, bool ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m923698738(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t3479358839 *, Il2CppObject *, bool, const MethodInfo*))Action_2_Invoke_m923698738_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m2135774937_gshared (Action_2_t3479358839 * __this, Il2CppObject * ___arg1, bool ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m2135774937(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_2_t3479358839 *, Il2CppObject *, bool, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m2135774937_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m2751209_gshared (Action_2_t3479358839 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m2751209(__this, ___result, method) ((  void (*) (Action_2_t3479358839 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m2751209_gshared)(__this, ___result, method)
