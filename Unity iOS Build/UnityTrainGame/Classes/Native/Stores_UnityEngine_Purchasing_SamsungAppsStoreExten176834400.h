#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t1906659325;

#include "UnityEngine_UnityEngine_AndroidJavaProxy3337786410.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.SamsungAppsStoreExtensions
struct  SamsungAppsStoreExtensions_t176834400  : public AndroidJavaProxy_t3337786410
{
public:
	// System.Action`1<System.Boolean> UnityEngine.Purchasing.SamsungAppsStoreExtensions::m_RestoreCallback
	Action_1_t359458046 * ___m_RestoreCallback_1;
	// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.SamsungAppsStoreExtensions::m_Java
	AndroidJavaObject_t1906659325 * ___m_Java_2;

public:
	inline static int32_t get_offset_of_m_RestoreCallback_1() { return static_cast<int32_t>(offsetof(SamsungAppsStoreExtensions_t176834400, ___m_RestoreCallback_1)); }
	inline Action_1_t359458046 * get_m_RestoreCallback_1() const { return ___m_RestoreCallback_1; }
	inline Action_1_t359458046 ** get_address_of_m_RestoreCallback_1() { return &___m_RestoreCallback_1; }
	inline void set_m_RestoreCallback_1(Action_1_t359458046 * value)
	{
		___m_RestoreCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_RestoreCallback_1, value);
	}

	inline static int32_t get_offset_of_m_Java_2() { return static_cast<int32_t>(offsetof(SamsungAppsStoreExtensions_t176834400, ___m_Java_2)); }
	inline AndroidJavaObject_t1906659325 * get_m_Java_2() const { return ___m_Java_2; }
	inline AndroidJavaObject_t1906659325 ** get_address_of_m_Java_2() { return &___m_Java_2; }
	inline void set_m_Java_2(AndroidJavaObject_t1906659325 * value)
	{
		___m_Java_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Java_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
