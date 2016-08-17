#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateMethodCall>c__AnonStorey24`1<System.Object>
struct  U3CCreateMethodCallU3Ec__AnonStorey24_1_t1024574132  : public Il2CppObject
{
public:
	// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateMethodCall>c__AnonStorey24`1::c
	ConstructorInfo_t3542137334 * ___c_0;
	// System.Reflection.MethodBase Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<CreateMethodCall>c__AnonStorey24`1::method
	MethodBase_t3461000640 * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CCreateMethodCallU3Ec__AnonStorey24_1_t1024574132, ___c_0)); }
	inline ConstructorInfo_t3542137334 * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t3542137334 ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t3542137334 * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier(&___c_0, value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CCreateMethodCallU3Ec__AnonStorey24_1_t1024574132, ___method_1)); }
	inline MethodBase_t3461000640 * get_method_1() const { return ___method_1; }
	inline MethodBase_t3461000640 ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t3461000640 * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier(&___method_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
