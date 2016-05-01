#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Collections.Generic.Stack`1<Newtonsoft.Json.JsonValidatingReader/SchemaScope>
struct Stack_1_t3216205222;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t3130009042;
// Newtonsoft.Json.JsonValidatingReader/SchemaScope
struct SchemaScope_t645799187;
// Newtonsoft.Json.Schema.ValidationEventHandler
struct ValidationEventHandler_t3025778811;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean>
struct Func_2_t3877326490;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.String>
struct Func_2_t339842755;

#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonValidatingReader
struct  JsonValidatingReader_t1956143809  : public JsonReader_t1817561742
{
public:
	// Newtonsoft.Json.JsonReader Newtonsoft.Json.JsonValidatingReader::_reader
	JsonReader_t1817561742 * ____reader_9;
	// System.Collections.Generic.Stack`1<Newtonsoft.Json.JsonValidatingReader/SchemaScope> Newtonsoft.Json.JsonValidatingReader::_stack
	Stack_1_t3216205222 * ____stack_10;
	// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.JsonValidatingReader::_schema
	JsonSchema_t4227645115 * ____schema_11;
	// Newtonsoft.Json.Schema.JsonSchemaModel Newtonsoft.Json.JsonValidatingReader::_model
	JsonSchemaModel_t3130009042 * ____model_12;
	// Newtonsoft.Json.JsonValidatingReader/SchemaScope Newtonsoft.Json.JsonValidatingReader::_currentScope
	SchemaScope_t645799187 * ____currentScope_13;
	// Newtonsoft.Json.Schema.ValidationEventHandler Newtonsoft.Json.JsonValidatingReader::ValidationEventHandler
	ValidationEventHandler_t3025778811 * ___ValidationEventHandler_14;

public:
	inline static int32_t get_offset_of__reader_9() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t1956143809, ____reader_9)); }
	inline JsonReader_t1817561742 * get__reader_9() const { return ____reader_9; }
	inline JsonReader_t1817561742 ** get_address_of__reader_9() { return &____reader_9; }
	inline void set__reader_9(JsonReader_t1817561742 * value)
	{
		____reader_9 = value;
		Il2CppCodeGenWriteBarrier(&____reader_9, value);
	}

	inline static int32_t get_offset_of__stack_10() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t1956143809, ____stack_10)); }
	inline Stack_1_t3216205222 * get__stack_10() const { return ____stack_10; }
	inline Stack_1_t3216205222 ** get_address_of__stack_10() { return &____stack_10; }
	inline void set__stack_10(Stack_1_t3216205222 * value)
	{
		____stack_10 = value;
		Il2CppCodeGenWriteBarrier(&____stack_10, value);
	}

	inline static int32_t get_offset_of__schema_11() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t1956143809, ____schema_11)); }
	inline JsonSchema_t4227645115 * get__schema_11() const { return ____schema_11; }
	inline JsonSchema_t4227645115 ** get_address_of__schema_11() { return &____schema_11; }
	inline void set__schema_11(JsonSchema_t4227645115 * value)
	{
		____schema_11 = value;
		Il2CppCodeGenWriteBarrier(&____schema_11, value);
	}

	inline static int32_t get_offset_of__model_12() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t1956143809, ____model_12)); }
	inline JsonSchemaModel_t3130009042 * get__model_12() const { return ____model_12; }
	inline JsonSchemaModel_t3130009042 ** get_address_of__model_12() { return &____model_12; }
	inline void set__model_12(JsonSchemaModel_t3130009042 * value)
	{
		____model_12 = value;
		Il2CppCodeGenWriteBarrier(&____model_12, value);
	}

	inline static int32_t get_offset_of__currentScope_13() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t1956143809, ____currentScope_13)); }
	inline SchemaScope_t645799187 * get__currentScope_13() const { return ____currentScope_13; }
	inline SchemaScope_t645799187 ** get_address_of__currentScope_13() { return &____currentScope_13; }
	inline void set__currentScope_13(SchemaScope_t645799187 * value)
	{
		____currentScope_13 = value;
		Il2CppCodeGenWriteBarrier(&____currentScope_13, value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_14() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t1956143809, ___ValidationEventHandler_14)); }
	inline ValidationEventHandler_t3025778811 * get_ValidationEventHandler_14() const { return ___ValidationEventHandler_14; }
	inline ValidationEventHandler_t3025778811 ** get_address_of_ValidationEventHandler_14() { return &___ValidationEventHandler_14; }
	inline void set_ValidationEventHandler_14(ValidationEventHandler_t3025778811 * value)
	{
		___ValidationEventHandler_14 = value;
		Il2CppCodeGenWriteBarrier(&___ValidationEventHandler_14, value);
	}
};

struct JsonValidatingReader_t1956143809_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean> Newtonsoft.Json.JsonValidatingReader::<>f__am$cache6
	Func_2_t3877326490 * ___U3CU3Ef__amU24cache6_15;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.String> Newtonsoft.Json.JsonValidatingReader::<>f__am$cache7
	Func_2_t339842755 * ___U3CU3Ef__amU24cache7_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_15() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t1956143809_StaticFields, ___U3CU3Ef__amU24cache6_15)); }
	inline Func_2_t3877326490 * get_U3CU3Ef__amU24cache6_15() const { return ___U3CU3Ef__amU24cache6_15; }
	inline Func_2_t3877326490 ** get_address_of_U3CU3Ef__amU24cache6_15() { return &___U3CU3Ef__amU24cache6_15; }
	inline void set_U3CU3Ef__amU24cache6_15(Func_2_t3877326490 * value)
	{
		___U3CU3Ef__amU24cache6_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_16() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t1956143809_StaticFields, ___U3CU3Ef__amU24cache7_16)); }
	inline Func_2_t339842755 * get_U3CU3Ef__amU24cache7_16() const { return ___U3CU3Ef__amU24cache7_16; }
	inline Func_2_t339842755 ** get_address_of_U3CU3Ef__amU24cache7_16() { return &___U3CU3Ef__amU24cache7_16; }
	inline void set_U3CU3Ef__amU24cache7_16(Func_2_t339842755 * value)
	{
		___U3CU3Ef__amU24cache7_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
