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

// UnityEngine.Cloud.Service.CloudService
struct CloudService_t2557713703;
struct CloudService_t2557713703_marshaled_pinvoke;
// System.String
struct String_t;
// UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t3570230409;
struct CloudServiceConfig_t3570230409_marshaled_pinvoke;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudService2089889921.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudService3570230409.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudEventFl1045909065.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Cloud.Service.CloudService::.ctor(UnityEngine.Cloud.Service.CloudServiceType)
extern "C"  void CloudService__ctor_m1908878424 (CloudService_t2557713703 * __this, int32_t ___serviceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::InternalCreate(UnityEngine.Cloud.Service.CloudServiceType)
extern "C"  void CloudService_InternalCreate_m2046172255 (CloudService_t2557713703 * __this, int32_t ___serviceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::InternalDestroy()
extern "C"  void CloudService_InternalDestroy_m3760345558 (CloudService_t2557713703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::Finalize()
extern "C"  void CloudService_Finalize_m2249049863 (CloudService_t2557713703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::Dispose()
extern "C"  void CloudService_Dispose_m3985399032 (CloudService_t2557713703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::Initialize(System.String)
extern "C"  bool CloudService_Initialize_m1697171843 (CloudService_t2557713703 * __this, String_t* ___projectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::StartEventHandler(System.String,System.Int32,System.Int32)
extern "C"  bool CloudService_StartEventHandler_m131463165 (CloudService_t2557713703 * __this, String_t* ___sessionInfo, int32_t ___maxNumberOfEventInQueue, int32_t ___maxEventTimeoutInSec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::PauseEventHandler(System.Boolean)
extern "C"  bool CloudService_PauseEventHandler_m2406768272 (CloudService_t2557713703 * __this, bool ___flushEvents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::StopEventHandler()
extern "C"  bool CloudService_StopEventHandler_m1885720001 (CloudService_t2557713703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::StartEventDispatcher(UnityEngine.Cloud.Service.CloudServiceConfig,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  bool CloudService_StartEventDispatcher_m2849229908 (CloudService_t2557713703 * __this, CloudServiceConfig_t3570230409 * ___serviceConfig, Dictionary_2_t2606186806 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::InternalStartEventDispatcher(UnityEngine.Cloud.Service.CloudServiceConfig,System.String[])
extern "C"  bool CloudService_InternalStartEventDispatcher_m1144791098 (CloudService_t2557713703 * __this, CloudServiceConfig_t3570230409 * ___serviceConfig, StringU5BU5D_t2956870243* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::PauseEventDispatcher()
extern "C"  bool CloudService_PauseEventDispatcher_m278865946 (CloudService_t2557713703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::StopEventDispatcher()
extern "C"  bool CloudService_StopEventDispatcher_m2766203442 (CloudService_t2557713703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::ResetNetworkRetryIndex()
extern "C"  void CloudService_ResetNetworkRetryIndex_m1630295154 (CloudService_t2557713703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::QueueEvent(System.String,UnityEngine.Cloud.Service.CloudEventFlags)
extern "C"  bool CloudService_QueueEvent_m2806439645 (CloudService_t2557713703 * __this, String_t* ___eventData, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::SaveFileFromServer(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object,System.String)
extern "C"  bool CloudService_SaveFileFromServer_m2179173144 (CloudService_t2557713703 * __this, String_t* ___fileName, String_t* ___url, Dictionary_2_t2606186806 * ___headers, Il2CppObject * ___d, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::InternalSaveFileFromServer(System.String,System.String,System.String[],System.Object,System.String)
extern "C"  bool CloudService_InternalSaveFileFromServer_m739695664 (CloudService_t2557713703 * __this, String_t* ___fileName, String_t* ___url, StringU5BU5D_t2956870243* ___headers, Il2CppObject * ___d, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::SaveFile(System.String,System.String)
extern "C"  bool CloudService_SaveFile_m2381198486 (CloudService_t2557713703 * __this, String_t* ___fileName, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Service.CloudService::RestoreFile(System.String)
extern "C"  String_t* CloudService_RestoreFile_m2361855554 (CloudService_t2557713703 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Service.CloudService::get_serviceFolderName()
extern "C"  String_t* CloudService_get_serviceFolderName_m3855090363 (CloudService_t2557713703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Cloud.Service.CloudService::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  StringU5BU5D_t2956870243* CloudService_FlattenedHeadersFrom_m3392854664 (Il2CppObject * __this /* static, unused */, Dictionary_2_t2606186806 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct CloudService_t2557713703;
struct CloudService_t2557713703_marshaled_pinvoke;

extern "C" void CloudService_t2557713703_marshal_pinvoke(const CloudService_t2557713703& unmarshaled, CloudService_t2557713703_marshaled_pinvoke& marshaled);
extern "C" void CloudService_t2557713703_marshal_pinvoke_back(const CloudService_t2557713703_marshaled_pinvoke& marshaled, CloudService_t2557713703& unmarshaled);
extern "C" void CloudService_t2557713703_marshal_pinvoke_cleanup(CloudService_t2557713703_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct CloudService_t2557713703;
struct CloudService_t2557713703_marshaled_com;

extern "C" void CloudService_t2557713703_marshal_com(const CloudService_t2557713703& unmarshaled, CloudService_t2557713703_marshaled_com& marshaled);
extern "C" void CloudService_t2557713703_marshal_com_back(const CloudService_t2557713703_marshaled_com& marshaled, CloudService_t2557713703& unmarshaled);
extern "C" void CloudService_t2557713703_marshal_com_cleanup(CloudService_t2557713703_marshaled_com& marshaled);
