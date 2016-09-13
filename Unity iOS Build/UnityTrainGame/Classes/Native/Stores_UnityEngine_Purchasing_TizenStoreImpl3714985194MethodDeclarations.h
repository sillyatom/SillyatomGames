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

// UnityEngine.Purchasing.TizenStoreImpl
struct TizenStoreImpl_t3714985194;
// Uniject.IUtil
struct IUtil_t1019857343;
// UnityEngine.Purchasing.INativeTizenStore
struct INativeTizenStore_t106777066;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.TizenStoreImpl::.ctor(Uniject.IUtil)
extern "C"  void TizenStoreImpl__ctor_m1178219326 (TizenStoreImpl_t3714985194 * __this, Il2CppObject * ___util, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeTizenStore)
extern "C"  void TizenStoreImpl_SetNativeStore_m2802700439 (TizenStoreImpl_t3714985194 * __this, Il2CppObject * ___tizen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::SetGroupId(System.String)
extern "C"  void TizenStoreImpl_SetGroupId_m54443969 (TizenStoreImpl_t3714985194 * __this, String_t* ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern "C"  void TizenStoreImpl_MessageCallback_m3765147857 (Il2CppObject * __this /* static, unused */, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern "C"  void TizenStoreImpl_ProcessMessage_m2847474389 (TizenStoreImpl_t3714985194 * __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
