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
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>
struct IList_1_t2099170133;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t1524499937;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchemaBuilder
struct  JsonSchemaBuilder_t784386180  : public Il2CppObject
{
public:
	// Newtonsoft.Json.JsonReader Newtonsoft.Json.Schema.JsonSchemaBuilder::_reader
	JsonReader_t1817561742 * ____reader_0;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchemaBuilder::_stack
	Il2CppObject* ____stack_1;
	// Newtonsoft.Json.Schema.JsonSchemaResolver Newtonsoft.Json.Schema.JsonSchemaBuilder::_resolver
	JsonSchemaResolver_t1524499937 * ____resolver_2;
	// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::_currentSchema
	JsonSchema_t4227645115 * ____currentSchema_3;

public:
	inline static int32_t get_offset_of__reader_0() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t784386180, ____reader_0)); }
	inline JsonReader_t1817561742 * get__reader_0() const { return ____reader_0; }
	inline JsonReader_t1817561742 ** get_address_of__reader_0() { return &____reader_0; }
	inline void set__reader_0(JsonReader_t1817561742 * value)
	{
		____reader_0 = value;
		Il2CppCodeGenWriteBarrier(&____reader_0, value);
	}

	inline static int32_t get_offset_of__stack_1() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t784386180, ____stack_1)); }
	inline Il2CppObject* get__stack_1() const { return ____stack_1; }
	inline Il2CppObject** get_address_of__stack_1() { return &____stack_1; }
	inline void set__stack_1(Il2CppObject* value)
	{
		____stack_1 = value;
		Il2CppCodeGenWriteBarrier(&____stack_1, value);
	}

	inline static int32_t get_offset_of__resolver_2() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t784386180, ____resolver_2)); }
	inline JsonSchemaResolver_t1524499937 * get__resolver_2() const { return ____resolver_2; }
	inline JsonSchemaResolver_t1524499937 ** get_address_of__resolver_2() { return &____resolver_2; }
	inline void set__resolver_2(JsonSchemaResolver_t1524499937 * value)
	{
		____resolver_2 = value;
		Il2CppCodeGenWriteBarrier(&____resolver_2, value);
	}

	inline static int32_t get_offset_of__currentSchema_3() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t784386180, ____currentSchema_3)); }
	inline JsonSchema_t4227645115 * get__currentSchema_3() const { return ____currentSchema_3; }
	inline JsonSchema_t4227645115 ** get_address_of__currentSchema_3() { return &____currentSchema_3; }
	inline void set__currentSchema_3(JsonSchema_t4227645115 * value)
	{
		____currentSchema_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentSchema_3, value);
	}
};

struct JsonSchemaBuilder_t784386180_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Newtonsoft.Json.Schema.JsonSchemaBuilder::<>f__switch$map2
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map2_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Newtonsoft.Json.Schema.JsonSchemaBuilder::<>f__switch$map3
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map3_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_4() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t784386180_StaticFields, ___U3CU3Ef__switchU24map2_4)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map2_4() const { return ___U3CU3Ef__switchU24map2_4; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map2_4() { return &___U3CU3Ef__switchU24map2_4; }
	inline void set_U3CU3Ef__switchU24map2_4(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map2_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_5() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t784386180_StaticFields, ___U3CU3Ef__switchU24map3_5)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map3_5() const { return ___U3CU3Ef__switchU24map3_5; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map3_5() { return &___U3CU3Ef__switchU24map3_5; }
	inline void set_U3CU3Ef__switchU24map3_5(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map3_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
