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

// System.String
struct String_t;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t2243436510;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// UnityEngine.Analytics.IUnityAnalyticsSession
struct IUnityAnalyticsSession_t1863129905;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt1896853848.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Gender280741142.h"
#include "mscorlib_System_Decimal1688557254.h"

// System.Void UnityEngine.Analytics.Analytics::AutoStartUnityAnalytics()
extern "C"  void Analytics_AutoStartUnityAnalytics_m1670054757 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::InternalStartSession(System.String)
extern "C"  int32_t Analytics_InternalStartSession_m2831443455 (Il2CppObject * __this /* static, unused */, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::InternalStartSession(System.String,UnityEngine.Analytics.ICloudService,System.String,System.String)
extern "C"  int32_t Analytics_InternalStartSession_m2098665529 (Il2CppObject * __this /* static, unused */, String_t* ___appId, Il2CppObject * ___cloudService, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.Analytics::GetPathName()
extern "C"  String_t* Analytics_GetPathName_m3311427434 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SetUserId(System.String)
extern "C"  int32_t Analytics_SetUserId_m3680814858 (Il2CppObject * __this /* static, unused */, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SetUserGender(UnityEngine.Analytics.Gender)
extern "C"  int32_t Analytics_SetUserGender_m2131258910 (Il2CppObject * __this /* static, unused */, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SetUserBirthYear(System.Int32)
extern "C"  int32_t Analytics_SetUserBirthYear_m2016987218 (Il2CppObject * __this /* static, unused */, int32_t ___birthYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String)
extern "C"  int32_t Analytics_Transaction_m950268092 (Il2CppObject * __this /* static, unused */, String_t* ___productId, Decimal_t1688557254  ___amount, String_t* ___currency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  int32_t Analytics_Transaction_m2755720756 (Il2CppObject * __this /* static, unused */, String_t* ___productId, Decimal_t1688557254  ___amount, String_t* ___currency, String_t* ___receiptPurchaseData, String_t* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t Analytics_CustomEvent_m2355465823 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName, Il2CppObject* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.IUnityAnalyticsSession UnityEngine.Analytics.Analytics::GetSingleton()
extern "C"  Il2CppObject * Analytics_GetSingleton_m3227537842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
