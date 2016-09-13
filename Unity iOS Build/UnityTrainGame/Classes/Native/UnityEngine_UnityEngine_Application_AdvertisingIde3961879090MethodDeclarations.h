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

// UnityEngine.Application/AdvertisingIdentifierCallback
struct AdvertisingIdentifierCallback_t3961879090;
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

// System.Void UnityEngine.Application/AdvertisingIdentifierCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AdvertisingIdentifierCallback__ctor_m3247187932 (AdvertisingIdentifierCallback_t3961879090 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/AdvertisingIdentifierCallback::Invoke(System.String,System.Boolean,System.String)
extern "C"  void AdvertisingIdentifierCallback_Invoke_m2946154733 (AdvertisingIdentifierCallback_t3961879090 * __this, String_t* ___advertisingId, bool ___trackingEnabled, String_t* ___errorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AdvertisingIdentifierCallback_t3961879090(Il2CppObject* delegate, String_t* ___advertisingId, bool ___trackingEnabled, String_t* ___errorMsg);
// System.IAsyncResult UnityEngine.Application/AdvertisingIdentifierCallback::BeginInvoke(System.String,System.Boolean,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdvertisingIdentifierCallback_BeginInvoke_m3138258066 (AdvertisingIdentifierCallback_t3961879090 * __this, String_t* ___advertisingId, bool ___trackingEnabled, String_t* ___errorMsg, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/AdvertisingIdentifierCallback::EndInvoke(System.IAsyncResult)
extern "C"  void AdvertisingIdentifierCallback_EndInvoke_m1443227628 (AdvertisingIdentifierCallback_t3961879090 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
