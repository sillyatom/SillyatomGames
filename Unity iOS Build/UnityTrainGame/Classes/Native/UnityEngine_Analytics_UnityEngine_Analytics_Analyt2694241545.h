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
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudEventFl1045909065.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEvent
struct  AnalyticsEvent_t2694241545  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsEvent::m_Parameters
	Dictionary_2_t2474804324 * ___m_Parameters_11;
	// UnityEngine.Cloud.Service.CloudEventFlags UnityEngine.Analytics.AnalyticsEvent::m_Flags
	int32_t ___m_Flags_12;

public:
	inline static int32_t get_offset_of_m_Parameters_11() { return static_cast<int32_t>(offsetof(AnalyticsEvent_t2694241545, ___m_Parameters_11)); }
	inline Dictionary_2_t2474804324 * get_m_Parameters_11() const { return ___m_Parameters_11; }
	inline Dictionary_2_t2474804324 ** get_address_of_m_Parameters_11() { return &___m_Parameters_11; }
	inline void set_m_Parameters_11(Dictionary_2_t2474804324 * value)
	{
		___m_Parameters_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Parameters_11, value);
	}

	inline static int32_t get_offset_of_m_Flags_12() { return static_cast<int32_t>(offsetof(AnalyticsEvent_t2694241545, ___m_Flags_12)); }
	inline int32_t get_m_Flags_12() const { return ___m_Flags_12; }
	inline int32_t* get_address_of_m_Flags_12() { return &___m_Flags_12; }
	inline void set_m_Flags_12(int32_t value)
	{
		___m_Flags_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
