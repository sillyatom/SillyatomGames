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

// UnityEngine.Purchasing.AppleStoreImpl
struct AppleStoreImpl_t3460880158;
// Uniject.IUtil
struct IUtil_t1019857343;
// UnityEngine.Purchasing.INativeAppleStore
struct INativeAppleStore_t1189948958;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// System.Action`1<UnityEngine.Purchasing.Product>
struct Action_1_t164719815;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.AppleStoreImpl::.ctor(Uniject.IUtil)
extern "C"  void AppleStoreImpl__ctor_m3110895218 (AppleStoreImpl_t3460880158 * __this, Il2CppObject * ___util, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeAppleStore)
extern "C"  void AppleStoreImpl_SetNativeStore_m3820631063 (AppleStoreImpl_t3460880158 * __this, Il2CppObject * ___apple, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnProductsRetrieved(System.String)
extern "C"  void AppleStoreImpl_OnProductsRetrieved_m618570072 (AppleStoreImpl_t3460880158 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::RestoreTransactions(System.Action`1<System.Boolean>)
extern "C"  void AppleStoreImpl_RestoreTransactions_m3962723787 (AppleStoreImpl_t3460880158 * __this, Action_1_t359458046 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
extern "C"  void AppleStoreImpl_RegisterPurchaseDeferredListener_m2796653484 (AppleStoreImpl_t3460880158 * __this, Action_1_t164719815 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPurchaseDeferred(System.String)
extern "C"  void AppleStoreImpl_OnPurchaseDeferred_m1551072102 (AppleStoreImpl_t3460880158 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredSuccess()
extern "C"  void AppleStoreImpl_OnTransactionsRestoredSuccess_m3945466238 (AppleStoreImpl_t3460880158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredFail(System.String)
extern "C"  void AppleStoreImpl_OnTransactionsRestoredFail_m2064762237 (AppleStoreImpl_t3460880158 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRetrieved(System.String)
extern "C"  void AppleStoreImpl_OnAppReceiptRetrieved_m884913419 (AppleStoreImpl_t3460880158 * __this, String_t* ___receipt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRefreshedFailed()
extern "C"  void AppleStoreImpl_OnAppReceiptRefreshedFailed_m573140742 (AppleStoreImpl_t3460880158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern "C"  void AppleStoreImpl_MessageCallback_m1619685893 (Il2CppObject * __this /* static, unused */, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern "C"  void AppleStoreImpl_ProcessMessage_m1115697953 (AppleStoreImpl_t3460880158 * __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
