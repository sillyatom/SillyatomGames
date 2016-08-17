#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Type
struct Type_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ConvertUtils/<TryConvertOrCast>c__AnonStorey22
struct  U3CTryConvertOrCastU3Ec__AnonStorey22_t3106773951  : public Il2CppObject
{
public:
	// System.Object Newtonsoft.Json.Utilities.ConvertUtils/<TryConvertOrCast>c__AnonStorey22::initialValue
	Il2CppObject * ___initialValue_0;
	// System.Globalization.CultureInfo Newtonsoft.Json.Utilities.ConvertUtils/<TryConvertOrCast>c__AnonStorey22::culture
	CultureInfo_t3603717042 * ___culture_1;
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils/<TryConvertOrCast>c__AnonStorey22::targetType
	Type_t * ___targetType_2;

public:
	inline static int32_t get_offset_of_initialValue_0() { return static_cast<int32_t>(offsetof(U3CTryConvertOrCastU3Ec__AnonStorey22_t3106773951, ___initialValue_0)); }
	inline Il2CppObject * get_initialValue_0() const { return ___initialValue_0; }
	inline Il2CppObject ** get_address_of_initialValue_0() { return &___initialValue_0; }
	inline void set_initialValue_0(Il2CppObject * value)
	{
		___initialValue_0 = value;
		Il2CppCodeGenWriteBarrier(&___initialValue_0, value);
	}

	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(U3CTryConvertOrCastU3Ec__AnonStorey22_t3106773951, ___culture_1)); }
	inline CultureInfo_t3603717042 * get_culture_1() const { return ___culture_1; }
	inline CultureInfo_t3603717042 ** get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(CultureInfo_t3603717042 * value)
	{
		___culture_1 = value;
		Il2CppCodeGenWriteBarrier(&___culture_1, value);
	}

	inline static int32_t get_offset_of_targetType_2() { return static_cast<int32_t>(offsetof(U3CTryConvertOrCastU3Ec__AnonStorey22_t3106773951, ___targetType_2)); }
	inline Type_t * get_targetType_2() const { return ___targetType_2; }
	inline Type_t ** get_address_of_targetType_2() { return &___targetType_2; }
	inline void set_targetType_2(Type_t * value)
	{
		___targetType_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetType_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
