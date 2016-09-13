#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IUnityCallback
struct IUnityCallback_t1766463400;

#include "UnityEngine_UnityEngine_AndroidJavaProxy3337786410.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.JavaBridge
struct  JavaBridge_t3749267202  : public AndroidJavaProxy_t3337786410
{
public:
	// UnityEngine.Purchasing.IUnityCallback UnityEngine.Purchasing.JavaBridge::forwardTo
	Il2CppObject * ___forwardTo_1;

public:
	inline static int32_t get_offset_of_forwardTo_1() { return static_cast<int32_t>(offsetof(JavaBridge_t3749267202, ___forwardTo_1)); }
	inline Il2CppObject * get_forwardTo_1() const { return ___forwardTo_1; }
	inline Il2CppObject ** get_address_of_forwardTo_1() { return &___forwardTo_1; }
	inline void set_forwardTo_1(Il2CppObject * value)
	{
		___forwardTo_1 = value;
		Il2CppCodeGenWriteBarrier(&___forwardTo_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
