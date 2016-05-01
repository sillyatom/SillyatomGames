#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1994304730;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t1524499937;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema>
struct IList_1_t2721236533;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_UndefinedS576293603.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchemaGenerator
struct  JsonSchemaGenerator_t4182086140  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Schema.JsonSchemaGenerator::_contractResolver
	Il2CppObject * ____contractResolver_0;
	// Newtonsoft.Json.Schema.JsonSchemaResolver Newtonsoft.Json.Schema.JsonSchemaGenerator::_resolver
	JsonSchemaResolver_t1524499937 * ____resolver_1;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema> Newtonsoft.Json.Schema.JsonSchemaGenerator::_stack
	Il2CppObject* ____stack_2;
	// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::_currentSchema
	JsonSchema_t4227645115 * ____currentSchema_3;
	// Newtonsoft.Json.Schema.UndefinedSchemaIdHandling Newtonsoft.Json.Schema.JsonSchemaGenerator::<UndefinedSchemaIdHandling>k__BackingField
	int32_t ___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__contractResolver_0() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t4182086140, ____contractResolver_0)); }
	inline Il2CppObject * get__contractResolver_0() const { return ____contractResolver_0; }
	inline Il2CppObject ** get_address_of__contractResolver_0() { return &____contractResolver_0; }
	inline void set__contractResolver_0(Il2CppObject * value)
	{
		____contractResolver_0 = value;
		Il2CppCodeGenWriteBarrier(&____contractResolver_0, value);
	}

	inline static int32_t get_offset_of__resolver_1() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t4182086140, ____resolver_1)); }
	inline JsonSchemaResolver_t1524499937 * get__resolver_1() const { return ____resolver_1; }
	inline JsonSchemaResolver_t1524499937 ** get_address_of__resolver_1() { return &____resolver_1; }
	inline void set__resolver_1(JsonSchemaResolver_t1524499937 * value)
	{
		____resolver_1 = value;
		Il2CppCodeGenWriteBarrier(&____resolver_1, value);
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t4182086140, ____stack_2)); }
	inline Il2CppObject* get__stack_2() const { return ____stack_2; }
	inline Il2CppObject** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(Il2CppObject* value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier(&____stack_2, value);
	}

	inline static int32_t get_offset_of__currentSchema_3() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t4182086140, ____currentSchema_3)); }
	inline JsonSchema_t4227645115 * get__currentSchema_3() const { return ____currentSchema_3; }
	inline JsonSchema_t4227645115 ** get_address_of__currentSchema_3() { return &____currentSchema_3; }
	inline void set__currentSchema_3(JsonSchema_t4227645115 * value)
	{
		____currentSchema_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentSchema_3, value);
	}

	inline static int32_t get_offset_of_U3CUndefinedSchemaIdHandlingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t4182086140, ___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_4)); }
	inline int32_t get_U3CUndefinedSchemaIdHandlingU3Ek__BackingField_4() const { return ___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CUndefinedSchemaIdHandlingU3Ek__BackingField_4() { return &___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_4; }
	inline void set_U3CUndefinedSchemaIdHandlingU3Ek__BackingField_4(int32_t value)
	{
		___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
