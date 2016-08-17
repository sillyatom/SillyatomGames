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

// Newtonsoft.Json.Utilities.ReflectionUtils/<GetChildPrivateProperties>c__AnonStorey2B
struct  U3CGetChildPrivatePropertiesU3Ec__AnonStorey2B_t2023321997  : public Il2CppObject
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Utilities.ReflectionUtils/<GetChildPrivateProperties>c__AnonStorey2B::nonPublicProperty
	PropertyInfo_t * ___nonPublicProperty_0;

public:
	inline static int32_t get_offset_of_nonPublicProperty_0() { return static_cast<int32_t>(offsetof(U3CGetChildPrivatePropertiesU3Ec__AnonStorey2B_t2023321997, ___nonPublicProperty_0)); }
	inline PropertyInfo_t * get_nonPublicProperty_0() const { return ___nonPublicProperty_0; }
	inline PropertyInfo_t ** get_address_of_nonPublicProperty_0() { return &___nonPublicProperty_0; }
	inline void set_nonPublicProperty_0(PropertyInfo_t * value)
	{
		___nonPublicProperty_0 = value;
		Il2CppCodeGenWriteBarrier(&___nonPublicProperty_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
