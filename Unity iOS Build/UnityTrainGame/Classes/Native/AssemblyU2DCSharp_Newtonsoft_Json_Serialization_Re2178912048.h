#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.ReflectionValueProvider
struct  ReflectionValueProvider_t2178912048  : public Il2CppObject
{
public:
	// System.Reflection.MemberInfo Newtonsoft.Json.Serialization.ReflectionValueProvider::_memberInfo
	MemberInfo_t * ____memberInfo_0;

public:
	inline static int32_t get_offset_of__memberInfo_0() { return static_cast<int32_t>(offsetof(ReflectionValueProvider_t2178912048, ____memberInfo_0)); }
	inline MemberInfo_t * get__memberInfo_0() const { return ____memberInfo_0; }
	inline MemberInfo_t ** get_address_of__memberInfo_0() { return &____memberInfo_0; }
	inline void set__memberInfo_0(MemberInfo_t * value)
	{
		____memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&____memberInfo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
