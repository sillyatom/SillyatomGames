#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Schema.JsonSchemaException
struct JsonSchemaException_t1081788280;

#include "mscorlib_System_EventArgs516466188.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.ValidationEventArgs
struct  ValidationEventArgs_t1948980208  : public EventArgs_t516466188
{
public:
	// Newtonsoft.Json.Schema.JsonSchemaException Newtonsoft.Json.Schema.ValidationEventArgs::_ex
	JsonSchemaException_t1081788280 * ____ex_1;

public:
	inline static int32_t get_offset_of__ex_1() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t1948980208, ____ex_1)); }
	inline JsonSchemaException_t1081788280 * get__ex_1() const { return ____ex_1; }
	inline JsonSchemaException_t1081788280 ** get_address_of__ex_1() { return &____ex_1; }
	inline void set__ex_1(JsonSchemaException_t1081788280 * value)
	{
		____ex_1 = value;
		Il2CppCodeGenWriteBarrier(&____ex_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
