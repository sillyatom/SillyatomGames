﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateGet>c__AnonStorey20`1<System.Object>
struct  U3CCreateGetU3Ec__AnonStorey20_1_t2920882815  : public Il2CppObject
{
public:
	// System.Reflection.FieldInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateGet>c__AnonStorey20`1::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CCreateGetU3Ec__AnonStorey20_1_t2920882815, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___fieldInfo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
