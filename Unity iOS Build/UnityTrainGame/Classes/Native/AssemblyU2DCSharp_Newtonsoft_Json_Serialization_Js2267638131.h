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
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Func`1<System.Object>
struct Func_1_t1979887667;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonContract
struct  JsonContract_t2267638131  : public Il2CppObject
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonContract::<UnderlyingType>k__BackingField
	Type_t * ___U3CUnderlyingTypeU3Ek__BackingField_0;
	// System.Type Newtonsoft.Json.Serialization.JsonContract::<CreatedType>k__BackingField
	Type_t * ___U3CCreatedTypeU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonContract::<IsReference>k__BackingField
	Nullable_1_t3097043249  ___U3CIsReferenceU3Ek__BackingField_2;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::<Converter>k__BackingField
	JsonConverter_t757201947 * ___U3CConverterU3Ek__BackingField_3;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::<InternalConverter>k__BackingField
	JsonConverter_t757201947 * ___U3CInternalConverterU3Ek__BackingField_4;
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::<OnDeserialized>k__BackingField
	MethodInfo_t * ___U3COnDeserializedU3Ek__BackingField_5;
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::<OnDeserializing>k__BackingField
	MethodInfo_t * ___U3COnDeserializingU3Ek__BackingField_6;
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::<OnSerialized>k__BackingField
	MethodInfo_t * ___U3COnSerializedU3Ek__BackingField_7;
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::<OnSerializing>k__BackingField
	MethodInfo_t * ___U3COnSerializingU3Ek__BackingField_8;
	// System.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonContract::<DefaultCreator>k__BackingField
	Func_1_t1979887667 * ___U3CDefaultCreatorU3Ek__BackingField_9;
	// System.Boolean Newtonsoft.Json.Serialization.JsonContract::<DefaultCreatorNonPublic>k__BackingField
	bool ___U3CDefaultCreatorNonPublicU3Ek__BackingField_10;
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::<OnError>k__BackingField
	MethodInfo_t * ___U3COnErrorU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CUnderlyingTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CUnderlyingTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CUnderlyingTypeU3Ek__BackingField_0() const { return ___U3CUnderlyingTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CUnderlyingTypeU3Ek__BackingField_0() { return &___U3CUnderlyingTypeU3Ek__BackingField_0; }
	inline void set_U3CUnderlyingTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CUnderlyingTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUnderlyingTypeU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CCreatedTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CCreatedTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CCreatedTypeU3Ek__BackingField_1() const { return ___U3CCreatedTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CCreatedTypeU3Ek__BackingField_1() { return &___U3CCreatedTypeU3Ek__BackingField_1; }
	inline void set_U3CCreatedTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CCreatedTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCreatedTypeU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CIsReferenceU3Ek__BackingField_2)); }
	inline Nullable_1_t3097043249  get_U3CIsReferenceU3Ek__BackingField_2() const { return ___U3CIsReferenceU3Ek__BackingField_2; }
	inline Nullable_1_t3097043249 * get_address_of_U3CIsReferenceU3Ek__BackingField_2() { return &___U3CIsReferenceU3Ek__BackingField_2; }
	inline void set_U3CIsReferenceU3Ek__BackingField_2(Nullable_1_t3097043249  value)
	{
		___U3CIsReferenceU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CConverterU3Ek__BackingField_3)); }
	inline JsonConverter_t757201947 * get_U3CConverterU3Ek__BackingField_3() const { return ___U3CConverterU3Ek__BackingField_3; }
	inline JsonConverter_t757201947 ** get_address_of_U3CConverterU3Ek__BackingField_3() { return &___U3CConverterU3Ek__BackingField_3; }
	inline void set_U3CConverterU3Ek__BackingField_3(JsonConverter_t757201947 * value)
	{
		___U3CConverterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConverterU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CInternalConverterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CInternalConverterU3Ek__BackingField_4)); }
	inline JsonConverter_t757201947 * get_U3CInternalConverterU3Ek__BackingField_4() const { return ___U3CInternalConverterU3Ek__BackingField_4; }
	inline JsonConverter_t757201947 ** get_address_of_U3CInternalConverterU3Ek__BackingField_4() { return &___U3CInternalConverterU3Ek__BackingField_4; }
	inline void set_U3CInternalConverterU3Ek__BackingField_4(JsonConverter_t757201947 * value)
	{
		___U3CInternalConverterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInternalConverterU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3COnDeserializedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3COnDeserializedU3Ek__BackingField_5)); }
	inline MethodInfo_t * get_U3COnDeserializedU3Ek__BackingField_5() const { return ___U3COnDeserializedU3Ek__BackingField_5; }
	inline MethodInfo_t ** get_address_of_U3COnDeserializedU3Ek__BackingField_5() { return &___U3COnDeserializedU3Ek__BackingField_5; }
	inline void set_U3COnDeserializedU3Ek__BackingField_5(MethodInfo_t * value)
	{
		___U3COnDeserializedU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnDeserializedU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3COnDeserializingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3COnDeserializingU3Ek__BackingField_6)); }
	inline MethodInfo_t * get_U3COnDeserializingU3Ek__BackingField_6() const { return ___U3COnDeserializingU3Ek__BackingField_6; }
	inline MethodInfo_t ** get_address_of_U3COnDeserializingU3Ek__BackingField_6() { return &___U3COnDeserializingU3Ek__BackingField_6; }
	inline void set_U3COnDeserializingU3Ek__BackingField_6(MethodInfo_t * value)
	{
		___U3COnDeserializingU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnDeserializingU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3COnSerializedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3COnSerializedU3Ek__BackingField_7)); }
	inline MethodInfo_t * get_U3COnSerializedU3Ek__BackingField_7() const { return ___U3COnSerializedU3Ek__BackingField_7; }
	inline MethodInfo_t ** get_address_of_U3COnSerializedU3Ek__BackingField_7() { return &___U3COnSerializedU3Ek__BackingField_7; }
	inline void set_U3COnSerializedU3Ek__BackingField_7(MethodInfo_t * value)
	{
		___U3COnSerializedU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnSerializedU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3COnSerializingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3COnSerializingU3Ek__BackingField_8)); }
	inline MethodInfo_t * get_U3COnSerializingU3Ek__BackingField_8() const { return ___U3COnSerializingU3Ek__BackingField_8; }
	inline MethodInfo_t ** get_address_of_U3COnSerializingU3Ek__BackingField_8() { return &___U3COnSerializingU3Ek__BackingField_8; }
	inline void set_U3COnSerializingU3Ek__BackingField_8(MethodInfo_t * value)
	{
		___U3COnSerializingU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnSerializingU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CDefaultCreatorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CDefaultCreatorU3Ek__BackingField_9)); }
	inline Func_1_t1979887667 * get_U3CDefaultCreatorU3Ek__BackingField_9() const { return ___U3CDefaultCreatorU3Ek__BackingField_9; }
	inline Func_1_t1979887667 ** get_address_of_U3CDefaultCreatorU3Ek__BackingField_9() { return &___U3CDefaultCreatorU3Ek__BackingField_9; }
	inline void set_U3CDefaultCreatorU3Ek__BackingField_9(Func_1_t1979887667 * value)
	{
		___U3CDefaultCreatorU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDefaultCreatorU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CDefaultCreatorNonPublicU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3CDefaultCreatorNonPublicU3Ek__BackingField_10)); }
	inline bool get_U3CDefaultCreatorNonPublicU3Ek__BackingField_10() const { return ___U3CDefaultCreatorNonPublicU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CDefaultCreatorNonPublicU3Ek__BackingField_10() { return &___U3CDefaultCreatorNonPublicU3Ek__BackingField_10; }
	inline void set_U3CDefaultCreatorNonPublicU3Ek__BackingField_10(bool value)
	{
		___U3CDefaultCreatorNonPublicU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3COnErrorU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonContract_t2267638131, ___U3COnErrorU3Ek__BackingField_11)); }
	inline MethodInfo_t * get_U3COnErrorU3Ek__BackingField_11() const { return ___U3COnErrorU3Ek__BackingField_11; }
	inline MethodInfo_t ** get_address_of_U3COnErrorU3Ek__BackingField_11() { return &___U3COnErrorU3Ek__BackingField_11; }
	inline void set_U3COnErrorU3Ek__BackingField_11(MethodInfo_t * value)
	{
		___U3COnErrorU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnErrorU3Ek__BackingField_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
