﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t1701062555;

#include "UnityEngine_UnityEngine_AndroidJavaProxy3337786410.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaRunnableProxy
struct  AndroidJavaRunnableProxy_t2376031245  : public AndroidJavaProxy_t3337786410
{
public:
	// UnityEngine.AndroidJavaRunnable UnityEngine.AndroidJavaRunnableProxy::mRunnable
	AndroidJavaRunnable_t1701062555 * ___mRunnable_1;

public:
	inline static int32_t get_offset_of_mRunnable_1() { return static_cast<int32_t>(offsetof(AndroidJavaRunnableProxy_t2376031245, ___mRunnable_1)); }
	inline AndroidJavaRunnable_t1701062555 * get_mRunnable_1() const { return ___mRunnable_1; }
	inline AndroidJavaRunnable_t1701062555 ** get_address_of_mRunnable_1() { return &___mRunnable_1; }
	inline void set_mRunnable_1(AndroidJavaRunnable_t1701062555 * value)
	{
		___mRunnable_1 = value;
		Il2CppCodeGenWriteBarrier(&___mRunnable_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
