#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExecutionOrderManager
struct ExecutionOrderManager_t3968579479;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Main
struct  Main_t2390489  : public MonoBehaviour_t3012272455
{
public:
	// ExecutionOrderManager Main::_exec
	ExecutionOrderManager_t3968579479 * ____exec_2;

public:
	inline static int32_t get_offset_of__exec_2() { return static_cast<int32_t>(offsetof(Main_t2390489, ____exec_2)); }
	inline ExecutionOrderManager_t3968579479 * get__exec_2() const { return ____exec_2; }
	inline ExecutionOrderManager_t3968579479 ** get_address_of__exec_2() { return &____exec_2; }
	inline void set__exec_2(ExecutionOrderManager_t3968579479 * value)
	{
		____exec_2 = value;
		Il2CppCodeGenWriteBarrier(&____exec_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
