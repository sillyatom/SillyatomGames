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

// UnityEngine.Analytics.AnalyticsCloudService
struct AnalyticsCloudService_t3336050555;
// System.String
struct String_t;
// UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t3570230409;
struct CloudServiceConfig_t3570230409_marshaled_pinvoke;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// UnityEngine.Analytics.ICloudServiceListener
struct ICloudServiceListener_t548638642;
// System.Action`4<System.String,System.String,System.Boolean,System.Int32>
struct Action_4_t691868414;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudService3570230409.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudEventFl1045909065.h"

// System.Void UnityEngine.Analytics.AnalyticsCloudService::.ctor()
extern "C"  void AnalyticsCloudService__ctor_m2044996099 (AnalyticsCloudService_t3336050555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::Initialize(System.String)
extern "C"  bool AnalyticsCloudService_Initialize_m860037127 (AnalyticsCloudService_t3336050555 * __this, String_t* ___projectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::StartEventHandler(System.String,System.Int32,System.Int32)
extern "C"  bool AnalyticsCloudService_StartEventHandler_m356483577 (AnalyticsCloudService_t3336050555 * __this, String_t* ___sessionInfo, int32_t ___maxNumberOfEventInQueue, int32_t ___maxEventTimeoutInSec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::PauseEventHandler(System.Boolean)
extern "C"  bool AnalyticsCloudService_PauseEventHandler_m337768724 (AnalyticsCloudService_t3336050555 * __this, bool ___flushEvents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::StopEventHandler()
extern "C"  bool AnalyticsCloudService_StopEventHandler_m2671641533 (AnalyticsCloudService_t3336050555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::StartEventDispatcher(UnityEngine.Cloud.Service.CloudServiceConfig,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  bool AnalyticsCloudService_StartEventDispatcher_m2298821592 (AnalyticsCloudService_t3336050555 * __this, CloudServiceConfig_t3570230409 * ___serviceConfig, Dictionary_2_t2606186806 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::PauseEventDispatcher()
extern "C"  bool AnalyticsCloudService_PauseEventDispatcher_m204734486 (AnalyticsCloudService_t3336050555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::StopEventDispatcher()
extern "C"  bool AnalyticsCloudService_StopEventDispatcher_m4287832758 (AnalyticsCloudService_t3336050555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsCloudService::ResetNetworkRetryIndex()
extern "C"  void AnalyticsCloudService_ResetNetworkRetryIndex_m823422698 (AnalyticsCloudService_t3336050555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::QueueEvent(System.String,UnityEngine.Cloud.Service.CloudEventFlags)
extern "C"  bool AnalyticsCloudService_QueueEvent_m1708314721 (AnalyticsCloudService_t3336050555 * __this, String_t* ___eventData, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::SaveFileFromServer(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.Analytics.ICloudServiceListener,System.Action`4<System.String,System.String,System.Boolean,System.Int32>)
extern "C"  bool AnalyticsCloudService_SaveFileFromServer_m2014834039 (AnalyticsCloudService_t3336050555 * __this, String_t* ___fileName, String_t* ___url, Dictionary_2_t2606186806 * ___headers, Il2CppObject * ___listener, Action_4_t691868414 * ___doneMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::SaveFile(System.String,System.String)
extern "C"  bool AnalyticsCloudService_SaveFile_m80143642 (AnalyticsCloudService_t3336050555 * __this, String_t* ___fileName, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.AnalyticsCloudService::RestoreFile(System.String)
extern "C"  String_t* AnalyticsCloudService_RestoreFile_m2532229972 (AnalyticsCloudService_t3336050555 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.AnalyticsCloudService::get_serviceFolderName()
extern "C"  String_t* AnalyticsCloudService_get_serviceFolderName_m361281257 (AnalyticsCloudService_t3336050555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
