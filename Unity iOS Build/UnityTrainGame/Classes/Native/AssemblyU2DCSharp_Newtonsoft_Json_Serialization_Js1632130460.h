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

#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js2267638131.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonArrayContract
struct  JsonArrayContract_t1632130460  : public JsonContract_t2267638131
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::_isCollectionItemTypeNullableType
	bool ____isCollectionItemTypeNullableType_12;
	// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::_genericCollectionDefinitionType
	Type_t * ____genericCollectionDefinitionType_13;
	// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::_genericWrapperType
	Type_t * ____genericWrapperType_14;
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonArrayContract::_genericWrapperCreator
	MethodCall_2_t121884815 * ____genericWrapperCreator_15;
	// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::<CollectionItemType>k__BackingField
	Type_t * ___U3CCollectionItemTypeU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::<IsMultidimensionalArray>k__BackingField
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of__isCollectionItemTypeNullableType_12() { return static_cast<int32_t>(offsetof(JsonArrayContract_t1632130460, ____isCollectionItemTypeNullableType_12)); }
	inline bool get__isCollectionItemTypeNullableType_12() const { return ____isCollectionItemTypeNullableType_12; }
	inline bool* get_address_of__isCollectionItemTypeNullableType_12() { return &____isCollectionItemTypeNullableType_12; }
	inline void set__isCollectionItemTypeNullableType_12(bool value)
	{
		____isCollectionItemTypeNullableType_12 = value;
	}

	inline static int32_t get_offset_of__genericCollectionDefinitionType_13() { return static_cast<int32_t>(offsetof(JsonArrayContract_t1632130460, ____genericCollectionDefinitionType_13)); }
	inline Type_t * get__genericCollectionDefinitionType_13() const { return ____genericCollectionDefinitionType_13; }
	inline Type_t ** get_address_of__genericCollectionDefinitionType_13() { return &____genericCollectionDefinitionType_13; }
	inline void set__genericCollectionDefinitionType_13(Type_t * value)
	{
		____genericCollectionDefinitionType_13 = value;
		Il2CppCodeGenWriteBarrier(&____genericCollectionDefinitionType_13, value);
	}

	inline static int32_t get_offset_of__genericWrapperType_14() { return static_cast<int32_t>(offsetof(JsonArrayContract_t1632130460, ____genericWrapperType_14)); }
	inline Type_t * get__genericWrapperType_14() const { return ____genericWrapperType_14; }
	inline Type_t ** get_address_of__genericWrapperType_14() { return &____genericWrapperType_14; }
	inline void set__genericWrapperType_14(Type_t * value)
	{
		____genericWrapperType_14 = value;
		Il2CppCodeGenWriteBarrier(&____genericWrapperType_14, value);
	}

	inline static int32_t get_offset_of__genericWrapperCreator_15() { return static_cast<int32_t>(offsetof(JsonArrayContract_t1632130460, ____genericWrapperCreator_15)); }
	inline MethodCall_2_t121884815 * get__genericWrapperCreator_15() const { return ____genericWrapperCreator_15; }
	inline MethodCall_2_t121884815 ** get_address_of__genericWrapperCreator_15() { return &____genericWrapperCreator_15; }
	inline void set__genericWrapperCreator_15(MethodCall_2_t121884815 * value)
	{
		____genericWrapperCreator_15 = value;
		Il2CppCodeGenWriteBarrier(&____genericWrapperCreator_15, value);
	}

	inline static int32_t get_offset_of_U3CCollectionItemTypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonArrayContract_t1632130460, ___U3CCollectionItemTypeU3Ek__BackingField_16)); }
	inline Type_t * get_U3CCollectionItemTypeU3Ek__BackingField_16() const { return ___U3CCollectionItemTypeU3Ek__BackingField_16; }
	inline Type_t ** get_address_of_U3CCollectionItemTypeU3Ek__BackingField_16() { return &___U3CCollectionItemTypeU3Ek__BackingField_16; }
	inline void set_U3CCollectionItemTypeU3Ek__BackingField_16(Type_t * value)
	{
		___U3CCollectionItemTypeU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollectionItemTypeU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CIsMultidimensionalArrayU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonArrayContract_t1632130460, ___U3CIsMultidimensionalArrayU3Ek__BackingField_17)); }
	inline bool get_U3CIsMultidimensionalArrayU3Ek__BackingField_17() const { return ___U3CIsMultidimensionalArrayU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CIsMultidimensionalArrayU3Ek__BackingField_17() { return &___U3CIsMultidimensionalArrayU3Ek__BackingField_17; }
	inline void set_U3CIsMultidimensionalArrayU3Ek__BackingField_17(bool value)
	{
		___U3CIsMultidimensionalArrayU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
