#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EventManager/EventDelegate`1<System.Object>
struct EventDelegate_1_t3301404201;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager/<AddListener>c__AnonStorey28`1<System.Object>
struct  U3CAddListenerU3Ec__AnonStorey28_1_t3707719818  : public Il2CppObject
{
public:
	// EventManager/EventDelegate`1<T> EventManager/<AddListener>c__AnonStorey28`1::del
	EventDelegate_1_t3301404201 * ___del_0;

public:
	inline static int32_t get_offset_of_del_0() { return static_cast<int32_t>(offsetof(U3CAddListenerU3Ec__AnonStorey28_1_t3707719818, ___del_0)); }
	inline EventDelegate_1_t3301404201 * get_del_0() const { return ___del_0; }
	inline EventDelegate_1_t3301404201 ** get_address_of_del_0() { return &___del_0; }
	inline void set_del_0(EventDelegate_1_t3301404201 * value)
	{
		___del_0 = value;
		Il2CppCodeGenWriteBarrier(&___del_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
