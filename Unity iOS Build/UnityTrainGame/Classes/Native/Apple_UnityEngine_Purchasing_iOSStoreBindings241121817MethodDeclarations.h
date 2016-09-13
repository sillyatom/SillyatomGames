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

// UnityEngine.Purchasing.iOSStoreBindings
struct iOSStoreBindings_t241121817;
// System.String
struct String_t;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t885634735;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Apple_UnityEngine_Purchasing_UnityPurchasingCallbac885634735.h"

// System.Void UnityEngine.Purchasing.iOSStoreBindings::.ctor()
extern "C"  void iOSStoreBindings__ctor_m2068005060 (iOSStoreBindings_t241121817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_unityPurchasingRetrieveProducts_m1724542061 (Il2CppObject * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingPurchase_m3984262728 (Il2CppObject * __this /* static, unused */, String_t* ___json, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingFinishTransaction_m890609062 (Il2CppObject * __this /* static, unused */, String_t* ___productJSON, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void iOSStoreBindings_unityPurchasingRestoreTransactions_m2981115088 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void iOSStoreBindings_unityPurchasingAddTransactionObserver_m4154641576 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_setUnityPurchasingCallback_m709066903 (Il2CppObject * __this /* static, unused */, UnityPurchasingCallback_t885634735 * ___AsyncCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_SetUnityPurchasingCallback_m3693370551 (iOSStoreBindings_t241121817 * __this, UnityPurchasingCallback_t885634735 * ___AsyncCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_RetrieveProducts_m1168744386 (iOSStoreBindings_t241121817 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::Purchase(System.String,System.String)
extern "C"  void iOSStoreBindings_Purchase_m1465492957 (iOSStoreBindings_t241121817 * __this, String_t* ___productJSON, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_FinishTransaction_m3505960369 (iOSStoreBindings_t241121817 * __this, String_t* ___productJSON, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RestoreTransactions()
extern "C"  void iOSStoreBindings_RestoreTransactions_m2695011941 (iOSStoreBindings_t241121817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::AddTransactionObserver()
extern "C"  void iOSStoreBindings_AddTransactionObserver_m2070904563 (iOSStoreBindings_t241121817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
