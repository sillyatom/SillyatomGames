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

// UnityEngine.Purchasing.UnityNativePurchasingCallback
struct UnityNativePurchasingCallback_t1637011302;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityNativePurchasingCallback__ctor_m2873225053 (UnityNativePurchasingCallback_t1637011302 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
extern "C"  void UnityNativePurchasingCallback_Invoke_m3687803487 (UnityNativePurchasingCallback_t1637011302 * __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnityNativePurchasingCallback_t1637011302(Il2CppObject* delegate, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId);
// System.IAsyncResult UnityEngine.Purchasing.UnityNativePurchasingCallback::BeginInvoke(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityNativePurchasingCallback_BeginInvoke_m493263420 (UnityNativePurchasingCallback_t1637011302 * __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::EndInvoke(System.IAsyncResult)
extern "C"  void UnityNativePurchasingCallback_EndInvoke_m654677997 (UnityNativePurchasingCallback_t1637011302 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
