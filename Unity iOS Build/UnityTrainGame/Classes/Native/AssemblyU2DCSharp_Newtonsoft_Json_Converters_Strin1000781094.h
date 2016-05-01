#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct Dictionary_2_t536124312;
// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>
struct Func_2_t3152609004;

#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonConverter757201947.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.StringEnumConverter
struct  StringEnumConverter_t1000781094  : public JsonConverter_t757201947
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>> Newtonsoft.Json.Converters.StringEnumConverter::_enumMemberNamesPerType
	Dictionary_2_t536124312 * ____enumMemberNamesPerType_0;
	// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::<CamelCaseText>k__BackingField
	bool ___U3CCamelCaseTextU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__enumMemberNamesPerType_0() { return static_cast<int32_t>(offsetof(StringEnumConverter_t1000781094, ____enumMemberNamesPerType_0)); }
	inline Dictionary_2_t536124312 * get__enumMemberNamesPerType_0() const { return ____enumMemberNamesPerType_0; }
	inline Dictionary_2_t536124312 ** get_address_of__enumMemberNamesPerType_0() { return &____enumMemberNamesPerType_0; }
	inline void set__enumMemberNamesPerType_0(Dictionary_2_t536124312 * value)
	{
		____enumMemberNamesPerType_0 = value;
		Il2CppCodeGenWriteBarrier(&____enumMemberNamesPerType_0, value);
	}

	inline static int32_t get_offset_of_U3CCamelCaseTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StringEnumConverter_t1000781094, ___U3CCamelCaseTextU3Ek__BackingField_1)); }
	inline bool get_U3CCamelCaseTextU3Ek__BackingField_1() const { return ___U3CCamelCaseTextU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CCamelCaseTextU3Ek__BackingField_1() { return &___U3CCamelCaseTextU3Ek__BackingField_1; }
	inline void set_U3CCamelCaseTextU3Ek__BackingField_1(bool value)
	{
		___U3CCamelCaseTextU3Ek__BackingField_1 = value;
	}
};

struct StringEnumConverter_t1000781094_StaticFields
{
public:
	// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String> Newtonsoft.Json.Converters.StringEnumConverter::<>f__am$cache2
	Func_2_t3152609004 * ___U3CU3Ef__amU24cache2_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(StringEnumConverter_t1000781094_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_2_t3152609004 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_2_t3152609004 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_2_t3152609004 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
