﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Purchasing.TizenStoreBindings
struct TizenStoreBindings_t702061528;
// System.String
struct String_t;
// UnityEngine.Purchasing.UnityNativePurchasingCallback
struct UnityNativePurchasingCallback_t1637011302;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Tizen_UnityEngine_Purchasing_UnityNativePurchasing1637011302.h"

// System.Void UnityEngine.Purchasing.TizenStoreBindings::.ctor()
extern "C"  void TizenStoreBindings__ctor_m1490374641 (TizenStoreBindings_t702061528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::SetGroupId(System.String)
extern "C"  void TizenStoreBindings_SetGroupId_m1680052215 (TizenStoreBindings_t702061528 * __this, String_t* ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityNativePurchasingCallback)
extern "C"  void TizenStoreBindings_SetUnityPurchasingCallback_m527016403 (TizenStoreBindings_t702061528 * __this, UnityNativePurchasingCallback_t1637011302 * ___AsyncCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::RetrieveProducts(System.String)
extern "C"  void TizenStoreBindings_RetrieveProducts_m507262959 (TizenStoreBindings_t702061528 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::Purchase(System.String,System.String)
extern "C"  void TizenStoreBindings_Purchase_m4195526730 (TizenStoreBindings_t702061528 * __this, String_t* ___productJSON, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void TizenStoreBindings_FinishTransaction_m3297189348 (TizenStoreBindings_t702061528 * __this, String_t* ___productJSON, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;