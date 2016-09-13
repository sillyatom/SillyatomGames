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

// UnityEngine.Purchasing.NativeJSONStore
struct NativeJSONStore_t1248680217;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t2902118808;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t1319332543;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t4078737053;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t915591705;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ915591705.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.NativeJSONStore::.ctor()
extern "C"  void NativeJSONStore__ctor_m1639507702 (NativeJSONStore_t1248680217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::SetNativeStore(UnityEngine.Purchasing.INativeStore)
extern "C"  void NativeJSONStore_SetNativeStore_m3397986178 (NativeJSONStore_t1248680217 * __this, Il2CppObject * ___native, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void NativeJSONStore_Initialize_m2916247791 (NativeJSONStore_t1248680217 * __this, Il2CppObject * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void NativeJSONStore_RetrieveProducts_m300663614 (NativeJSONStore_t1248680217 * __this, ReadOnlyCollection_1_t4078737053 * ___products, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void NativeJSONStore_Purchase_m3049737954 (NativeJSONStore_t1248680217 * __this, ProductDefinition_t915591705 * ___product, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void NativeJSONStore_FinishTransaction_m2249698866 (NativeJSONStore_t1248680217 * __this, ProductDefinition_t915591705 * ___product, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnSetupFailed(System.String)
extern "C"  void NativeJSONStore_OnSetupFailed_m4190222163 (NativeJSONStore_t1248680217 * __this, String_t* ___reason, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnProductsRetrieved(System.String)
extern "C"  void NativeJSONStore_OnProductsRetrieved_m3156753289 (NativeJSONStore_t1248680217 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnPurchaseSucceeded(System.String,System.String,System.String)
extern "C"  void NativeJSONStore_OnPurchaseSucceeded_m2483598917 (NativeJSONStore_t1248680217 * __this, String_t* ___id, String_t* ___receipt, String_t* ___transactionID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnPurchaseFailed(System.String)
extern "C"  void NativeJSONStore_OnPurchaseFailed_m147092407 (NativeJSONStore_t1248680217 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
