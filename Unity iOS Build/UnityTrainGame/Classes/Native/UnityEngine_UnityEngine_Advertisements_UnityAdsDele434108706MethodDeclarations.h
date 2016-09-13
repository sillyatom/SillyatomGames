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

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>
struct UnityAdsDelegate_2_t434108706;
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

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAdsDelegate_2__ctor_m4033885901_gshared (UnityAdsDelegate_2_t434108706 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m4033885901(__this, ___object, ___method, method) ((  void (*) (UnityAdsDelegate_2_t434108706 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m4033885901_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C"  void UnityAdsDelegate_2_Invoke_m1818993470_gshared (UnityAdsDelegate_2_t434108706 * __this, Il2CppObject * ___p1, Il2CppObject * ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m1818993470(__this, ___p1, ___p2, method) ((  void (*) (UnityAdsDelegate_2_t434108706 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))UnityAdsDelegate_2_Invoke_m1818993470_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAdsDelegate_2_BeginInvoke_m3096834653_gshared (UnityAdsDelegate_2_t434108706 * __this, Il2CppObject * ___p1, Il2CppObject * ___p2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m3096834653(__this, ___p1, ___p2, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAdsDelegate_2_t434108706 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m3096834653_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAdsDelegate_2_EndInvoke_m1306597213_gshared (UnityAdsDelegate_2_t434108706 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m1306597213(__this, ___result, method) ((  void (*) (UnityAdsDelegate_2_t434108706 *, Il2CppObject *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m1306597213_gshared)(__this, ___result, method)
