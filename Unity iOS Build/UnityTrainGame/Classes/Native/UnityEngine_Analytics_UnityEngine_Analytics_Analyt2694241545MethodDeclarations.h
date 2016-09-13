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

// UnityEngine.Analytics.AnalyticsEvent
struct AnalyticsEvent_t2694241545;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudEventFl1045909065.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Analytics.AnalyticsEvent::.ctor()
extern "C"  void AnalyticsEvent__ctor_m3879474921 (AnalyticsEvent_t2694241545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsEvent::.ctor(System.String,UnityEngine.Cloud.Service.CloudEventFlags)
extern "C"  void AnalyticsEvent__ctor_m4166954732 (AnalyticsEvent_t2694241545 * __this, String_t* ___eventName, int32_t ___eventFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Service.CloudEventFlags UnityEngine.Analytics.AnalyticsEvent::get_flags()
extern "C"  int32_t AnalyticsEvent_get_flags_m2999687211 (AnalyticsEvent_t2694241545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsEvent::SetParameter(System.String,System.Object)
extern "C"  void AnalyticsEvent_SetParameter_m4264025646 (AnalyticsEvent_t2694241545 * __this, String_t* ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsEvent::GetParams()
extern "C"  Il2CppObject* AnalyticsEvent_GetParams_m4108645926 (AnalyticsEvent_t2694241545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.AnalyticsEvent::ToStringJSON()
extern "C"  String_t* AnalyticsEvent_ToStringJSON_m2809459314 (AnalyticsEvent_t2694241545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsEvent::get_HighPriority()
extern "C"  bool AnalyticsEvent_get_HighPriority_m1619944576 (AnalyticsEvent_t2694241545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsEvent::get_CacheImmediately()
extern "C"  bool AnalyticsEvent_get_CacheImmediately_m610816310 (AnalyticsEvent_t2694241545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
