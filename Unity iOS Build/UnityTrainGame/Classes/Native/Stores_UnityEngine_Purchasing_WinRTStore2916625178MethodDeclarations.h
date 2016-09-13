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

// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t2916625178;
// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_t1086595382;
// Uniject.IUtil
struct IUtil_t1019857343;
// UnityEngine.ILogger
struct ILogger_t4167641990;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t1319332543;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t4078737053;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t915591705;
// System.String
struct String_t;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t3214074785;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ915591705.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
extern "C"  void WinRTStore__ctor_m3557601552 (WinRTStore_t2916625178 * __this, Il2CppObject * ___win8, Il2CppObject * ___util, Il2CppObject * ___logger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::SetWindowsIAP(UnityEngine.Purchasing.Default.IWindowsIAP)
extern "C"  void WinRTStore_SetWindowsIAP_m319186888 (WinRTStore_t2916625178 * __this, Il2CppObject * ___iap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void WinRTStore_Initialize_m3232732420 (WinRTStore_t2916625178 * __this, Il2CppObject * ___biller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void WinRTStore_RetrieveProducts_m211517139 (WinRTStore_t2916625178 * __this, ReadOnlyCollection_1_t4078737053 * ___productDefs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void WinRTStore_FinishTransaction_m3883372935 (WinRTStore_t2916625178 * __this, ProductDefinition_t915591705 * ___product, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
extern "C"  void WinRTStore_init_m507203866 (WinRTStore_t2916625178 * __this, int32_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void WinRTStore_Purchase_m505112557 (WinRTStore_t2916625178 * __this, ProductDefinition_t915591705 * ___product, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
extern "C"  void WinRTStore_restoreTransactions_m2626214275 (WinRTStore_t2916625178 * __this, bool ___pausing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.WinRTStore::<RetrieveProducts>m__0(UnityEngine.Purchasing.ProductDefinition)
extern "C"  bool WinRTStore_U3CRetrieveProductsU3Em__0_m1512964985 (Il2CppObject * __this /* static, unused */, ProductDefinition_t915591705 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore::<RetrieveProducts>m__1(UnityEngine.Purchasing.ProductDefinition)
extern "C"  WinProductDescription_t3214074785 * WinRTStore_U3CRetrieveProductsU3Em__1_m2565383860 (Il2CppObject * __this /* static, unused */, ProductDefinition_t915591705 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
