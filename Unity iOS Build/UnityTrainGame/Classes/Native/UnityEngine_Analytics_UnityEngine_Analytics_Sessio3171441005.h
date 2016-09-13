#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Analytics.ICloudService
struct ICloudService_t2243436510;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Converter`2<System.Int64,System.Int32>
struct Converter_2_t2865958965;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.SessionValues
struct  SessionValues_t3171441005  : public Il2CppObject
{
public:
	// UnityEngine.Analytics.ICloudService UnityEngine.Analytics.SessionValues::m_CloudService
	Il2CppObject * ___m_CloudService_0;
	// System.String UnityEngine.Analytics.SessionValues::m_ValueFileName
	String_t* ___m_ValueFileName_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.SessionValues::m_Values
	Il2CppObject* ___m_Values_2;

public:
	inline static int32_t get_offset_of_m_CloudService_0() { return static_cast<int32_t>(offsetof(SessionValues_t3171441005, ___m_CloudService_0)); }
	inline Il2CppObject * get_m_CloudService_0() const { return ___m_CloudService_0; }
	inline Il2CppObject ** get_address_of_m_CloudService_0() { return &___m_CloudService_0; }
	inline void set_m_CloudService_0(Il2CppObject * value)
	{
		___m_CloudService_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_CloudService_0, value);
	}

	inline static int32_t get_offset_of_m_ValueFileName_1() { return static_cast<int32_t>(offsetof(SessionValues_t3171441005, ___m_ValueFileName_1)); }
	inline String_t* get_m_ValueFileName_1() const { return ___m_ValueFileName_1; }
	inline String_t** get_address_of_m_ValueFileName_1() { return &___m_ValueFileName_1; }
	inline void set_m_ValueFileName_1(String_t* value)
	{
		___m_ValueFileName_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_ValueFileName_1, value);
	}

	inline static int32_t get_offset_of_m_Values_2() { return static_cast<int32_t>(offsetof(SessionValues_t3171441005, ___m_Values_2)); }
	inline Il2CppObject* get_m_Values_2() const { return ___m_Values_2; }
	inline Il2CppObject** get_address_of_m_Values_2() { return &___m_Values_2; }
	inline void set_m_Values_2(Il2CppObject* value)
	{
		___m_Values_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Values_2, value);
	}
};

struct SessionValues_t3171441005_StaticFields
{
public:
	// System.Converter`2<System.Int64,System.Int32> UnityEngine.Analytics.SessionValues::<>f__am$cache3
	Converter_2_t2865958965 * ___U3CU3Ef__amU24cache3_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_3() { return static_cast<int32_t>(offsetof(SessionValues_t3171441005_StaticFields, ___U3CU3Ef__amU24cache3_3)); }
	inline Converter_2_t2865958965 * get_U3CU3Ef__amU24cache3_3() const { return ___U3CU3Ef__amU24cache3_3; }
	inline Converter_2_t2865958965 ** get_address_of_U3CU3Ef__amU24cache3_3() { return &___U3CU3Ef__amU24cache3_3; }
	inline void set_U3CU3Ef__amU24cache3_3(Converter_2_t2865958965 * value)
	{
		___U3CU3Ef__amU24cache3_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
