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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1632812876;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.SessionConfig
struct  SessionConfig_t2640461709  : public Il2CppObject
{
public:
	// System.Boolean UnityEngine.Analytics.SessionConfig::m_AnalyticsEnabled
	bool ___m_AnalyticsEnabled_30;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Analytics.SessionConfig::m_Supports
	List_1_t1765447871 * ___m_Supports_31;
	// System.String UnityEngine.Analytics.SessionConfig::m_EventsEndPoint
	String_t* ___m_EventsEndPoint_32;
	// System.String UnityEngine.Analytics.SessionConfig::m_ConfigEndPoint
	String_t* ___m_ConfigEndPoint_33;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_RequestNumberOfEvents
	int32_t ___m_RequestNumberOfEvents_34;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxNumberOfEventInGroup
	int32_t ___m_MaxNumberOfEventInGroup_35;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxTimeoutForGrouping
	int32_t ___m_MaxTimeoutForGrouping_36;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxNumberOfEventInQueue
	int32_t ___m_MaxNumberOfEventInQueue_37;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_ArchivedSessionExpiryTimeInSec
	int32_t ___m_ArchivedSessionExpiryTimeInSec_38;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxContinuousRequest
	int32_t ___m_MaxContinuousRequest_39;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxContinuousRequestTimeoutInSec
	int32_t ___m_MaxContinuousRequestTimeoutInSec_40;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_ResumeTimeoutInMillSeconds
	int32_t ___m_ResumeTimeoutInMillSeconds_41;
	// System.Int32[] UnityEngine.Analytics.SessionConfig::m_DispatcherWaitTimeInSeconds
	Int32U5BU5D_t1809983122* ___m_DispatcherWaitTimeInSeconds_42;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxAppIdSize
	int32_t ___m_MaxAppIdSize_43;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxUserIdSize
	int32_t ___m_MaxUserIdSize_44;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxCurrencySize
	int32_t ___m_MaxCurrencySize_45;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxProductIdSize
	int32_t ___m_MaxProductIdSize_46;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxCustomEventNameSize
	int32_t ___m_MaxCustomEventNameSize_47;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_CustomEventMaxEventPerHour
	int32_t ___m_CustomEventMaxEventPerHour_48;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_CustomEventMaxNumberOfItems
	int32_t ___m_CustomEventMaxNumberOfItems_49;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_CustomEventMaxTotalItemsSize
	int32_t ___m_CustomEventMaxTotalItemsSize_50;
	// UnityEngine.Analytics.IPlatformWrapper UnityEngine.Analytics.SessionConfig::m_PlatformWrapper
	Il2CppObject * ___m_PlatformWrapper_51;

public:
	inline static int32_t get_offset_of_m_AnalyticsEnabled_30() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_AnalyticsEnabled_30)); }
	inline bool get_m_AnalyticsEnabled_30() const { return ___m_AnalyticsEnabled_30; }
	inline bool* get_address_of_m_AnalyticsEnabled_30() { return &___m_AnalyticsEnabled_30; }
	inline void set_m_AnalyticsEnabled_30(bool value)
	{
		___m_AnalyticsEnabled_30 = value;
	}

	inline static int32_t get_offset_of_m_Supports_31() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_Supports_31)); }
	inline List_1_t1765447871 * get_m_Supports_31() const { return ___m_Supports_31; }
	inline List_1_t1765447871 ** get_address_of_m_Supports_31() { return &___m_Supports_31; }
	inline void set_m_Supports_31(List_1_t1765447871 * value)
	{
		___m_Supports_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_Supports_31, value);
	}

	inline static int32_t get_offset_of_m_EventsEndPoint_32() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_EventsEndPoint_32)); }
	inline String_t* get_m_EventsEndPoint_32() const { return ___m_EventsEndPoint_32; }
	inline String_t** get_address_of_m_EventsEndPoint_32() { return &___m_EventsEndPoint_32; }
	inline void set_m_EventsEndPoint_32(String_t* value)
	{
		___m_EventsEndPoint_32 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventsEndPoint_32, value);
	}

	inline static int32_t get_offset_of_m_ConfigEndPoint_33() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_ConfigEndPoint_33)); }
	inline String_t* get_m_ConfigEndPoint_33() const { return ___m_ConfigEndPoint_33; }
	inline String_t** get_address_of_m_ConfigEndPoint_33() { return &___m_ConfigEndPoint_33; }
	inline void set_m_ConfigEndPoint_33(String_t* value)
	{
		___m_ConfigEndPoint_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_ConfigEndPoint_33, value);
	}

	inline static int32_t get_offset_of_m_RequestNumberOfEvents_34() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_RequestNumberOfEvents_34)); }
	inline int32_t get_m_RequestNumberOfEvents_34() const { return ___m_RequestNumberOfEvents_34; }
	inline int32_t* get_address_of_m_RequestNumberOfEvents_34() { return &___m_RequestNumberOfEvents_34; }
	inline void set_m_RequestNumberOfEvents_34(int32_t value)
	{
		___m_RequestNumberOfEvents_34 = value;
	}

	inline static int32_t get_offset_of_m_MaxNumberOfEventInGroup_35() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxNumberOfEventInGroup_35)); }
	inline int32_t get_m_MaxNumberOfEventInGroup_35() const { return ___m_MaxNumberOfEventInGroup_35; }
	inline int32_t* get_address_of_m_MaxNumberOfEventInGroup_35() { return &___m_MaxNumberOfEventInGroup_35; }
	inline void set_m_MaxNumberOfEventInGroup_35(int32_t value)
	{
		___m_MaxNumberOfEventInGroup_35 = value;
	}

	inline static int32_t get_offset_of_m_MaxTimeoutForGrouping_36() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxTimeoutForGrouping_36)); }
	inline int32_t get_m_MaxTimeoutForGrouping_36() const { return ___m_MaxTimeoutForGrouping_36; }
	inline int32_t* get_address_of_m_MaxTimeoutForGrouping_36() { return &___m_MaxTimeoutForGrouping_36; }
	inline void set_m_MaxTimeoutForGrouping_36(int32_t value)
	{
		___m_MaxTimeoutForGrouping_36 = value;
	}

	inline static int32_t get_offset_of_m_MaxNumberOfEventInQueue_37() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxNumberOfEventInQueue_37)); }
	inline int32_t get_m_MaxNumberOfEventInQueue_37() const { return ___m_MaxNumberOfEventInQueue_37; }
	inline int32_t* get_address_of_m_MaxNumberOfEventInQueue_37() { return &___m_MaxNumberOfEventInQueue_37; }
	inline void set_m_MaxNumberOfEventInQueue_37(int32_t value)
	{
		___m_MaxNumberOfEventInQueue_37 = value;
	}

	inline static int32_t get_offset_of_m_ArchivedSessionExpiryTimeInSec_38() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_ArchivedSessionExpiryTimeInSec_38)); }
	inline int32_t get_m_ArchivedSessionExpiryTimeInSec_38() const { return ___m_ArchivedSessionExpiryTimeInSec_38; }
	inline int32_t* get_address_of_m_ArchivedSessionExpiryTimeInSec_38() { return &___m_ArchivedSessionExpiryTimeInSec_38; }
	inline void set_m_ArchivedSessionExpiryTimeInSec_38(int32_t value)
	{
		___m_ArchivedSessionExpiryTimeInSec_38 = value;
	}

	inline static int32_t get_offset_of_m_MaxContinuousRequest_39() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxContinuousRequest_39)); }
	inline int32_t get_m_MaxContinuousRequest_39() const { return ___m_MaxContinuousRequest_39; }
	inline int32_t* get_address_of_m_MaxContinuousRequest_39() { return &___m_MaxContinuousRequest_39; }
	inline void set_m_MaxContinuousRequest_39(int32_t value)
	{
		___m_MaxContinuousRequest_39 = value;
	}

	inline static int32_t get_offset_of_m_MaxContinuousRequestTimeoutInSec_40() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxContinuousRequestTimeoutInSec_40)); }
	inline int32_t get_m_MaxContinuousRequestTimeoutInSec_40() const { return ___m_MaxContinuousRequestTimeoutInSec_40; }
	inline int32_t* get_address_of_m_MaxContinuousRequestTimeoutInSec_40() { return &___m_MaxContinuousRequestTimeoutInSec_40; }
	inline void set_m_MaxContinuousRequestTimeoutInSec_40(int32_t value)
	{
		___m_MaxContinuousRequestTimeoutInSec_40 = value;
	}

	inline static int32_t get_offset_of_m_ResumeTimeoutInMillSeconds_41() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_ResumeTimeoutInMillSeconds_41)); }
	inline int32_t get_m_ResumeTimeoutInMillSeconds_41() const { return ___m_ResumeTimeoutInMillSeconds_41; }
	inline int32_t* get_address_of_m_ResumeTimeoutInMillSeconds_41() { return &___m_ResumeTimeoutInMillSeconds_41; }
	inline void set_m_ResumeTimeoutInMillSeconds_41(int32_t value)
	{
		___m_ResumeTimeoutInMillSeconds_41 = value;
	}

	inline static int32_t get_offset_of_m_DispatcherWaitTimeInSeconds_42() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_DispatcherWaitTimeInSeconds_42)); }
	inline Int32U5BU5D_t1809983122* get_m_DispatcherWaitTimeInSeconds_42() const { return ___m_DispatcherWaitTimeInSeconds_42; }
	inline Int32U5BU5D_t1809983122** get_address_of_m_DispatcherWaitTimeInSeconds_42() { return &___m_DispatcherWaitTimeInSeconds_42; }
	inline void set_m_DispatcherWaitTimeInSeconds_42(Int32U5BU5D_t1809983122* value)
	{
		___m_DispatcherWaitTimeInSeconds_42 = value;
		Il2CppCodeGenWriteBarrier(&___m_DispatcherWaitTimeInSeconds_42, value);
	}

	inline static int32_t get_offset_of_m_MaxAppIdSize_43() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxAppIdSize_43)); }
	inline int32_t get_m_MaxAppIdSize_43() const { return ___m_MaxAppIdSize_43; }
	inline int32_t* get_address_of_m_MaxAppIdSize_43() { return &___m_MaxAppIdSize_43; }
	inline void set_m_MaxAppIdSize_43(int32_t value)
	{
		___m_MaxAppIdSize_43 = value;
	}

	inline static int32_t get_offset_of_m_MaxUserIdSize_44() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxUserIdSize_44)); }
	inline int32_t get_m_MaxUserIdSize_44() const { return ___m_MaxUserIdSize_44; }
	inline int32_t* get_address_of_m_MaxUserIdSize_44() { return &___m_MaxUserIdSize_44; }
	inline void set_m_MaxUserIdSize_44(int32_t value)
	{
		___m_MaxUserIdSize_44 = value;
	}

	inline static int32_t get_offset_of_m_MaxCurrencySize_45() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxCurrencySize_45)); }
	inline int32_t get_m_MaxCurrencySize_45() const { return ___m_MaxCurrencySize_45; }
	inline int32_t* get_address_of_m_MaxCurrencySize_45() { return &___m_MaxCurrencySize_45; }
	inline void set_m_MaxCurrencySize_45(int32_t value)
	{
		___m_MaxCurrencySize_45 = value;
	}

	inline static int32_t get_offset_of_m_MaxProductIdSize_46() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxProductIdSize_46)); }
	inline int32_t get_m_MaxProductIdSize_46() const { return ___m_MaxProductIdSize_46; }
	inline int32_t* get_address_of_m_MaxProductIdSize_46() { return &___m_MaxProductIdSize_46; }
	inline void set_m_MaxProductIdSize_46(int32_t value)
	{
		___m_MaxProductIdSize_46 = value;
	}

	inline static int32_t get_offset_of_m_MaxCustomEventNameSize_47() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_MaxCustomEventNameSize_47)); }
	inline int32_t get_m_MaxCustomEventNameSize_47() const { return ___m_MaxCustomEventNameSize_47; }
	inline int32_t* get_address_of_m_MaxCustomEventNameSize_47() { return &___m_MaxCustomEventNameSize_47; }
	inline void set_m_MaxCustomEventNameSize_47(int32_t value)
	{
		___m_MaxCustomEventNameSize_47 = value;
	}

	inline static int32_t get_offset_of_m_CustomEventMaxEventPerHour_48() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_CustomEventMaxEventPerHour_48)); }
	inline int32_t get_m_CustomEventMaxEventPerHour_48() const { return ___m_CustomEventMaxEventPerHour_48; }
	inline int32_t* get_address_of_m_CustomEventMaxEventPerHour_48() { return &___m_CustomEventMaxEventPerHour_48; }
	inline void set_m_CustomEventMaxEventPerHour_48(int32_t value)
	{
		___m_CustomEventMaxEventPerHour_48 = value;
	}

	inline static int32_t get_offset_of_m_CustomEventMaxNumberOfItems_49() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_CustomEventMaxNumberOfItems_49)); }
	inline int32_t get_m_CustomEventMaxNumberOfItems_49() const { return ___m_CustomEventMaxNumberOfItems_49; }
	inline int32_t* get_address_of_m_CustomEventMaxNumberOfItems_49() { return &___m_CustomEventMaxNumberOfItems_49; }
	inline void set_m_CustomEventMaxNumberOfItems_49(int32_t value)
	{
		___m_CustomEventMaxNumberOfItems_49 = value;
	}

	inline static int32_t get_offset_of_m_CustomEventMaxTotalItemsSize_50() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_CustomEventMaxTotalItemsSize_50)); }
	inline int32_t get_m_CustomEventMaxTotalItemsSize_50() const { return ___m_CustomEventMaxTotalItemsSize_50; }
	inline int32_t* get_address_of_m_CustomEventMaxTotalItemsSize_50() { return &___m_CustomEventMaxTotalItemsSize_50; }
	inline void set_m_CustomEventMaxTotalItemsSize_50(int32_t value)
	{
		___m_CustomEventMaxTotalItemsSize_50 = value;
	}

	inline static int32_t get_offset_of_m_PlatformWrapper_51() { return static_cast<int32_t>(offsetof(SessionConfig_t2640461709, ___m_PlatformWrapper_51)); }
	inline Il2CppObject * get_m_PlatformWrapper_51() const { return ___m_PlatformWrapper_51; }
	inline Il2CppObject ** get_address_of_m_PlatformWrapper_51() { return &___m_PlatformWrapper_51; }
	inline void set_m_PlatformWrapper_51(Il2CppObject * value)
	{
		___m_PlatformWrapper_51 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlatformWrapper_51, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
