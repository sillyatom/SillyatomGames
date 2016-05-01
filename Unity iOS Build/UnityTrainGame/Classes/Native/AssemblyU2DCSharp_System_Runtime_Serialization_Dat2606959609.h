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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DataContractAttribute
struct  DataContractAttribute_t2606959609  : public Attribute_t498693649
{
public:
	// System.String System.Runtime.Serialization.DataContractAttribute::name
	String_t* ___name_0;
	// System.String System.Runtime.Serialization.DataContractAttribute::ns
	String_t* ___ns_1;
	// System.Boolean System.Runtime.Serialization.DataContractAttribute::<IsReference>k__BackingField
	bool ___U3CIsReferenceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DataContractAttribute_t2606959609, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(DataContractAttribute_t2606959609, ___ns_1)); }
	inline String_t* get_ns_1() const { return ___ns_1; }
	inline String_t** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(String_t* value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier(&___ns_1, value);
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DataContractAttribute_t2606959609, ___U3CIsReferenceU3Ek__BackingField_2)); }
	inline bool get_U3CIsReferenceU3Ek__BackingField_2() const { return ___U3CIsReferenceU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReferenceU3Ek__BackingField_2() { return &___U3CIsReferenceU3Ek__BackingField_2; }
	inline void set_U3CIsReferenceU3Ek__BackingField_2(bool value)
	{
		___U3CIsReferenceU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
