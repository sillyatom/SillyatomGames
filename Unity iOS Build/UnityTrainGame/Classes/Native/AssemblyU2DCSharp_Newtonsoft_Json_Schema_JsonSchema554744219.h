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
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema
struct  TypeSchema_t554744219  : public Il2CppObject
{
public:
	// System.Type Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_0;
	// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema::<Schema>k__BackingField
	JsonSchema_t4227645115 * ___U3CSchemaU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TypeSchema_t554744219, ___U3CTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTypeU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CSchemaU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TypeSchema_t554744219, ___U3CSchemaU3Ek__BackingField_1)); }
	inline JsonSchema_t4227645115 * get_U3CSchemaU3Ek__BackingField_1() const { return ___U3CSchemaU3Ek__BackingField_1; }
	inline JsonSchema_t4227645115 ** get_address_of_U3CSchemaU3Ek__BackingField_1() { return &___U3CSchemaU3Ek__BackingField_1; }
	inline void set_U3CSchemaU3Ek__BackingField_1(JsonSchema_t4227645115 * value)
	{
		___U3CSchemaU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSchemaU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
