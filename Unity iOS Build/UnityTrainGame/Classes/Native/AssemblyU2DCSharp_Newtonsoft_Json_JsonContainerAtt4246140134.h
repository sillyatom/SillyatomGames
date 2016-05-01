#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Attribute498693649.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonContainerAttribute
struct  JsonContainerAttribute_t4246140134  : public Attribute_t498693649
{
public:
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonContainerAttribute::_isReference
	Nullable_1_t3097043249  ____isReference_0;
	// System.String Newtonsoft.Json.JsonContainerAttribute::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_1;
	// System.String Newtonsoft.Json.JsonContainerAttribute::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_2;
	// System.String Newtonsoft.Json.JsonContainerAttribute::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__isReference_0() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ____isReference_0)); }
	inline Nullable_1_t3097043249  get__isReference_0() const { return ____isReference_0; }
	inline Nullable_1_t3097043249 * get_address_of__isReference_0() { return &____isReference_0; }
	inline void set__isReference_0(Nullable_1_t3097043249  value)
	{
		____isReference_0 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ___U3CIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIdU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ___U3CTitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_2() const { return ___U3CTitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_2() { return &___U3CTitleU3Ek__BackingField_2; }
	inline void set_U3CTitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTitleU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t4246140134, ___U3CDescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_3() const { return ___U3CDescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_3() { return &___U3CDescriptionU3Ek__BackingField_3; }
	inline void set_U3CDescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDescriptionU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
