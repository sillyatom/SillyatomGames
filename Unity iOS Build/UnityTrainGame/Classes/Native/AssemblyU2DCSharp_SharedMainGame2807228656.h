﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SharedMainGame
struct  SharedMainGame_t2807228656  : public ExtMonoBehaviour_t2624599193
{
public:
	// UnityEngine.GameObject SharedMainGame::hud
	GameObject_t4012695102 * ___hud_3;

public:
	inline static int32_t get_offset_of_hud_3() { return static_cast<int32_t>(offsetof(SharedMainGame_t2807228656, ___hud_3)); }
	inline GameObject_t4012695102 * get_hud_3() const { return ___hud_3; }
	inline GameObject_t4012695102 ** get_address_of_hud_3() { return &___hud_3; }
	inline void set_hud_3(GameObject_t4012695102 * value)
	{
		___hud_3 = value;
		Il2CppCodeGenWriteBarrier(&___hud_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
