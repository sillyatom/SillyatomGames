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

// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t2828518919;
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

// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAdsDelegate__ctor_m1175331529 (UnityAdsDelegate_t2828518919 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C"  void UnityAdsDelegate_Invoke_m4129568867 (UnityAdsDelegate_t2828518919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnityAdsDelegate_t2828518919(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAdsDelegate_BeginInvoke_m3315877064 (UnityAdsDelegate_t2828518919 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAdsDelegate_EndInvoke_m3463209305 (UnityAdsDelegate_t2828518919 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
