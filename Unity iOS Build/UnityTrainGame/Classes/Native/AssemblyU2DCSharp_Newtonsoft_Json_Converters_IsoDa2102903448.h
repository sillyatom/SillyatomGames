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
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Converters_DateT2118356174.h"
#include "mscorlib_System_Globalization_DateTimeStyles3832294611.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.IsoDateTimeConverter
struct  IsoDateTimeConverter_t2102903448  : public DateTimeConverterBase_t2118356174
{
public:
	// System.Globalization.DateTimeStyles Newtonsoft.Json.Converters.IsoDateTimeConverter::_dateTimeStyles
	int32_t ____dateTimeStyles_1;
	// System.String Newtonsoft.Json.Converters.IsoDateTimeConverter::_dateTimeFormat
	String_t* ____dateTimeFormat_2;
	// System.Globalization.CultureInfo Newtonsoft.Json.Converters.IsoDateTimeConverter::_culture
	CultureInfo_t3603717042 * ____culture_3;

public:
	inline static int32_t get_offset_of__dateTimeStyles_1() { return static_cast<int32_t>(offsetof(IsoDateTimeConverter_t2102903448, ____dateTimeStyles_1)); }
	inline int32_t get__dateTimeStyles_1() const { return ____dateTimeStyles_1; }
	inline int32_t* get_address_of__dateTimeStyles_1() { return &____dateTimeStyles_1; }
	inline void set__dateTimeStyles_1(int32_t value)
	{
		____dateTimeStyles_1 = value;
	}

	inline static int32_t get_offset_of__dateTimeFormat_2() { return static_cast<int32_t>(offsetof(IsoDateTimeConverter_t2102903448, ____dateTimeFormat_2)); }
	inline String_t* get__dateTimeFormat_2() const { return ____dateTimeFormat_2; }
	inline String_t** get_address_of__dateTimeFormat_2() { return &____dateTimeFormat_2; }
	inline void set__dateTimeFormat_2(String_t* value)
	{
		____dateTimeFormat_2 = value;
		Il2CppCodeGenWriteBarrier(&____dateTimeFormat_2, value);
	}

	inline static int32_t get_offset_of__culture_3() { return static_cast<int32_t>(offsetof(IsoDateTimeConverter_t2102903448, ____culture_3)); }
	inline CultureInfo_t3603717042 * get__culture_3() const { return ____culture_3; }
	inline CultureInfo_t3603717042 ** get_address_of__culture_3() { return &____culture_3; }
	inline void set__culture_3(CultureInfo_t3603717042 * value)
	{
		____culture_3 = value;
		Il2CppCodeGenWriteBarrier(&____culture_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
