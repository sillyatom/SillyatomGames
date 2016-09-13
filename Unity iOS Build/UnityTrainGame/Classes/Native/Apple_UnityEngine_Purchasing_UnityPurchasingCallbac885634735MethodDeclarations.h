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

// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t885634735;
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

// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityPurchasingCallback__ctor_m2606218906 (UnityPurchasingCallback_t885634735 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
extern "C"  void UnityPurchasingCallback_Invoke_m3351568450 (UnityPurchasingCallback_t885634735 * __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnityPurchasingCallback_t885634735(Il2CppObject* delegate, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId);
// System.IAsyncResult UnityEngine.Purchasing.UnityPurchasingCallback::BeginInvoke(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityPurchasingCallback_BeginInvoke_m1881739807 (UnityPurchasingCallback_t885634735 * __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::EndInvoke(System.IAsyncResult)
extern "C"  void UnityPurchasingCallback_EndInvoke_m2822147498 (UnityPurchasingCallback_t885634735 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
