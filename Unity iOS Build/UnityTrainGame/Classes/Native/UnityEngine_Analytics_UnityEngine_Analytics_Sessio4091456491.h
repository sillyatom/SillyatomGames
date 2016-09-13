#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Analytics.SessionConfig
struct SessionConfig_t2640461709;
// UnityEngine.Analytics.SessionValues
struct SessionValues_t3171441005;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1632812876;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t2243436510;
// UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t3570230409;
struct CloudServiceConfig_t3570230409_marshaled_pinvoke;
// UnityEngine.Analytics.SessionInfo
struct SessionInfo_t4091457145;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_SessionI80204913.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.SessionImpl
struct  SessionImpl_t4091456491  : public Il2CppObject
{
public:
	// UnityEngine.Analytics.SessionConfig UnityEngine.Analytics.SessionImpl::m_SessionConfig
	SessionConfig_t2640461709 * ___m_SessionConfig_5;
	// UnityEngine.Analytics.SessionValues UnityEngine.Analytics.SessionImpl::m_SessionValues
	SessionValues_t3171441005 * ___m_SessionValues_6;
	// UnityEngine.Analytics.IPlatformWrapper UnityEngine.Analytics.SessionImpl::m_PlatformWrapper
	Il2CppObject * ___m_PlatformWrapper_7;
	// UnityEngine.Analytics.ICloudService UnityEngine.Analytics.SessionImpl::m_CloudService
	Il2CppObject * ___m_CloudService_8;
	// UnityEngine.Cloud.Service.CloudServiceConfig UnityEngine.Analytics.SessionImpl::m_CloudServiceConfig
	CloudServiceConfig_t3570230409 * ___m_CloudServiceConfig_9;
	// UnityEngine.Analytics.SessionInfo UnityEngine.Analytics.SessionImpl::m_SessionInfo
	SessionInfo_t4091457145 * ___m_SessionInfo_10;
	// System.String UnityEngine.Analytics.SessionImpl::m_UserId
	String_t* ___m_UserId_11;
	// System.String UnityEngine.Analytics.SessionImpl::m_AppId
	String_t* ___m_AppId_12;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_SessionStartTime
	int64_t ___m_SessionStartTime_13;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_SessionPauseTime
	int64_t ___m_SessionPauseTime_14;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_AppRunningSentTime
	int64_t ___m_AppRunningSentTime_15;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_AppSessionDuration
	int64_t ___m_AppSessionDuration_16;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_KeyStrokes
	int64_t ___m_KeyStrokes_17;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_ClickCount
	int64_t ___m_ClickCount_18;
	// UnityEngine.Analytics.SessionImpl/State UnityEngine.Analytics.SessionImpl::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_m_SessionConfig_5() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_SessionConfig_5)); }
	inline SessionConfig_t2640461709 * get_m_SessionConfig_5() const { return ___m_SessionConfig_5; }
	inline SessionConfig_t2640461709 ** get_address_of_m_SessionConfig_5() { return &___m_SessionConfig_5; }
	inline void set_m_SessionConfig_5(SessionConfig_t2640461709 * value)
	{
		___m_SessionConfig_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_SessionConfig_5, value);
	}

	inline static int32_t get_offset_of_m_SessionValues_6() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_SessionValues_6)); }
	inline SessionValues_t3171441005 * get_m_SessionValues_6() const { return ___m_SessionValues_6; }
	inline SessionValues_t3171441005 ** get_address_of_m_SessionValues_6() { return &___m_SessionValues_6; }
	inline void set_m_SessionValues_6(SessionValues_t3171441005 * value)
	{
		___m_SessionValues_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_SessionValues_6, value);
	}

	inline static int32_t get_offset_of_m_PlatformWrapper_7() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_PlatformWrapper_7)); }
	inline Il2CppObject * get_m_PlatformWrapper_7() const { return ___m_PlatformWrapper_7; }
	inline Il2CppObject ** get_address_of_m_PlatformWrapper_7() { return &___m_PlatformWrapper_7; }
	inline void set_m_PlatformWrapper_7(Il2CppObject * value)
	{
		___m_PlatformWrapper_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlatformWrapper_7, value);
	}

	inline static int32_t get_offset_of_m_CloudService_8() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_CloudService_8)); }
	inline Il2CppObject * get_m_CloudService_8() const { return ___m_CloudService_8; }
	inline Il2CppObject ** get_address_of_m_CloudService_8() { return &___m_CloudService_8; }
	inline void set_m_CloudService_8(Il2CppObject * value)
	{
		___m_CloudService_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_CloudService_8, value);
	}

	inline static int32_t get_offset_of_m_CloudServiceConfig_9() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_CloudServiceConfig_9)); }
	inline CloudServiceConfig_t3570230409 * get_m_CloudServiceConfig_9() const { return ___m_CloudServiceConfig_9; }
	inline CloudServiceConfig_t3570230409 ** get_address_of_m_CloudServiceConfig_9() { return &___m_CloudServiceConfig_9; }
	inline void set_m_CloudServiceConfig_9(CloudServiceConfig_t3570230409 * value)
	{
		___m_CloudServiceConfig_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_CloudServiceConfig_9, value);
	}

	inline static int32_t get_offset_of_m_SessionInfo_10() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_SessionInfo_10)); }
	inline SessionInfo_t4091457145 * get_m_SessionInfo_10() const { return ___m_SessionInfo_10; }
	inline SessionInfo_t4091457145 ** get_address_of_m_SessionInfo_10() { return &___m_SessionInfo_10; }
	inline void set_m_SessionInfo_10(SessionInfo_t4091457145 * value)
	{
		___m_SessionInfo_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_SessionInfo_10, value);
	}

	inline static int32_t get_offset_of_m_UserId_11() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_UserId_11)); }
	inline String_t* get_m_UserId_11() const { return ___m_UserId_11; }
	inline String_t** get_address_of_m_UserId_11() { return &___m_UserId_11; }
	inline void set_m_UserId_11(String_t* value)
	{
		___m_UserId_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_UserId_11, value);
	}

	inline static int32_t get_offset_of_m_AppId_12() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_AppId_12)); }
	inline String_t* get_m_AppId_12() const { return ___m_AppId_12; }
	inline String_t** get_address_of_m_AppId_12() { return &___m_AppId_12; }
	inline void set_m_AppId_12(String_t* value)
	{
		___m_AppId_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_AppId_12, value);
	}

	inline static int32_t get_offset_of_m_SessionStartTime_13() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_SessionStartTime_13)); }
	inline int64_t get_m_SessionStartTime_13() const { return ___m_SessionStartTime_13; }
	inline int64_t* get_address_of_m_SessionStartTime_13() { return &___m_SessionStartTime_13; }
	inline void set_m_SessionStartTime_13(int64_t value)
	{
		___m_SessionStartTime_13 = value;
	}

	inline static int32_t get_offset_of_m_SessionPauseTime_14() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_SessionPauseTime_14)); }
	inline int64_t get_m_SessionPauseTime_14() const { return ___m_SessionPauseTime_14; }
	inline int64_t* get_address_of_m_SessionPauseTime_14() { return &___m_SessionPauseTime_14; }
	inline void set_m_SessionPauseTime_14(int64_t value)
	{
		___m_SessionPauseTime_14 = value;
	}

	inline static int32_t get_offset_of_m_AppRunningSentTime_15() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_AppRunningSentTime_15)); }
	inline int64_t get_m_AppRunningSentTime_15() const { return ___m_AppRunningSentTime_15; }
	inline int64_t* get_address_of_m_AppRunningSentTime_15() { return &___m_AppRunningSentTime_15; }
	inline void set_m_AppRunningSentTime_15(int64_t value)
	{
		___m_AppRunningSentTime_15 = value;
	}

	inline static int32_t get_offset_of_m_AppSessionDuration_16() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_AppSessionDuration_16)); }
	inline int64_t get_m_AppSessionDuration_16() const { return ___m_AppSessionDuration_16; }
	inline int64_t* get_address_of_m_AppSessionDuration_16() { return &___m_AppSessionDuration_16; }
	inline void set_m_AppSessionDuration_16(int64_t value)
	{
		___m_AppSessionDuration_16 = value;
	}

	inline static int32_t get_offset_of_m_KeyStrokes_17() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_KeyStrokes_17)); }
	inline int64_t get_m_KeyStrokes_17() const { return ___m_KeyStrokes_17; }
	inline int64_t* get_address_of_m_KeyStrokes_17() { return &___m_KeyStrokes_17; }
	inline void set_m_KeyStrokes_17(int64_t value)
	{
		___m_KeyStrokes_17 = value;
	}

	inline static int32_t get_offset_of_m_ClickCount_18() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___m_ClickCount_18)); }
	inline int64_t get_m_ClickCount_18() const { return ___m_ClickCount_18; }
	inline int64_t* get_address_of_m_ClickCount_18() { return &___m_ClickCount_18; }
	inline void set_m_ClickCount_18(int64_t value)
	{
		___m_ClickCount_18 = value;
	}

	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491, ___U3CstateU3Ek__BackingField_19)); }
	inline int32_t get_U3CstateU3Ek__BackingField_19() const { return ___U3CstateU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CstateU3Ek__BackingField_19() { return &___U3CstateU3Ek__BackingField_19; }
	inline void set_U3CstateU3Ek__BackingField_19(int32_t value)
	{
		___U3CstateU3Ek__BackingField_19 = value;
	}
};

struct SessionImpl_t4091456491_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Analytics.SessionImpl::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Analytics.SessionImpl::<>f__switch$map1
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_20() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491_StaticFields, ___U3CU3Ef__switchU24map0_20)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_20() const { return ___U3CU3Ef__switchU24map0_20; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_20() { return &___U3CU3Ef__switchU24map0_20; }
	inline void set_U3CU3Ef__switchU24map0_20(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_21() { return static_cast<int32_t>(offsetof(SessionImpl_t4091456491_StaticFields, ___U3CU3Ef__switchU24map1_21)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1_21() const { return ___U3CU3Ef__switchU24map1_21; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1_21() { return &___U3CU3Ef__switchU24map1_21; }
	inline void set_U3CU3Ef__switchU24map1_21(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
