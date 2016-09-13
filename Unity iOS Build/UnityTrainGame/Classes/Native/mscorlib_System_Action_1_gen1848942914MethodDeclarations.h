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

// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_t1848942914;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1700490209.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m610664120_gshared (Action_1_t1848942914 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m610664120(__this, ___object, ___method, method) ((  void (*) (Action_1_t1848942914 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m610664120_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(T)
extern "C"  void Action_1_Invoke_m3256301100_gshared (Action_1_t1848942914 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m3256301100(__this, ___obj, method) ((  void (*) (Action_1_t1848942914 *, int32_t, const MethodInfo*))Action_1_Invoke_m3256301100_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Advertisements.ShowResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1429348848_gshared (Action_1_t1848942914 * __this, int32_t ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1429348848(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t1848942914 *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1429348848_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2235204497_gshared (Action_1_t1848942914 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m2235204497(__this, ___result, method) ((  void (*) (Action_1_t1848942914 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m2235204497_gshared)(__this, ___result, method)
