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

// IAPDemo
struct IAPDemo_t2300162107;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t2959286891;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2030462110;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t3858045197;
// UnityEngine.Purchasing.Product
struct Product_t16267110;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>
struct IEnumerable_1_t2888421466;
// UnityEngine.UI.Dropdown
struct Dropdown_t2916437562;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc3942721256.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc3858045197.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produc16267110.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2274432868.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init1104172581.h"

// System.Void IAPDemo::.ctor()
extern "C"  void IAPDemo__ctor_m2472349788 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void IAPDemo_OnInitialized_m4145729570 (IAPDemo_t2300162107 * __this, Il2CppObject * ___controller, Il2CppObject * ___extensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult IAPDemo::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPDemo_ProcessPurchase_m1313773462 (IAPDemo_t2300162107 * __this, PurchaseEventArgs_t3858045197 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPDemo_OnPurchaseFailed_m2134414947 (IAPDemo_t2300162107 * __this, Product_t16267110 * ___item, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void IAPDemo_OnInitializeFailed_m790429919 (IAPDemo_t2300162107 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::Awake()
extern "C"  void IAPDemo_Awake_m2709955007 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnTransactionsRestored(System.Boolean)
extern "C"  void IAPDemo_OnTransactionsRestored_m2391586217 (IAPDemo_t2300162107 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnDeferred(UnityEngine.Purchasing.Product)
extern "C"  void IAPDemo_OnDeferred_m1837455280 (IAPDemo_t2300162107 * __this, Product_t16267110 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::InitUI(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern "C"  void IAPDemo_InitUI_m1256308941 (IAPDemo_t2300162107 * __this, Il2CppObject* ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::UpdateHistoryUI()
extern "C"  void IAPDemo_UpdateHistoryUI_m2835966425 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::UpdateInteractable()
extern "C"  void IAPDemo_UpdateInteractable_m2185924321 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::Update()
extern "C"  void IAPDemo_Update_m1060294193 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown IAPDemo::GetDropdown()
extern "C"  Dropdown_t2916437562 * IAPDemo_GetDropdown_m664285184 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetBuyButton()
extern "C"  Button_t990034267 * IAPDemo_GetBuyButton_m2634699276 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetRestoreButton()
extern "C"  Button_t990034267 * IAPDemo_GetRestoreButton_m2508131476 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text IAPDemo::GetText(System.Boolean)
extern "C"  Text_t3286458198 * IAPDemo_GetText_m1929841143 (IAPDemo_t2300162107 * __this, bool ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__0(System.Int32)
extern "C"  void IAPDemo_U3CInitUIU3Em__0_m2615411930 (IAPDemo_t2300162107 * __this, int32_t ___selectedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__1()
extern "C"  void IAPDemo_U3CInitUIU3Em__1_m3136461002 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__2()
extern "C"  void IAPDemo_U3CInitUIU3Em__2_m3136461963 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
