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

// UnityEngine.Purchasing.PurchasingManager
struct PurchasingManager_t1406421702;
// UnityEngine.Purchasing.TransactionLog
struct TransactionLog_t2964628029;
// UnityEngine.ILogger
struct ILogger_t4167641990;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t3327163994;
// System.String
struct String_t;
// UnityEngine.Purchasing.Product
struct Product_t16267110;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t188697444;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t4279873365;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t2781761768;
// UnityEngine.Purchasing.IInternalStoreListener
struct IInternalStoreListener_t338955974;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t3614280376;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t915591705;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Tran2964628029.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produc16267110.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ188697444.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init1104172581.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Exte4279873365.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ915591705.h"

// System.Void UnityEngine.Purchasing.PurchasingManager::.ctor(UnityEngine.Purchasing.TransactionLog,UnityEngine.ILogger,UnityEngine.Purchasing.Extension.IStore,System.String)
extern "C"  void PurchasingManager__ctor_m390079097 (PurchasingManager_t1406421702 * __this, TransactionLog_t2964628029 * ___tDb, Il2CppObject * ___logger, Il2CppObject * ___store, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_InitiatePurchase_m2570378396 (PurchasingManager_t1406421702 * __this, Product_t16267110 * ___product, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product,System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m3484533720 (PurchasingManager_t1406421702 * __this, Product_t16267110 * ___product, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::ConfirmPendingPurchase(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ConfirmPendingPurchase_m1082777978 (PurchasingManager_t1406421702 * __this, Product_t16267110 * ___product, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.PurchasingManager::get_products()
extern "C"  ProductCollection_t188697444 * PurchasingManager_get_products_m2426931548 (PurchasingManager_t1406421702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::set_products(UnityEngine.Purchasing.ProductCollection)
extern "C"  void PurchasingManager_set_products_m3436408421 (PurchasingManager_t1406421702 * __this, ProductCollection_t188697444 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseSucceeded(System.String,System.String,System.String)
extern "C"  void PurchasingManager_OnPurchaseSucceeded_m837188719 (PurchasingManager_t1406421702 * __this, String_t* ___id, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void PurchasingManager_OnSetupFailed_m3871050672 (PurchasingManager_t1406421702 * __this, int32_t ___reason, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern "C"  void PurchasingManager_OnPurchaseFailed_m3175638850 (PurchasingManager_t1406421702 * __this, PurchaseFailureDescription_t4279873365 * ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern "C"  void PurchasingManager_OnProductsRetrieved_m1715226664 (PurchasingManager_t1406421702 * __this, List_1_t2781761768 * ___products, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::ProcessPurchaseIfNew(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ProcessPurchaseIfNew_m1020692213 (PurchasingManager_t1406421702 * __this, Product_t16267110 * ___product, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::CheckForInitialization()
extern "C"  void PurchasingManager_CheckForInitialization_m49095001 (PurchasingManager_t1406421702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::Initialize(UnityEngine.Purchasing.IInternalStoreListener,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void PurchasingManager_Initialize_m2134113429 (PurchasingManager_t1406421702 * __this, Il2CppObject * ___listener, HashSet_1_t3614280376 * ___products, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.PurchasingManager::FormatUnifiedReceipt(System.String,System.String)
extern "C"  String_t* PurchasingManager_FormatUnifiedReceipt_m2085439046 (PurchasingManager_t1406421702 * __this, String_t* ___platformReceipt, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchasingManager::<Initialize>m__2(UnityEngine.Purchasing.ProductDefinition)
extern "C"  Product_t16267110 * PurchasingManager_U3CInitializeU3Em__2_m3447063579 (Il2CppObject * __this /* static, unused */, ProductDefinition_t915591705 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
