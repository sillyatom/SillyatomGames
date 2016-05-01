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

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Guid2778838590.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SampleObject
struct  SampleObject_t145748393  : public Il2CppObject
{
public:
	// System.String SampleObject::<StringProperty>k__BackingField
	String_t* ___U3CStringPropertyU3Ek__BackingField_0;
	// System.Single SampleObject::<FloatProperty>k__BackingField
	float ___U3CFloatPropertyU3Ek__BackingField_1;
	// System.Guid SampleObject::<GuidProperty>k__BackingField
	Guid_t2778838590  ___U3CGuidPropertyU3Ek__BackingField_2;
	// UnityEngine.Vector3 SampleObject::<VectorProperty>k__BackingField
	Vector3_t3525329789  ___U3CVectorPropertyU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CStringPropertyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SampleObject_t145748393, ___U3CStringPropertyU3Ek__BackingField_0)); }
	inline String_t* get_U3CStringPropertyU3Ek__BackingField_0() const { return ___U3CStringPropertyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CStringPropertyU3Ek__BackingField_0() { return &___U3CStringPropertyU3Ek__BackingField_0; }
	inline void set_U3CStringPropertyU3Ek__BackingField_0(String_t* value)
	{
		___U3CStringPropertyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStringPropertyU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CFloatPropertyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SampleObject_t145748393, ___U3CFloatPropertyU3Ek__BackingField_1)); }
	inline float get_U3CFloatPropertyU3Ek__BackingField_1() const { return ___U3CFloatPropertyU3Ek__BackingField_1; }
	inline float* get_address_of_U3CFloatPropertyU3Ek__BackingField_1() { return &___U3CFloatPropertyU3Ek__BackingField_1; }
	inline void set_U3CFloatPropertyU3Ek__BackingField_1(float value)
	{
		___U3CFloatPropertyU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CGuidPropertyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SampleObject_t145748393, ___U3CGuidPropertyU3Ek__BackingField_2)); }
	inline Guid_t2778838590  get_U3CGuidPropertyU3Ek__BackingField_2() const { return ___U3CGuidPropertyU3Ek__BackingField_2; }
	inline Guid_t2778838590 * get_address_of_U3CGuidPropertyU3Ek__BackingField_2() { return &___U3CGuidPropertyU3Ek__BackingField_2; }
	inline void set_U3CGuidPropertyU3Ek__BackingField_2(Guid_t2778838590  value)
	{
		___U3CGuidPropertyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CVectorPropertyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SampleObject_t145748393, ___U3CVectorPropertyU3Ek__BackingField_3)); }
	inline Vector3_t3525329789  get_U3CVectorPropertyU3Ek__BackingField_3() const { return ___U3CVectorPropertyU3Ek__BackingField_3; }
	inline Vector3_t3525329789 * get_address_of_U3CVectorPropertyU3Ek__BackingField_3() { return &___U3CVectorPropertyU3Ek__BackingField_3; }
	inline void set_U3CVectorPropertyU3Ek__BackingField_3(Vector3_t3525329789  value)
	{
		___U3CVectorPropertyU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
