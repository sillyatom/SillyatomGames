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

// UnityEngine.Analytics.UnityAnalyticsNotSupportedSession
struct UnityAnalyticsNotSupportedSession_t1810395583;
// System.String
struct String_t;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t2243436510;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt1896853848.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Gender280741142.h"
#include "mscorlib_System_Decimal1688557254.h"

// System.Void UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::.ctor()
extern "C"  void UnityAnalyticsNotSupportedSession__ctor_m3995550527 (UnityAnalyticsNotSupportedSession_t1810395583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::GetPathName()
extern "C"  String_t* UnityAnalyticsNotSupportedSession_GetPathName_m2374670278 (UnityAnalyticsNotSupportedSession_t1810395583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::StartWithAppId(System.String,UnityEngine.Analytics.ICloudService,System.String,System.String)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_StartWithAppId_m22592754 (UnityAnalyticsNotSupportedSession_t1810395583 * __this, String_t* ___appId, Il2CppObject * ___cloudService, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::SetCustomUserId(System.String)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_SetCustomUserId_m472853501 (UnityAnalyticsNotSupportedSession_t1810395583 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::SetUserGender(UnityEngine.Analytics.Gender)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_SetUserGender_m2431711610 (UnityAnalyticsNotSupportedSession_t1810395583 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::SetUserBirthYear(System.Int32)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_SetUserBirthYear_m218429302 (UnityAnalyticsNotSupportedSession_t1810395583 * __this, int32_t ___birthYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_Transaction_m789706128 (UnityAnalyticsNotSupportedSession_t1810395583 * __this, String_t* ___productId, Decimal_t1688557254  ___amount, String_t* ___currency, String_t* ___receiptPurchaseData, String_t* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::SendCustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_SendCustomEvent_m1245603243 (UnityAnalyticsNotSupportedSession_t1810395583 * __this, String_t* ___customEventName, Il2CppObject* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
