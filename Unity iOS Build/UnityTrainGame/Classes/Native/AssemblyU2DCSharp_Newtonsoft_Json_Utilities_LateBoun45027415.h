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
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateDefaultConstructor>c__AnonStorey25`1<System.Object>
struct  U3CCreateDefaultConstructorU3Ec__AnonStorey25_1_t45027415  : public Il2CppObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateDefaultConstructor>c__AnonStorey25`1::type
	Type_t * ___type_0;
	// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateDefaultConstructor>c__AnonStorey25`1::constructorInfo
	ConstructorInfo_t3542137334 * ___constructorInfo_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CCreateDefaultConstructorU3Ec__AnonStorey25_1_t45027415, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_constructorInfo_1() { return static_cast<int32_t>(offsetof(U3CCreateDefaultConstructorU3Ec__AnonStorey25_1_t45027415, ___constructorInfo_1)); }
	inline ConstructorInfo_t3542137334 * get_constructorInfo_1() const { return ___constructorInfo_1; }
	inline ConstructorInfo_t3542137334 ** get_address_of_constructorInfo_1() { return &___constructorInfo_1; }
	inline void set_constructorInfo_1(ConstructorInfo_t3542137334 * value)
	{
		___constructorInfo_1 = value;
		Il2CppCodeGenWriteBarrier(&___constructorInfo_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
