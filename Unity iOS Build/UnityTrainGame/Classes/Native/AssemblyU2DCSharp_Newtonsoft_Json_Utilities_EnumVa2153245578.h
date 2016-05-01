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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>
struct  EnumValue_1_t2153245578  : public Il2CppObject
{
public:
	// System.String Newtonsoft.Json.Utilities.EnumValue`1::_name
	String_t* ____name_0;
	// T Newtonsoft.Json.Utilities.EnumValue`1::_value
	uint64_t ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(EnumValue_1_t2153245578, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier(&____name_0, value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(EnumValue_1_t2153245578, ____value_1)); }
	inline uint64_t get__value_1() const { return ____value_1; }
	inline uint64_t* get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(uint64_t value)
	{
		____value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
