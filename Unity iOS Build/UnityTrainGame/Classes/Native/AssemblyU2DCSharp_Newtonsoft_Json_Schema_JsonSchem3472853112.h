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
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaType>
struct IDictionary_2_t775404416;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchemaConstants
struct  JsonSchemaConstants_t3472853112  : public Il2CppObject
{
public:

public:
};

struct JsonSchemaConstants_t3472853112_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.Schema.JsonSchemaConstants::JsonSchemaTypeMapping
	Il2CppObject* ___JsonSchemaTypeMapping_33;

public:
	inline static int32_t get_offset_of_JsonSchemaTypeMapping_33() { return static_cast<int32_t>(offsetof(JsonSchemaConstants_t3472853112_StaticFields, ___JsonSchemaTypeMapping_33)); }
	inline Il2CppObject* get_JsonSchemaTypeMapping_33() const { return ___JsonSchemaTypeMapping_33; }
	inline Il2CppObject** get_address_of_JsonSchemaTypeMapping_33() { return &___JsonSchemaTypeMapping_33; }
	inline void set_JsonSchemaTypeMapping_33(Il2CppObject* value)
	{
		___JsonSchemaTypeMapping_33 = value;
		Il2CppCodeGenWriteBarrier(&___JsonSchemaTypeMapping_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
