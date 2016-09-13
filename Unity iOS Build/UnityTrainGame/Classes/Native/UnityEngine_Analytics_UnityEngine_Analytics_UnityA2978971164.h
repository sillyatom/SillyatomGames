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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.UnityAnalyticsVersion
struct  UnityAnalyticsVersion_t2978971164  : public Il2CppObject
{
public:

public:
};

struct UnityAnalyticsVersion_t2978971164_StaticFields
{
public:
	// System.String UnityEngine.Analytics.UnityAnalyticsVersion::kSdkVersion
	String_t* ___kSdkVersion_0;

public:
	inline static int32_t get_offset_of_kSdkVersion_0() { return static_cast<int32_t>(offsetof(UnityAnalyticsVersion_t2978971164_StaticFields, ___kSdkVersion_0)); }
	inline String_t* get_kSdkVersion_0() const { return ___kSdkVersion_0; }
	inline String_t** get_address_of_kSdkVersion_0() { return &___kSdkVersion_0; }
	inline void set_kSdkVersion_0(String_t* value)
	{
		___kSdkVersion_0 = value;
		Il2CppCodeGenWriteBarrier(&___kSdkVersion_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
