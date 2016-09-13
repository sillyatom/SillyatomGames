#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Analytics.IUnityAnalyticsSession
struct IUnityAnalyticsSession_t1863129905;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.Analytics
struct  Analytics_t2757337499  : public Il2CppObject
{
public:

public:
};

struct Analytics_t2757337499_StaticFields
{
public:
	// UnityEngine.Analytics.IUnityAnalyticsSession UnityEngine.Analytics.Analytics::s_SessionImpl
	Il2CppObject * ___s_SessionImpl_0;

public:
	inline static int32_t get_offset_of_s_SessionImpl_0() { return static_cast<int32_t>(offsetof(Analytics_t2757337499_StaticFields, ___s_SessionImpl_0)); }
	inline Il2CppObject * get_s_SessionImpl_0() const { return ___s_SessionImpl_0; }
	inline Il2CppObject ** get_address_of_s_SessionImpl_0() { return &___s_SessionImpl_0; }
	inline void set_s_SessionImpl_0(Il2CppObject * value)
	{
		___s_SessionImpl_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_SessionImpl_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
