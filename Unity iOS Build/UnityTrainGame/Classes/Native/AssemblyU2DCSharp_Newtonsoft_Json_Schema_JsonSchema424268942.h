#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t1524499937;
// System.Func`2<Newtonsoft.Json.Schema.JsonSchemaType,System.Boolean>
struct Func_2_t2657170972;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchemaWriter
struct  JsonSchemaWriter_t424268942  : public Il2CppObject
{
public:
	// Newtonsoft.Json.JsonWriter Newtonsoft.Json.Schema.JsonSchemaWriter::_writer
	JsonWriter_t1972966974 * ____writer_0;
	// Newtonsoft.Json.Schema.JsonSchemaResolver Newtonsoft.Json.Schema.JsonSchemaWriter::_resolver
	JsonSchemaResolver_t1524499937 * ____resolver_1;

public:
	inline static int32_t get_offset_of__writer_0() { return static_cast<int32_t>(offsetof(JsonSchemaWriter_t424268942, ____writer_0)); }
	inline JsonWriter_t1972966974 * get__writer_0() const { return ____writer_0; }
	inline JsonWriter_t1972966974 ** get_address_of__writer_0() { return &____writer_0; }
	inline void set__writer_0(JsonWriter_t1972966974 * value)
	{
		____writer_0 = value;
		Il2CppCodeGenWriteBarrier(&____writer_0, value);
	}

	inline static int32_t get_offset_of__resolver_1() { return static_cast<int32_t>(offsetof(JsonSchemaWriter_t424268942, ____resolver_1)); }
	inline JsonSchemaResolver_t1524499937 * get__resolver_1() const { return ____resolver_1; }
	inline JsonSchemaResolver_t1524499937 ** get_address_of__resolver_1() { return &____resolver_1; }
	inline void set__resolver_1(JsonSchemaResolver_t1524499937 * value)
	{
		____resolver_1 = value;
		Il2CppCodeGenWriteBarrier(&____resolver_1, value);
	}
};

struct JsonSchemaWriter_t424268942_StaticFields
{
public:
	// System.Func`2<Newtonsoft.Json.Schema.JsonSchemaType,System.Boolean> Newtonsoft.Json.Schema.JsonSchemaWriter::<>f__am$cache2
	Func_2_t2657170972 * ___U3CU3Ef__amU24cache2_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(JsonSchemaWriter_t424268942_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_2_t2657170972 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_2_t2657170972 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_2_t2657170972 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
