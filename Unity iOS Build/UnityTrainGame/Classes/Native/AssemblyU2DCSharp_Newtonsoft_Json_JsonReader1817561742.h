#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JTokenType>
struct List_1_t1453383065;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonToken326031476.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader_State80204913.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JTokenType656424096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonReader
struct  JsonReader_t1817561742  : public Il2CppObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_token
	int32_t ____token_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	Il2CppObject * ____value_1;
	// System.Type Newtonsoft.Json.JsonReader::_valueType
	Type_t * ____valueType_2;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	uint16_t ____quoteChar_3;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonReader::_currentTypeContext
	int32_t ____currentTypeContext_5;
	// System.Int32 Newtonsoft.Json.JsonReader::_top
	int32_t ____top_6;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JTokenType> Newtonsoft.Json.JsonReader::_stack
	List_1_t1453383065 * ____stack_7;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____token_0)); }
	inline int32_t get__token_0() const { return ____token_0; }
	inline int32_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(int32_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____value_1)); }
	inline Il2CppObject * get__value_1() const { return ____value_1; }
	inline Il2CppObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(Il2CppObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier(&____value_1, value);
	}

	inline static int32_t get_offset_of__valueType_2() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____valueType_2)); }
	inline Type_t * get__valueType_2() const { return ____valueType_2; }
	inline Type_t ** get_address_of__valueType_2() { return &____valueType_2; }
	inline void set__valueType_2(Type_t * value)
	{
		____valueType_2 = value;
		Il2CppCodeGenWriteBarrier(&____valueType_2, value);
	}

	inline static int32_t get_offset_of__quoteChar_3() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____quoteChar_3)); }
	inline uint16_t get__quoteChar_3() const { return ____quoteChar_3; }
	inline uint16_t* get_address_of__quoteChar_3() { return &____quoteChar_3; }
	inline void set__quoteChar_3(uint16_t value)
	{
		____quoteChar_3 = value;
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__currentTypeContext_5() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____currentTypeContext_5)); }
	inline int32_t get__currentTypeContext_5() const { return ____currentTypeContext_5; }
	inline int32_t* get_address_of__currentTypeContext_5() { return &____currentTypeContext_5; }
	inline void set__currentTypeContext_5(int32_t value)
	{
		____currentTypeContext_5 = value;
	}

	inline static int32_t get_offset_of__top_6() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____top_6)); }
	inline int32_t get__top_6() const { return ____top_6; }
	inline int32_t* get_address_of__top_6() { return &____top_6; }
	inline void set__top_6(int32_t value)
	{
		____top_6 = value;
	}

	inline static int32_t get_offset_of__stack_7() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____stack_7)); }
	inline List_1_t1453383065 * get__stack_7() const { return ____stack_7; }
	inline List_1_t1453383065 ** get_address_of__stack_7() { return &____stack_7; }
	inline void set__stack_7(List_1_t1453383065 * value)
	{
		____stack_7 = value;
		Il2CppCodeGenWriteBarrier(&____stack_7, value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ___U3CCloseInputU3Ek__BackingField_8)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_8() const { return ___U3CCloseInputU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_8() { return &___U3CCloseInputU3Ek__BackingField_8; }
	inline void set_U3CCloseInputU3Ek__BackingField_8(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
