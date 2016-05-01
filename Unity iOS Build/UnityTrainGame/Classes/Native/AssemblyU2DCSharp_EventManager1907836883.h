#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EventManager
struct EventManager_t1907836883;
// System.Collections.Generic.Dictionary`2<System.Type,EventManager/EventDelegate>
struct Dictionary_2_t1822004642;
// System.Collections.Generic.Dictionary`2<System.Delegate,EventManager/EventDelegate>
struct Dictionary_2_t2647676363;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager
struct  EventManager_t1907836883  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,EventManager/EventDelegate> EventManager::delegates
	Dictionary_2_t1822004642 * ___delegates_1;
	// System.Collections.Generic.Dictionary`2<System.Delegate,EventManager/EventDelegate> EventManager::delegateLookup
	Dictionary_2_t2647676363 * ___delegateLookup_2;

public:
	inline static int32_t get_offset_of_delegates_1() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___delegates_1)); }
	inline Dictionary_2_t1822004642 * get_delegates_1() const { return ___delegates_1; }
	inline Dictionary_2_t1822004642 ** get_address_of_delegates_1() { return &___delegates_1; }
	inline void set_delegates_1(Dictionary_2_t1822004642 * value)
	{
		___delegates_1 = value;
		Il2CppCodeGenWriteBarrier(&___delegates_1, value);
	}

	inline static int32_t get_offset_of_delegateLookup_2() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___delegateLookup_2)); }
	inline Dictionary_2_t2647676363 * get_delegateLookup_2() const { return ___delegateLookup_2; }
	inline Dictionary_2_t2647676363 ** get_address_of_delegateLookup_2() { return &___delegateLookup_2; }
	inline void set_delegateLookup_2(Dictionary_2_t2647676363 * value)
	{
		___delegateLookup_2 = value;
		Il2CppCodeGenWriteBarrier(&___delegateLookup_2, value);
	}
};

struct EventManager_t1907836883_StaticFields
{
public:
	// EventManager EventManager::instanceInternal
	EventManager_t1907836883 * ___instanceInternal_0;

public:
	inline static int32_t get_offset_of_instanceInternal_0() { return static_cast<int32_t>(offsetof(EventManager_t1907836883_StaticFields, ___instanceInternal_0)); }
	inline EventManager_t1907836883 * get_instanceInternal_0() const { return ___instanceInternal_0; }
	inline EventManager_t1907836883 ** get_address_of_instanceInternal_0() { return &___instanceInternal_0; }
	inline void set_instanceInternal_0(EventManager_t1907836883 * value)
	{
		___instanceInternal_0 = value;
		Il2CppCodeGenWriteBarrier(&___instanceInternal_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
