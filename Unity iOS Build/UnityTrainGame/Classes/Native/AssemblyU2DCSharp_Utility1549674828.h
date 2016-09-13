#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t922188920;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utility
struct  Utility_t1549674828  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct Utility_t1549674828_StaticFields
{
public:
	// System.Random Utility::random
	Random_t922188920 * ___random_2;

public:
	inline static int32_t get_offset_of_random_2() { return static_cast<int32_t>(offsetof(Utility_t1549674828_StaticFields, ___random_2)); }
	inline Random_t922188920 * get_random_2() const { return ___random_2; }
	inline Random_t922188920 ** get_address_of_random_2() { return &___random_2; }
	inline void set_random_2(Random_t922188920 * value)
	{
		___random_2 = value;
		Il2CppCodeGenWriteBarrier(&___random_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
