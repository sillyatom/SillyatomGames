#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_t1403680037;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JTokenType>
struct List_1_t1453383065;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter_State80204913.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Formatting1733320232.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonWriter
struct  JsonWriter_t1972966974  : public Il2CppObject
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter::_top
	int32_t ____top_1;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JTokenType> Newtonsoft.Json.JsonWriter::_stack
	List_1_t1453383065 * ____stack_2;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_4;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__top_1() { return static_cast<int32_t>(offsetof(JsonWriter_t1972966974, ____top_1)); }
	inline int32_t get__top_1() const { return ____top_1; }
	inline int32_t* get_address_of__top_1() { return &____top_1; }
	inline void set__top_1(int32_t value)
	{
		____top_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t1972966974, ____stack_2)); }
	inline List_1_t1453383065 * get__stack_2() const { return ____stack_2; }
	inline List_1_t1453383065 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t1453383065 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier(&____stack_2, value);
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonWriter_t1972966974, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__formatting_4() { return static_cast<int32_t>(offsetof(JsonWriter_t1972966974, ____formatting_4)); }
	inline int32_t get__formatting_4() const { return ____formatting_4; }
	inline int32_t* get_address_of__formatting_4() { return &____formatting_4; }
	inline void set__formatting_4(int32_t value)
	{
		____formatting_4 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JsonWriter_t1972966974, ___U3CCloseOutputU3Ek__BackingField_5)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_5() const { return ___U3CCloseOutputU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_5() { return &___U3CCloseOutputU3Ek__BackingField_5; }
	inline void set_U3CCloseOutputU3Ek__BackingField_5(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_5 = value;
	}
};

struct JsonWriter_t1972966974_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::stateArray
	StateU5BU5DU5BU5D_t1403680037* ___stateArray_0;

public:
	inline static int32_t get_offset_of_stateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_t1972966974_StaticFields, ___stateArray_0)); }
	inline StateU5BU5DU5BU5D_t1403680037* get_stateArray_0() const { return ___stateArray_0; }
	inline StateU5BU5DU5BU5D_t1403680037** get_address_of_stateArray_0() { return &___stateArray_0; }
	inline void set_stateArray_0(StateU5BU5DU5BU5D_t1403680037* value)
	{
		___stateArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___stateArray_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
