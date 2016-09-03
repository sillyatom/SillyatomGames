#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Train
struct  Train_t81068520  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Train::compartments
	List_1_t514686775 * ___compartments_2;

public:
	inline static int32_t get_offset_of_compartments_2() { return static_cast<int32_t>(offsetof(Train_t81068520, ___compartments_2)); }
	inline List_1_t514686775 * get_compartments_2() const { return ___compartments_2; }
	inline List_1_t514686775 ** get_address_of_compartments_2() { return &___compartments_2; }
	inline void set_compartments_2(List_1_t514686775 * value)
	{
		___compartments_2 = value;
		Il2CppCodeGenWriteBarrier(&___compartments_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
