#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_HeaderVO3244352038.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoundVO
struct  RoundVO_t3050121383  : public HeaderVO_t3244352038
{
public:
	// System.Int32 RoundVO::<roundId>k__BackingField
	int32_t ___U3CroundIdU3Ek__BackingField_4;
	// System.String RoundVO::<playerIdForRound>k__BackingField
	String_t* ___U3CplayerIdForRoundU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CroundIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RoundVO_t3050121383, ___U3CroundIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CroundIdU3Ek__BackingField_4() const { return ___U3CroundIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CroundIdU3Ek__BackingField_4() { return &___U3CroundIdU3Ek__BackingField_4; }
	inline void set_U3CroundIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CroundIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CplayerIdForRoundU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RoundVO_t3050121383, ___U3CplayerIdForRoundU3Ek__BackingField_5)); }
	inline String_t* get_U3CplayerIdForRoundU3Ek__BackingField_5() const { return ___U3CplayerIdForRoundU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CplayerIdForRoundU3Ek__BackingField_5() { return &___U3CplayerIdForRoundU3Ek__BackingField_5; }
	inline void set_U3CplayerIdForRoundU3Ek__BackingField_5(String_t* value)
	{
		___U3CplayerIdForRoundU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerIdForRoundU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
