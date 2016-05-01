#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_Attribute498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonConverterAttribute
struct  JsonConverterAttribute_t3372878503  : public Attribute_t498693649
{
public:
	// System.Type Newtonsoft.Json.JsonConverterAttribute::_converterType
	Type_t * ____converterType_0;

public:
	inline static int32_t get_offset_of__converterType_0() { return static_cast<int32_t>(offsetof(JsonConverterAttribute_t3372878503, ____converterType_0)); }
	inline Type_t * get__converterType_0() const { return ____converterType_0; }
	inline Type_t ** get_address_of__converterType_0() { return &____converterType_0; }
	inline void set__converterType_0(Type_t * value)
	{
		____converterType_0 = value;
		Il2CppCodeGenWriteBarrier(&____converterType_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
