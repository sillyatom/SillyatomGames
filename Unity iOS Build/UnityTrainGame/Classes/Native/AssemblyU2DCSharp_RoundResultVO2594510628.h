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
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t3403145775;

#include "AssemblyU2DCSharp_HeaderVO3244352038.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoundResultVO
struct  RoundResultVO_t2594510628  : public HeaderVO_t3244352038
{
public:
	// System.String RoundResultVO::<cardValueType>k__BackingField
	String_t* ___U3CcardValueTypeU3Ek__BackingField_4;
	// System.Int32 RoundResultVO::<roundId>k__BackingField
	int32_t ___U3CroundIdU3Ek__BackingField_5;
	// System.Boolean RoundResultVO::<didPullOver>k__BackingField
	bool ___U3CdidPullOverU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> RoundResultVO::<winningCards>k__BackingField
	Dictionary_2_t3403145775 * ___U3CwinningCardsU3Ek__BackingField_7;
	// System.Int32 RoundResultVO::<cardsCount>k__BackingField
	int32_t ___U3CcardsCountU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CcardValueTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RoundResultVO_t2594510628, ___U3CcardValueTypeU3Ek__BackingField_4)); }
	inline String_t* get_U3CcardValueTypeU3Ek__BackingField_4() const { return ___U3CcardValueTypeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CcardValueTypeU3Ek__BackingField_4() { return &___U3CcardValueTypeU3Ek__BackingField_4; }
	inline void set_U3CcardValueTypeU3Ek__BackingField_4(String_t* value)
	{
		___U3CcardValueTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcardValueTypeU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CroundIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RoundResultVO_t2594510628, ___U3CroundIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CroundIdU3Ek__BackingField_5() const { return ___U3CroundIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CroundIdU3Ek__BackingField_5() { return &___U3CroundIdU3Ek__BackingField_5; }
	inline void set_U3CroundIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CroundIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdidPullOverU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RoundResultVO_t2594510628, ___U3CdidPullOverU3Ek__BackingField_6)); }
	inline bool get_U3CdidPullOverU3Ek__BackingField_6() const { return ___U3CdidPullOverU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdidPullOverU3Ek__BackingField_6() { return &___U3CdidPullOverU3Ek__BackingField_6; }
	inline void set_U3CdidPullOverU3Ek__BackingField_6(bool value)
	{
		___U3CdidPullOverU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CwinningCardsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RoundResultVO_t2594510628, ___U3CwinningCardsU3Ek__BackingField_7)); }
	inline Dictionary_2_t3403145775 * get_U3CwinningCardsU3Ek__BackingField_7() const { return ___U3CwinningCardsU3Ek__BackingField_7; }
	inline Dictionary_2_t3403145775 ** get_address_of_U3CwinningCardsU3Ek__BackingField_7() { return &___U3CwinningCardsU3Ek__BackingField_7; }
	inline void set_U3CwinningCardsU3Ek__BackingField_7(Dictionary_2_t3403145775 * value)
	{
		___U3CwinningCardsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwinningCardsU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CcardsCountU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RoundResultVO_t2594510628, ___U3CcardsCountU3Ek__BackingField_8)); }
	inline int32_t get_U3CcardsCountU3Ek__BackingField_8() const { return ___U3CcardsCountU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CcardsCountU3Ek__BackingField_8() { return &___U3CcardsCountU3Ek__BackingField_8; }
	inline void set_U3CcardsCountU3Ek__BackingField_8(int32_t value)
	{
		___U3CcardsCountU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
