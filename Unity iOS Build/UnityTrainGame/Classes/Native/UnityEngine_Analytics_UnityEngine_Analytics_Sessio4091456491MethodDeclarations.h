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

// UnityEngine.Analytics.SessionImpl
struct SessionImpl_t4091456491;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1632812876;
// System.String
struct String_t;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t2243436510;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// UnityEngine.Analytics.AnalyticsEvent
struct AnalyticsEvent_t2694241545;
// System.Object
struct Il2CppObject;
// UnityEngine.Analytics.DeviceInfoEvent
struct DeviceInfoEvent_t1504983787;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_SessionI80204913.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt1896853848.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Gender280741142.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt2694241545.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Device1504983787.h"

// System.Void UnityEngine.Analytics.SessionImpl::.ctor(UnityEngine.Analytics.IPlatformWrapper)
extern "C"  void SessionImpl__ctor_m875766109 (SessionImpl_t4091456491 * __this, Il2CppObject * ___platformWrapper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.SessionImpl/State UnityEngine.Analytics.SessionImpl::get_state()
extern "C"  int32_t SessionImpl_get_state_m2308388883 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::set_state(UnityEngine.Analytics.SessionImpl/State)
extern "C"  void SessionImpl_set_state_m88015700 (SessionImpl_t4091456491 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::IsAnalyticsSupportedForPlatform()
extern "C"  bool SessionImpl_IsAnalyticsSupportedForPlatform_m3243705713 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionImpl::GetPathName()
extern "C"  String_t* SessionImpl_GetPathName_m501327066 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::StartWithAppId(System.String,UnityEngine.Analytics.ICloudService,System.String,System.String)
extern "C"  int32_t SessionImpl_StartWithAppId_m1254564614 (SessionImpl_t4091456491 * __this, String_t* ___appId, Il2CppObject * ___cloudService, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SetCustomUserId(System.String)
extern "C"  int32_t SessionImpl_SetCustomUserId_m3483822185 (SessionImpl_t4091456491 * __this, String_t* ___customUserId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SetAdvertisingId(System.String,System.Boolean)
extern "C"  int32_t SessionImpl_SetAdvertisingId_m4087674266 (SessionImpl_t4091456491 * __this, String_t* ___advertisingId, bool ___trackingEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SetUserGender(UnityEngine.Analytics.Gender)
extern "C"  int32_t SessionImpl_SetUserGender_m2692467854 (SessionImpl_t4091456491 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SetUserBirthYear(System.Int32)
extern "C"  int32_t SessionImpl_SetUserBirthYear_m3229397986 (SessionImpl_t4091456491 * __this, int32_t ___birthYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  int32_t SessionImpl_Transaction_m1821451428 (SessionImpl_t4091456491 * __this, String_t* ___productId, Decimal_t1688557254  ___amount, String_t* ___currency, String_t* ___receiptPurchaseData, String_t* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SendCustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t SessionImpl_SendCustomEvent_m4270375191 (SessionImpl_t4091456491 * __this, String_t* ___customEventName, Il2CppObject* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::isStringWithinLimit(System.String,System.Int64)
extern "C"  bool SessionImpl_isStringWithinLimit_m3689133106 (SessionImpl_t4091456491 * __this, String_t* ___input, int64_t ___sizeLimit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnAppPause()
extern "C"  void SessionImpl_OnAppPause_m4241745445 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnAppQuit()
extern "C"  void SessionImpl_OnAppQuit_m3508707618 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnAppResume()
extern "C"  void SessionImpl_OnAppResume_m1035676416 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnClick()
extern "C"  void SessionImpl_OnClick_m1783341274 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnKey()
extern "C"  void SessionImpl_OnKey_m1617985585 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnLevelWasLoaded(System.Int32)
extern "C"  void SessionImpl_OnLevelWasLoaded_m4156125387 (SessionImpl_t4091456491 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::ResetSessionValues()
extern "C"  void SessionImpl_ResetSessionValues_m3305557978 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::SaveSessionValues()
extern "C"  void SessionImpl_SaveSessionValues_m1868356172 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::RestoreSessionValues()
extern "C"  void SessionImpl_RestoreSessionValues_m3936329915 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::Initialize(System.String,System.String)
extern "C"  int32_t SessionImpl_Initialize_m3683465516 (SessionImpl_t4091456491 * __this, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionImpl::GenerateUUID()
extern "C"  String_t* SessionImpl_GenerateUUID_m1746716286 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionImpl::GetUserId()
extern "C"  String_t* SessionImpl_GetUserId_m4023501712 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::StartSession(System.Boolean)
extern "C"  void SessionImpl_StartSession_m2303195996 (SessionImpl_t4091456491 * __this, bool ___newSession, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::PauseSession()
extern "C"  void SessionImpl_PauseSession_m2669965201 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::StopSession()
extern "C"  void SessionImpl_StopSession_m3035509605 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::HandleSessionPause()
extern "C"  void SessionImpl_HandleSessionPause_m2234615065 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::SessionElapsedSincePause()
extern "C"  bool SessionImpl_SessionElapsedSincePause_m264376381 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::QueueEvent(UnityEngine.Analytics.AnalyticsEvent)
extern "C"  void SessionImpl_QueueEvent_m4013575431 (SessionImpl_t4091456491 * __this, AnalyticsEvent_t2694241545 * ___playRMEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::QueueAppRunningEvent(System.Int32)
extern "C"  void SessionImpl_QueueAppRunningEvent_m1718623213 (SessionImpl_t4091456491 * __this, int32_t ___delayInSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Analytics.SessionImpl::GenerateTransactionId()
extern "C"  int64_t SessionImpl_GenerateTransactionId_m943759494 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Analytics.SessionImpl::CalculateCustomEventSize(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Boolean&)
extern "C"  int64_t SessionImpl_CalculateCustomEventSize_m3049852423 (SessionImpl_t4091456491 * __this, Il2CppObject* ___dict, bool* ___validData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::HandleCustomEventCount(System.Int64)
extern "C"  bool SessionImpl_HandleCustomEventCount_m288932027 (SessionImpl_t4091456491 * __this, int64_t ___limitCountPerHour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnAdvertisingIdentifierCallback(System.String,System.Boolean,System.String)
extern "C"  void SessionImpl_OnAdvertisingIdentifierCallback_m632750171 (SessionImpl_t4091456491 * __this, String_t* ___advertisingId, bool ___trackingEnabled, String_t* ___errorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::IsDebugDevice()
extern "C"  bool SessionImpl_IsDebugDevice_m1878304326 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::IsPlatformChangedValue(System.String,System.String&)
extern "C"  bool SessionImpl_IsPlatformChangedValue_m4090932483 (SessionImpl_t4091456491 * __this, String_t* ___typeName, String_t** ___outValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::IsPlatformChangedValue(System.String,System.Boolean&)
extern "C"  bool SessionImpl_IsPlatformChangedValue_m217648220 (SessionImpl_t4091456491 * __this, String_t* ___typeName, bool* ___outValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Analytics.SessionImpl::GetPlatformInfo(System.String)
extern "C"  Il2CppObject * SessionImpl_GetPlatformInfo_m1495499013 (SessionImpl_t4091456491 * __this, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::HandleDeviceIdAndAdvertisingId(UnityEngine.Analytics.DeviceInfoEvent)
extern "C"  void SessionImpl_HandleDeviceIdAndAdvertisingId_m1276455689 (SessionImpl_t4091456491 * __this, DeviceInfoEvent_t1504983787 * ___deviceInfoEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::LookForVersionChange()
extern "C"  void SessionImpl_LookForVersionChange_m930923887 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::PrepareCloudServiceConfig()
extern "C"  void SessionImpl_PrepareCloudServiceConfig_m2490732922 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::RestoreConfig()
extern "C"  void SessionImpl_RestoreConfig_m3410852769 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::UpdateConfigFromServer()
extern "C"  void SessionImpl_UpdateConfigFromServer_m399047977 (SessionImpl_t4091456491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnDoneSaveFileFromServer(System.String,System.String,System.Boolean,System.Int32)
extern "C"  void SessionImpl_OnDoneSaveFileFromServer_m286303552 (SessionImpl_t4091456491 * __this, String_t* ___fileName, String_t* ___etag, bool ___fileUpdated, int32_t ___responseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
