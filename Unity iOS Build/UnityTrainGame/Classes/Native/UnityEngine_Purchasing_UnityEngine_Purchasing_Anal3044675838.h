#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IUnityAnalytics
struct IUnityAnalytics_t4084261585;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AnalyticsReporter
struct  AnalyticsReporter_t3044675838  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.IUnityAnalytics UnityEngine.Purchasing.AnalyticsReporter::m_Analytics
	Il2CppObject * ___m_Analytics_0;

public:
	inline static int32_t get_offset_of_m_Analytics_0() { return static_cast<int32_t>(offsetof(AnalyticsReporter_t3044675838, ___m_Analytics_0)); }
	inline Il2CppObject * get_m_Analytics_0() const { return ___m_Analytics_0; }
	inline Il2CppObject ** get_address_of_m_Analytics_0() { return &___m_Analytics_0; }
	inline void set_m_Analytics_0(Il2CppObject * value)
	{
		___m_Analytics_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Analytics_0, value);
	}
};

struct AnalyticsReporter_t3044675838_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Purchasing.AnalyticsReporter::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_1() { return static_cast<int32_t>(offsetof(AnalyticsReporter_t3044675838_StaticFields, ___U3CU3Ef__switchU24map0_1)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_1() const { return ___U3CU3Ef__switchU24map0_1; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_1() { return &___U3CU3Ef__switchU24map0_1; }
	inline void set_U3CU3Ef__switchU24map0_1(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
