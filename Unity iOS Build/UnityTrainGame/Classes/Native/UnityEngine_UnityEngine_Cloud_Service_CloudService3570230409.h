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
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cloud.Service.CloudServiceConfig
struct  CloudServiceConfig_t3570230409  : public Il2CppObject
{
public:
	// System.Int32 UnityEngine.Cloud.Service.CloudServiceConfig::m_MaxNumberOfEventInGroup
	int32_t ___m_MaxNumberOfEventInGroup_0;
	// System.Int32 UnityEngine.Cloud.Service.CloudServiceConfig::m_ArchivedSessionExpiryTimeInSec
	int32_t ___m_ArchivedSessionExpiryTimeInSec_1;
	// System.Int32 UnityEngine.Cloud.Service.CloudServiceConfig::m_MaxContinuousRequest
	int32_t ___m_MaxContinuousRequest_2;
	// System.Int32 UnityEngine.Cloud.Service.CloudServiceConfig::m_MaxContinuousRequestTimeoutInSec
	int32_t ___m_MaxContinuousRequestTimeoutInSec_3;
	// System.String UnityEngine.Cloud.Service.CloudServiceConfig::m_SessionHeaderName
	String_t* ___m_SessionHeaderName_4;
	// System.String UnityEngine.Cloud.Service.CloudServiceConfig::m_EventsHeaderName
	String_t* ___m_EventsHeaderName_5;
	// System.String UnityEngine.Cloud.Service.CloudServiceConfig::m_EventsEndPoint
	String_t* ___m_EventsEndPoint_6;
	// System.Int32[] UnityEngine.Cloud.Service.CloudServiceConfig::m_NetworkFailureRetryTimeoutInSec
	Int32U5BU5D_t1809983122* ___m_NetworkFailureRetryTimeoutInSec_7;

public:
	inline static int32_t get_offset_of_m_MaxNumberOfEventInGroup_0() { return static_cast<int32_t>(offsetof(CloudServiceConfig_t3570230409, ___m_MaxNumberOfEventInGroup_0)); }
	inline int32_t get_m_MaxNumberOfEventInGroup_0() const { return ___m_MaxNumberOfEventInGroup_0; }
	inline int32_t* get_address_of_m_MaxNumberOfEventInGroup_0() { return &___m_MaxNumberOfEventInGroup_0; }
	inline void set_m_MaxNumberOfEventInGroup_0(int32_t value)
	{
		___m_MaxNumberOfEventInGroup_0 = value;
	}

	inline static int32_t get_offset_of_m_ArchivedSessionExpiryTimeInSec_1() { return static_cast<int32_t>(offsetof(CloudServiceConfig_t3570230409, ___m_ArchivedSessionExpiryTimeInSec_1)); }
	inline int32_t get_m_ArchivedSessionExpiryTimeInSec_1() const { return ___m_ArchivedSessionExpiryTimeInSec_1; }
	inline int32_t* get_address_of_m_ArchivedSessionExpiryTimeInSec_1() { return &___m_ArchivedSessionExpiryTimeInSec_1; }
	inline void set_m_ArchivedSessionExpiryTimeInSec_1(int32_t value)
	{
		___m_ArchivedSessionExpiryTimeInSec_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxContinuousRequest_2() { return static_cast<int32_t>(offsetof(CloudServiceConfig_t3570230409, ___m_MaxContinuousRequest_2)); }
	inline int32_t get_m_MaxContinuousRequest_2() const { return ___m_MaxContinuousRequest_2; }
	inline int32_t* get_address_of_m_MaxContinuousRequest_2() { return &___m_MaxContinuousRequest_2; }
	inline void set_m_MaxContinuousRequest_2(int32_t value)
	{
		___m_MaxContinuousRequest_2 = value;
	}

	inline static int32_t get_offset_of_m_MaxContinuousRequestTimeoutInSec_3() { return static_cast<int32_t>(offsetof(CloudServiceConfig_t3570230409, ___m_MaxContinuousRequestTimeoutInSec_3)); }
	inline int32_t get_m_MaxContinuousRequestTimeoutInSec_3() const { return ___m_MaxContinuousRequestTimeoutInSec_3; }
	inline int32_t* get_address_of_m_MaxContinuousRequestTimeoutInSec_3() { return &___m_MaxContinuousRequestTimeoutInSec_3; }
	inline void set_m_MaxContinuousRequestTimeoutInSec_3(int32_t value)
	{
		___m_MaxContinuousRequestTimeoutInSec_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionHeaderName_4() { return static_cast<int32_t>(offsetof(CloudServiceConfig_t3570230409, ___m_SessionHeaderName_4)); }
	inline String_t* get_m_SessionHeaderName_4() const { return ___m_SessionHeaderName_4; }
	inline String_t** get_address_of_m_SessionHeaderName_4() { return &___m_SessionHeaderName_4; }
	inline void set_m_SessionHeaderName_4(String_t* value)
	{
		___m_SessionHeaderName_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_SessionHeaderName_4, value);
	}

	inline static int32_t get_offset_of_m_EventsHeaderName_5() { return static_cast<int32_t>(offsetof(CloudServiceConfig_t3570230409, ___m_EventsHeaderName_5)); }
	inline String_t* get_m_EventsHeaderName_5() const { return ___m_EventsHeaderName_5; }
	inline String_t** get_address_of_m_EventsHeaderName_5() { return &___m_EventsHeaderName_5; }
	inline void set_m_EventsHeaderName_5(String_t* value)
	{
		___m_EventsHeaderName_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventsHeaderName_5, value);
	}

	inline static int32_t get_offset_of_m_EventsEndPoint_6() { return static_cast<int32_t>(offsetof(CloudServiceConfig_t3570230409, ___m_EventsEndPoint_6)); }
	inline String_t* get_m_EventsEndPoint_6() const { return ___m_EventsEndPoint_6; }
	inline String_t** get_address_of_m_EventsEndPoint_6() { return &___m_EventsEndPoint_6; }
	inline void set_m_EventsEndPoint_6(String_t* value)
	{
		___m_EventsEndPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventsEndPoint_6, value);
	}

	inline static int32_t get_offset_of_m_NetworkFailureRetryTimeoutInSec_7() { return static_cast<int32_t>(offsetof(CloudServiceConfig_t3570230409, ___m_NetworkFailureRetryTimeoutInSec_7)); }
	inline Int32U5BU5D_t1809983122* get_m_NetworkFailureRetryTimeoutInSec_7() const { return ___m_NetworkFailureRetryTimeoutInSec_7; }
	inline Int32U5BU5D_t1809983122** get_address_of_m_NetworkFailureRetryTimeoutInSec_7() { return &___m_NetworkFailureRetryTimeoutInSec_7; }
	inline void set_m_NetworkFailureRetryTimeoutInSec_7(Int32U5BU5D_t1809983122* value)
	{
		___m_NetworkFailureRetryTimeoutInSec_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_NetworkFailureRetryTimeoutInSec_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t3570230409_marshaled_pinvoke
{
	int32_t ___m_MaxNumberOfEventInGroup_0;
	int32_t ___m_ArchivedSessionExpiryTimeInSec_1;
	int32_t ___m_MaxContinuousRequest_2;
	int32_t ___m_MaxContinuousRequestTimeoutInSec_3;
	char* ___m_SessionHeaderName_4;
	char* ___m_EventsHeaderName_5;
	char* ___m_EventsEndPoint_6;
	int32_t* ___m_NetworkFailureRetryTimeoutInSec_7;
};
// Native definition for marshalling of: UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t3570230409_marshaled_com
{
	int32_t ___m_MaxNumberOfEventInGroup_0;
	int32_t ___m_ArchivedSessionExpiryTimeInSec_1;
	int32_t ___m_MaxContinuousRequest_2;
	int32_t ___m_MaxContinuousRequestTimeoutInSec_3;
	uint16_t* ___m_SessionHeaderName_4;
	uint16_t* ___m_EventsHeaderName_5;
	uint16_t* ___m_EventsEndPoint_6;
	int32_t* ___m_NetworkFailureRetryTimeoutInSec_7;
};
