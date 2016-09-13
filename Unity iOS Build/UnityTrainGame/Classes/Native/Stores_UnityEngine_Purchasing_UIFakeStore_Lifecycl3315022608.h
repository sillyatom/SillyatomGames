#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t437523947;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier
struct  LifecycleNotifier_t3315022608  : public MonoBehaviour_t3012272455
{
public:
	// System.Action UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier::OnDestroyCallback
	Action_t437523947 * ___OnDestroyCallback_2;

public:
	inline static int32_t get_offset_of_OnDestroyCallback_2() { return static_cast<int32_t>(offsetof(LifecycleNotifier_t3315022608, ___OnDestroyCallback_2)); }
	inline Action_t437523947 * get_OnDestroyCallback_2() const { return ___OnDestroyCallback_2; }
	inline Action_t437523947 ** get_address_of_OnDestroyCallback_2() { return &___OnDestroyCallback_2; }
	inline void set_OnDestroyCallback_2(Action_t437523947 * value)
	{
		___OnDestroyCallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnDestroyCallback_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
