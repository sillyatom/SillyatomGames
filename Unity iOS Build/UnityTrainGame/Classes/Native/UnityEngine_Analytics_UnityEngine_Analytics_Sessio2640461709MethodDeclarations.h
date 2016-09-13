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

// UnityEngine.Analytics.SessionConfig
struct SessionConfig_t2640461709;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1632812876;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// UnityEngine.Analytics.SessionValues
struct SessionValues_t3171441005;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Sessio3171441005.h"

// System.Void UnityEngine.Analytics.SessionConfig::.ctor(UnityEngine.Analytics.IPlatformWrapper,System.String,System.String)
extern "C"  void SessionConfig__ctor_m4251301107 (SessionConfig_t2640461709 * __this, Il2CppObject * ___platformWrapper, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionConfig::get_analyticsEnabled()
extern "C"  bool SessionConfig_get_analyticsEnabled_m4177051233 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionConfig::get_eventsEndPoint()
extern "C"  String_t* SessionConfig_get_eventsEndPoint_m1594392135 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionConfig::get_configEndPoint()
extern "C"  String_t* SessionConfig_get_configEndPoint_m1413366064 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_requestNumberOfEvents()
extern "C"  int32_t SessionConfig_get_requestNumberOfEvents_m449794846 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_archivedSessionExpiryTimeInSec()
extern "C"  int32_t SessionConfig_get_archivedSessionExpiryTimeInSec_m1323515492 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxContinuousRequest()
extern "C"  int32_t SessionConfig_get_maxContinuousRequest_m2403884904 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxContinuousRequestTimeoutInSec()
extern "C"  int32_t SessionConfig_get_maxContinuousRequestTimeoutInSec_m1995362899 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxNumberOfEventInGroup()
extern "C"  int32_t SessionConfig_get_maxNumberOfEventInGroup_m1779588410 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxTimeoutForGrouping()
extern "C"  int32_t SessionConfig_get_maxTimeoutForGrouping_m2621919749 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxNumberOfEventInQueue()
extern "C"  int32_t SessionConfig_get_maxNumberOfEventInQueue_m2141332300 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_resumeTimeoutInMillSeconds()
extern "C"  int32_t SessionConfig_get_resumeTimeoutInMillSeconds_m2892076150 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Analytics.SessionConfig::get_dispatcherWaitTimeInSeconds()
extern "C"  Int32U5BU5D_t1809983122* SessionConfig_get_dispatcherWaitTimeInSeconds_m1078480645 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_customEventMaxEventPerHour()
extern "C"  int32_t SessionConfig_get_customEventMaxEventPerHour_m1982982510 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxAppIdSize()
extern "C"  int32_t SessionConfig_get_maxAppIdSize_m102819813 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxUserIdSize()
extern "C"  int32_t SessionConfig_get_maxUserIdSize_m3195239073 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxCustomEventNameSize()
extern "C"  int32_t SessionConfig_get_maxCustomEventNameSize_m2984292829 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxCurrencySize()
extern "C"  int32_t SessionConfig_get_maxCurrencySize_m1542413804 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxProductIdSize()
extern "C"  int32_t SessionConfig_get_maxProductIdSize_m1603780915 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_customEventMaxNumberOfItems()
extern "C"  int32_t SessionConfig_get_customEventMaxNumberOfItems_m119497947 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_customEventMaxTotalItemsSize()
extern "C"  int32_t SessionConfig_get_customEventMaxTotalItemsSize_m2836252356 (SessionConfig_t2640461709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionConfig::Restore(System.String)
extern "C"  bool SessionConfig_Restore_m4103451439 (SessionConfig_t2640461709 * __this, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreAnalyticsConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreAnalyticsConfig_m3289985868 (SessionConfig_t2640461709 * __this, SessionValues_t3171441005 * ___analyticsVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreEventsConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreEventsConfig_m178075489 (SessionConfig_t2640461709 * __this, SessionValues_t3171441005 * ___eventsVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreCustomEventConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreCustomEventConfig_m3567202889 (SessionConfig_t2640461709 * __this, SessionValues_t3171441005 * ___customEventVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreSessionConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreSessionConfig_m3483537724 (SessionConfig_t2640461709 * __this, SessionValues_t3171441005 * ___sessionVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreGroupingConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreGroupingConfig_m1944902711 (SessionConfig_t2640461709 * __this, SessionValues_t3171441005 * ___groupingVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreLimitsConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreLimitsConfig_m613524226 (SessionConfig_t2640461709 * __this, SessionValues_t3171441005 * ___stringLimitsVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
