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
// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t121884815;
// System.Func`2<System.String,System.String>
struct Func_2_t917545008;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js2267638131.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct  JsonDictionaryContract_t128316969  : public JsonContract_t2267638131
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.JsonDictionaryContract::_isDictionaryValueTypeNullableType
	bool ____isDictionaryValueTypeNullableType_12;
	// System.Type Newtonsoft.Json.Serialization.JsonDictionaryContract::_genericCollectionDefinitionType
	Type_t * ____genericCollectionDefinitionType_13;
	// System.Type Newtonsoft.Json.Serialization.JsonDictionaryContract::_genericWrapperType
	Type_t * ____genericWrapperType_14;
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonDictionaryContract::_genericWrapperCreator
	MethodCall_2_t121884815 * ____genericWrapperCreator_15;
	// System.Func`2<System.String,System.String> Newtonsoft.Json.Serialization.JsonDictionaryContract::<PropertyNameResolver>k__BackingField
	Func_2_t917545008 * ___U3CPropertyNameResolverU3Ek__BackingField_16;
	// System.Type Newtonsoft.Json.Serialization.JsonDictionaryContract::<DictionaryKeyType>k__BackingField
	Type_t * ___U3CDictionaryKeyTypeU3Ek__BackingField_17;
	// System.Type Newtonsoft.Json.Serialization.JsonDictionaryContract::<DictionaryValueType>k__BackingField
	Type_t * ___U3CDictionaryValueTypeU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of__isDictionaryValueTypeNullableType_12() { return static_cast<int32_t>(offsetof(JsonDictionaryContract_t128316969, ____isDictionaryValueTypeNullableType_12)); }
	inline bool get__isDictionaryValueTypeNullableType_12() const { return ____isDictionaryValueTypeNullableType_12; }
	inline bool* get_address_of__isDictionaryValueTypeNullableType_12() { return &____isDictionaryValueTypeNullableType_12; }
	inline void set__isDictionaryValueTypeNullableType_12(bool value)
	{
		____isDictionaryValueTypeNullableType_12 = value;
	}

	inline static int32_t get_offset_of__genericCollectionDefinitionType_13() { return static_cast<int32_t>(offsetof(JsonDictionaryContract_t128316969, ____genericCollectionDefinitionType_13)); }
	inline Type_t * get__genericCollectionDefinitionType_13() const { return ____genericCollectionDefinitionType_13; }
	inline Type_t ** get_address_of__genericCollectionDefinitionType_13() { return &____genericCollectionDefinitionType_13; }
	inline void set__genericCollectionDefinitionType_13(Type_t * value)
	{
		____genericCollectionDefinitionType_13 = value;
		Il2CppCodeGenWriteBarrier(&____genericCollectionDefinitionType_13, value);
	}

	inline static int32_t get_offset_of__genericWrapperType_14() { return static_cast<int32_t>(offsetof(JsonDictionaryContract_t128316969, ____genericWrapperType_14)); }
	inline Type_t * get__genericWrapperType_14() const { return ____genericWrapperType_14; }
	inline Type_t ** get_address_of__genericWrapperType_14() { return &____genericWrapperType_14; }
	inline void set__genericWrapperType_14(Type_t * value)
	{
		____genericWrapperType_14 = value;
		Il2CppCodeGenWriteBarrier(&____genericWrapperType_14, value);
	}

	inline static int32_t get_offset_of__genericWrapperCreator_15() { return static_cast<int32_t>(offsetof(JsonDictionaryContract_t128316969, ____genericWrapperCreator_15)); }
	inline MethodCall_2_t121884815 * get__genericWrapperCreator_15() const { return ____genericWrapperCreator_15; }
	inline MethodCall_2_t121884815 ** get_address_of__genericWrapperCreator_15() { return &____genericWrapperCreator_15; }
	inline void set__genericWrapperCreator_15(MethodCall_2_t121884815 * value)
	{
		____genericWrapperCreator_15 = value;
		Il2CppCodeGenWriteBarrier(&____genericWrapperCreator_15, value);
	}

	inline static int32_t get_offset_of_U3CPropertyNameResolverU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonDictionaryContract_t128316969, ___U3CPropertyNameResolverU3Ek__BackingField_16)); }
	inline Func_2_t917545008 * get_U3CPropertyNameResolverU3Ek__BackingField_16() const { return ___U3CPropertyNameResolverU3Ek__BackingField_16; }
	inline Func_2_t917545008 ** get_address_of_U3CPropertyNameResolverU3Ek__BackingField_16() { return &___U3CPropertyNameResolverU3Ek__BackingField_16; }
	inline void set_U3CPropertyNameResolverU3Ek__BackingField_16(Func_2_t917545008 * value)
	{
		___U3CPropertyNameResolverU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPropertyNameResolverU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CDictionaryKeyTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonDictionaryContract_t128316969, ___U3CDictionaryKeyTypeU3Ek__BackingField_17)); }
	inline Type_t * get_U3CDictionaryKeyTypeU3Ek__BackingField_17() const { return ___U3CDictionaryKeyTypeU3Ek__BackingField_17; }
	inline Type_t ** get_address_of_U3CDictionaryKeyTypeU3Ek__BackingField_17() { return &___U3CDictionaryKeyTypeU3Ek__BackingField_17; }
	inline void set_U3CDictionaryKeyTypeU3Ek__BackingField_17(Type_t * value)
	{
		___U3CDictionaryKeyTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDictionaryKeyTypeU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CDictionaryValueTypeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonDictionaryContract_t128316969, ___U3CDictionaryValueTypeU3Ek__BackingField_18)); }
	inline Type_t * get_U3CDictionaryValueTypeU3Ek__BackingField_18() const { return ___U3CDictionaryValueTypeU3Ek__BackingField_18; }
	inline Type_t ** get_address_of_U3CDictionaryValueTypeU3Ek__BackingField_18() { return &___U3CDictionaryValueTypeU3Ek__BackingField_18; }
	inline void set_U3CDictionaryValueTypeU3Ek__BackingField_18(Type_t * value)
	{
		___U3CDictionaryValueTypeU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDictionaryValueTypeU3Ek__BackingField_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
