﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>
struct Action_2_t3870962322;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UIFakeStore/<StartUI>c__AnonStorey0`1<UnityEngine.Purchasing.InitializationFailureReason>
struct  U3CStartUIU3Ec__AnonStorey0_1_t1393918456  : public Il2CppObject
{
public:
	// System.Action`2<System.Boolean,T> UnityEngine.Purchasing.UIFakeStore/<StartUI>c__AnonStorey0`1::callback
	Action_2_t3870962322 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CStartUIU3Ec__AnonStorey0_1_t1393918456, ___callback_0)); }
	inline Action_2_t3870962322 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t3870962322 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t3870962322 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
