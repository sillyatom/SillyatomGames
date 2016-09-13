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

// UnityEngine.Purchasing.UIFakeStore
struct UIFakeStore_t2104954095;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Action`2<System.Boolean,System.Int32>
struct Action_2_t1319237232;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t915591705;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t4078737053;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Dropdown
struct Dropdown_t2916437562;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ915591705.h"

// System.Void UnityEngine.Purchasing.UIFakeStore::.ctor()
extern "C"  void UIFakeStore__ctor_m924108384 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>,System.Action`2<System.Boolean,System.Int32>)
extern "C"  bool UIFakeStore_StartUI_m3258009453 (UIFakeStore_t2104954095 * __this, String_t* ___queryText, String_t* ___okayButtonText, String_t* ___cancelButtonText, List_1_t1765447871 * ___options, Action_2_t1319237232 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
extern "C"  void UIFakeStore_InstantiateDialog_m2681634896 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.UIFakeStore::CreatePurchaseQuestion(UnityEngine.Purchasing.ProductDefinition)
extern "C"  String_t* UIFakeStore_CreatePurchaseQuestion_m697735553 (UIFakeStore_t2104954095 * __this, ProductDefinition_t915591705 * ___definition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.UIFakeStore::CreateRetrieveProductsQuestion(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  String_t* UIFakeStore_CreateRetrieveProductsQuestion_m1186324931 (UIFakeStore_t2104954095 * __this, ReadOnlyCollection_1_t4078737053 * ___definitions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
extern "C"  Button_t990034267 * UIFakeStore_GetOkayButton_m3788361052 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
extern "C"  Button_t990034267 * UIFakeStore_GetCancelButton_m2046187906 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
extern "C"  GameObject_t4012695102 * UIFakeStore_GetCancelButtonGameObject_m3976284436 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
extern "C"  Text_t3286458198 * UIFakeStore_GetOkayButtonText_m95065572 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
extern "C"  Text_t3286458198 * UIFakeStore_GetCancelButtonText_m136285258 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
extern "C"  Dropdown_t2916437562 * UIFakeStore_GetDropdown_m506251430 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
extern "C"  GameObject_t4012695102 * UIFakeStore_GetDropdownContainerGameObject_m2495353292 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
extern "C"  void UIFakeStore_OkayButtonClicked_m2019558815 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
extern "C"  void UIFakeStore_CancelButtonClicked_m3335923257 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
extern "C"  void UIFakeStore_DropdownValueChanged_m1531660265 (UIFakeStore_t2104954095 * __this, int32_t ___selectedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
extern "C"  void UIFakeStore_CloseDialog_m4182585118 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
extern "C"  bool UIFakeStore_IsShowingDialog_m1457260197 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>m__0()
extern "C"  void UIFakeStore_U3CInstantiateDialogU3Em__0_m819503977 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>m__1()
extern "C"  void UIFakeStore_U3CInstantiateDialogU3Em__1_m819504938 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>m__2()
extern "C"  void UIFakeStore_U3CInstantiateDialogU3Em__2_m819505899 (UIFakeStore_t2104954095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>m__3(System.Int32)
extern "C"  void UIFakeStore_U3CInstantiateDialogU3Em__3_m299483645 (UIFakeStore_t2104954095 * __this, int32_t ___selectedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.UIFakeStore::<CreateRetrieveProductsQuestion>m__4(UnityEngine.Purchasing.ProductDefinition)
extern "C"  String_t* UIFakeStore_U3CCreateRetrieveProductsQuestionU3Em__4_m3414965061 (Il2CppObject * __this /* static, unused */, ProductDefinition_t915591705 * ___pid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
