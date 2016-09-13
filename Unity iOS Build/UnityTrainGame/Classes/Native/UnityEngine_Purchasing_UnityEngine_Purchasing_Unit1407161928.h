#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnityAnalytics
struct  UnityAnalytics_t1407161928  : public Il2CppObject
{
public:
	// System.Reflection.MethodInfo UnityEngine.Purchasing.UnityAnalytics::analyticsMethod
	MethodInfo_t * ___analyticsMethod_0;

public:
	inline static int32_t get_offset_of_analyticsMethod_0() { return static_cast<int32_t>(offsetof(UnityAnalytics_t1407161928, ___analyticsMethod_0)); }
	inline MethodInfo_t * get_analyticsMethod_0() const { return ___analyticsMethod_0; }
	inline MethodInfo_t ** get_address_of_analyticsMethod_0() { return &___analyticsMethod_0; }
	inline void set_analyticsMethod_0(MethodInfo_t * value)
	{
		___analyticsMethod_0 = value;
		Il2CppCodeGenWriteBarrier(&___analyticsMethod_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
