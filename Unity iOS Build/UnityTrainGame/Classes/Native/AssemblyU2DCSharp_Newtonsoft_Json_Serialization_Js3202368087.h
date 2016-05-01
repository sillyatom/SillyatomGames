#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonFormatterConverter
struct  JsonFormatterConverter_t3202368087  : public Il2CppObject
{
public:
	// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.Serialization.JsonFormatterConverter::_serializer
	JsonSerializer_t4019458909 * ____serializer_0;

public:
	inline static int32_t get_offset_of__serializer_0() { return static_cast<int32_t>(offsetof(JsonFormatterConverter_t3202368087, ____serializer_0)); }
	inline JsonSerializer_t4019458909 * get__serializer_0() const { return ____serializer_0; }
	inline JsonSerializer_t4019458909 ** get_address_of__serializer_0() { return &____serializer_0; }
	inline void set__serializer_0(JsonSerializer_t4019458909 * value)
	{
		____serializer_0 = value;
		Il2CppCodeGenWriteBarrier(&____serializer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
