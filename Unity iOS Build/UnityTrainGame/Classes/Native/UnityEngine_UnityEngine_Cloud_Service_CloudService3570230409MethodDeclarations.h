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

// UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t3570230409;
struct CloudServiceConfig_t3570230409_marshaled_pinvoke;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::.ctor()
extern "C"  void CloudServiceConfig__ctor_m745211993 (CloudServiceConfig_t3570230409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_maxNumberOfEventInGroup(System.Int32)
extern "C"  void CloudServiceConfig_set_maxNumberOfEventInGroup_m3751734735 (CloudServiceConfig_t3570230409 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_archivedSessionExpiryTimeInSec(System.Int32)
extern "C"  void CloudServiceConfig_set_archivedSessionExpiryTimeInSec_m3589097201 (CloudServiceConfig_t3570230409 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_maxContinuousRequest(System.Int32)
extern "C"  void CloudServiceConfig_set_maxContinuousRequest_m606608629 (CloudServiceConfig_t3570230409 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_maxContinuousRequestTimeoutInSec(System.Int32)
extern "C"  void CloudServiceConfig_set_maxContinuousRequestTimeoutInSec_m2331643232 (CloudServiceConfig_t3570230409 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_sessionHeaderName(System.String)
extern "C"  void CloudServiceConfig_set_sessionHeaderName_m2427987802 (CloudServiceConfig_t3570230409 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_eventsHeaderName(System.String)
extern "C"  void CloudServiceConfig_set_eventsHeaderName_m1058198153 (CloudServiceConfig_t3570230409 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_eventsEndPoint(System.String)
extern "C"  void CloudServiceConfig_set_eventsEndPoint_m47685164 (CloudServiceConfig_t3570230409 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_networkFailureRetryTimeoutInSec(System.Int32[])
extern "C"  void CloudServiceConfig_set_networkFailureRetryTimeoutInSec_m2136758752 (CloudServiceConfig_t3570230409 * __this, Int32U5BU5D_t1809983122* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct CloudServiceConfig_t3570230409;
struct CloudServiceConfig_t3570230409_marshaled_pinvoke;

extern "C" void CloudServiceConfig_t3570230409_marshal_pinvoke(const CloudServiceConfig_t3570230409& unmarshaled, CloudServiceConfig_t3570230409_marshaled_pinvoke& marshaled);
extern "C" void CloudServiceConfig_t3570230409_marshal_pinvoke_back(const CloudServiceConfig_t3570230409_marshaled_pinvoke& marshaled, CloudServiceConfig_t3570230409& unmarshaled);
extern "C" void CloudServiceConfig_t3570230409_marshal_pinvoke_cleanup(CloudServiceConfig_t3570230409_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct CloudServiceConfig_t3570230409;
struct CloudServiceConfig_t3570230409_marshaled_com;

extern "C" void CloudServiceConfig_t3570230409_marshal_com(const CloudServiceConfig_t3570230409& unmarshaled, CloudServiceConfig_t3570230409_marshaled_com& marshaled);
extern "C" void CloudServiceConfig_t3570230409_marshal_com_back(const CloudServiceConfig_t3570230409_marshaled_com& marshaled, CloudServiceConfig_t3570230409& unmarshaled);
extern "C" void CloudServiceConfig_t3570230409_marshal_com_cleanup(CloudServiceConfig_t3570230409_marshaled_com& marshaled);
