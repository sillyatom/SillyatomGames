#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IList_1_t1001534060;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1848703245;
// System.String
struct String_t;
// System.Func`2<System.String,System.String>
struct Func_2_t917545008;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t160061447;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>,System.Boolean>
struct Func_2_t3164862449;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>,System.String>
struct Func_2_t3922346010;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JTokenType656424096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonValidatingReader/SchemaScope
struct  SchemaScope_t645799187  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonValidatingReader/SchemaScope::_tokenType
	int32_t ____tokenType_0;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.JsonValidatingReader/SchemaScope::_schemas
	Il2CppObject* ____schemas_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> Newtonsoft.Json.JsonValidatingReader/SchemaScope::_requiredProperties
	Dictionary_2_t1848703245 * ____requiredProperties_2;
	// System.String Newtonsoft.Json.JsonValidatingReader/SchemaScope::<CurrentPropertyName>k__BackingField
	String_t* ___U3CCurrentPropertyNameU3Ek__BackingField_3;
	// System.Int32 Newtonsoft.Json.JsonValidatingReader/SchemaScope::<ArrayItemCount>k__BackingField
	int32_t ___U3CArrayItemCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(SchemaScope_t645799187, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__schemas_1() { return static_cast<int32_t>(offsetof(SchemaScope_t645799187, ____schemas_1)); }
	inline Il2CppObject* get__schemas_1() const { return ____schemas_1; }
	inline Il2CppObject** get_address_of__schemas_1() { return &____schemas_1; }
	inline void set__schemas_1(Il2CppObject* value)
	{
		____schemas_1 = value;
		Il2CppCodeGenWriteBarrier(&____schemas_1, value);
	}

	inline static int32_t get_offset_of__requiredProperties_2() { return static_cast<int32_t>(offsetof(SchemaScope_t645799187, ____requiredProperties_2)); }
	inline Dictionary_2_t1848703245 * get__requiredProperties_2() const { return ____requiredProperties_2; }
	inline Dictionary_2_t1848703245 ** get_address_of__requiredProperties_2() { return &____requiredProperties_2; }
	inline void set__requiredProperties_2(Dictionary_2_t1848703245 * value)
	{
		____requiredProperties_2 = value;
		Il2CppCodeGenWriteBarrier(&____requiredProperties_2, value);
	}

	inline static int32_t get_offset_of_U3CCurrentPropertyNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SchemaScope_t645799187, ___U3CCurrentPropertyNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CCurrentPropertyNameU3Ek__BackingField_3() const { return ___U3CCurrentPropertyNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CCurrentPropertyNameU3Ek__BackingField_3() { return &___U3CCurrentPropertyNameU3Ek__BackingField_3; }
	inline void set_U3CCurrentPropertyNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CCurrentPropertyNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentPropertyNameU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CArrayItemCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SchemaScope_t645799187, ___U3CArrayItemCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CArrayItemCountU3Ek__BackingField_4() const { return ___U3CArrayItemCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CArrayItemCountU3Ek__BackingField_4() { return &___U3CArrayItemCountU3Ek__BackingField_4; }
	inline void set_U3CArrayItemCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CArrayItemCountU3Ek__BackingField_4 = value;
	}
};

struct SchemaScope_t645799187_StaticFields
{
public:
	// System.Func`2<System.String,System.String> Newtonsoft.Json.JsonValidatingReader/SchemaScope::<>f__am$cache5
	Func_2_t917545008 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`2<System.String,System.Boolean> Newtonsoft.Json.JsonValidatingReader/SchemaScope::<>f__am$cache6
	Func_2_t160061447 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>,System.Boolean> Newtonsoft.Json.JsonValidatingReader/SchemaScope::<>f__am$cache7
	Func_2_t3164862449 * ___U3CU3Ef__amU24cache7_7;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>,System.String> Newtonsoft.Json.JsonValidatingReader/SchemaScope::<>f__am$cache8
	Func_2_t3922346010 * ___U3CU3Ef__amU24cache8_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(SchemaScope_t645799187_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t917545008 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t917545008 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t917545008 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(SchemaScope_t645799187_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Func_2_t160061447 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Func_2_t160061447 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Func_2_t160061447 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(SchemaScope_t645799187_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Func_2_t3164862449 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Func_2_t3164862449 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Func_2_t3164862449 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_8() { return static_cast<int32_t>(offsetof(SchemaScope_t645799187_StaticFields, ___U3CU3Ef__amU24cache8_8)); }
	inline Func_2_t3922346010 * get_U3CU3Ef__amU24cache8_8() const { return ___U3CU3Ef__amU24cache8_8; }
	inline Func_2_t3922346010 ** get_address_of_U3CU3Ef__amU24cache8_8() { return &___U3CU3Ef__amU24cache8_8; }
	inline void set_U3CU3Ef__amU24cache8_8(Func_2_t3922346010 * value)
	{
		___U3CU3Ef__amU24cache8_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
