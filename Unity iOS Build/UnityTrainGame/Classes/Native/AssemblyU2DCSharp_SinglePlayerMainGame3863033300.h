﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_MultiplayerMainGame4046083237.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SinglePlayerMainGame
struct  SinglePlayerMainGame_t3863033300  : public MultiplayerMainGame_t4046083237
{
public:
	// System.Int32 SinglePlayerMainGame::_currentPlayerIndex
	int32_t ____currentPlayerIndex_11;

public:
	inline static int32_t get_offset_of__currentPlayerIndex_11() { return static_cast<int32_t>(offsetof(SinglePlayerMainGame_t3863033300, ____currentPlayerIndex_11)); }
	inline int32_t get__currentPlayerIndex_11() const { return ____currentPlayerIndex_11; }
	inline int32_t* get_address_of__currentPlayerIndex_11() { return &____currentPlayerIndex_11; }
	inline void set__currentPlayerIndex_11(int32_t value)
	{
		____currentPlayerIndex_11 = value;
	}
};

struct SinglePlayerMainGame_t3863033300_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SinglePlayerMainGame::<>f__switch$mapC
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24mapC_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_12() { return static_cast<int32_t>(offsetof(SinglePlayerMainGame_t3863033300_StaticFields, ___U3CU3Ef__switchU24mapC_12)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24mapC_12() const { return ___U3CU3Ef__switchU24mapC_12; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24mapC_12() { return &___U3CU3Ef__switchU24mapC_12; }
	inline void set_U3CU3Ef__switchU24mapC_12(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24mapC_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapC_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
