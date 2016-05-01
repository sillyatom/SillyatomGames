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
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t1459299685;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SampleClassLibrary.SampleExternalClass
struct  SampleExternalClass_t2965031138  : public Il2CppObject
{
public:
	// System.String SampleClassLibrary.SampleExternalClass::<SampleString>k__BackingField
	String_t* ___U3CSampleStringU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> SampleClassLibrary.SampleExternalClass::<SampleDictionary>k__BackingField
	Dictionary_2_t1459299685 * ___U3CSampleDictionaryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CSampleStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SampleExternalClass_t2965031138, ___U3CSampleStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CSampleStringU3Ek__BackingField_0() const { return ___U3CSampleStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSampleStringU3Ek__BackingField_0() { return &___U3CSampleStringU3Ek__BackingField_0; }
	inline void set_U3CSampleStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CSampleStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSampleStringU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CSampleDictionaryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SampleExternalClass_t2965031138, ___U3CSampleDictionaryU3Ek__BackingField_1)); }
	inline Dictionary_2_t1459299685 * get_U3CSampleDictionaryU3Ek__BackingField_1() const { return ___U3CSampleDictionaryU3Ek__BackingField_1; }
	inline Dictionary_2_t1459299685 ** get_address_of_U3CSampleDictionaryU3Ek__BackingField_1() { return &___U3CSampleDictionaryU3Ek__BackingField_1; }
	inline void set_U3CSampleDictionaryU3Ek__BackingField_1(Dictionary_2_t1459299685 * value)
	{
		___U3CSampleDictionaryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSampleDictionaryU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
