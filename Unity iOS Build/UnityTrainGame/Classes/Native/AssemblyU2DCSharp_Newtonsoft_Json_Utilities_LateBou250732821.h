#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateGet>c__AnonStorey26`1<System.Object>
struct  U3CCreateGetU3Ec__AnonStorey26_1_t250732821  : public Il2CppObject
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateGet>c__AnonStorey26`1::propertyInfo
	PropertyInfo_t * ___propertyInfo_0;

public:
	inline static int32_t get_offset_of_propertyInfo_0() { return static_cast<int32_t>(offsetof(U3CCreateGetU3Ec__AnonStorey26_1_t250732821, ___propertyInfo_0)); }
	inline PropertyInfo_t * get_propertyInfo_0() const { return ___propertyInfo_0; }
	inline PropertyInfo_t ** get_address_of_propertyInfo_0() { return &___propertyInfo_0; }
	inline void set_propertyInfo_0(PropertyInfo_t * value)
	{
		___propertyInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___propertyInfo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
