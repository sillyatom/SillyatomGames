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

// UnityEngine.Purchasing.StoreListenerProxy
struct StoreListenerProxy_t963502448;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t341782915;
// UnityEngine.Purchasing.AnalyticsReporter
struct AnalyticsReporter_t3044675838;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2030462110;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t2959286891;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t3858045197;
// UnityEngine.Purchasing.Product
struct Product_t16267110;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Anal3044675838.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init1104172581.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc3942721256.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc3858045197.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produc16267110.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2274432868.h"

// System.Void UnityEngine.Purchasing.StoreListenerProxy::.ctor(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.AnalyticsReporter,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void StoreListenerProxy__ctor_m3543322089 (StoreListenerProxy_t963502448 * __this, Il2CppObject * ___forwardTo, AnalyticsReporter_t3044675838 * ___analytics, Il2CppObject * ___extensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitialized(UnityEngine.Purchasing.IStoreController)
extern "C"  void StoreListenerProxy_OnInitialized_m2234879360 (StoreListenerProxy_t963502448 * __this, Il2CppObject * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void StoreListenerProxy_OnInitializeFailed_m3767109769 (StoreListenerProxy_t963502448 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.StoreListenerProxy::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t StoreListenerProxy_ProcessPurchase_m999184108 (StoreListenerProxy_t963502448 * __this, PurchaseEventArgs_t3858045197 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void StoreListenerProxy_OnPurchaseFailed_m531435385 (StoreListenerProxy_t963502448 * __this, Product_t16267110 * ___i, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
