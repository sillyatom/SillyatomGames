#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Delegate
struct Delegate_t3660574010;
// EventManager/EventDelegate
struct EventDelegate_t4004424223;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Delegate,EventManager/EventDelegate>
struct  KeyValuePair_2_t2136207661 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Delegate_t3660574010 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	EventDelegate_t4004424223 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2136207661, ___key_0)); }
	inline Delegate_t3660574010 * get_key_0() const { return ___key_0; }
	inline Delegate_t3660574010 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Delegate_t3660574010 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2136207661, ___value_1)); }
	inline EventDelegate_t4004424223 * get_value_1() const { return ___value_1; }
	inline EventDelegate_t4004424223 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(EventDelegate_t4004424223 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
