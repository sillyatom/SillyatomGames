#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Card>
struct List_1_t799051817;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Dealer
struct  Dealer_t2043054649  : public ExtMonoBehaviour_t2624599193
{
public:
	// System.Collections.Generic.List`1<Card> Dealer::_cards
	List_1_t799051817 * ____cards_4;
	// UnityEngine.RectTransform Dealer::rectTransform
	RectTransform_t3317474837 * ___rectTransform_5;
	// System.Int32 Dealer::_minNumOfCardsReqToMatch
	int32_t ____minNumOfCardsReqToMatch_6;
	// System.Collections.Generic.List`1<Card> Dealer::<Cards>k__BackingField
	List_1_t799051817 * ___U3CCardsU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of__cards_4() { return static_cast<int32_t>(offsetof(Dealer_t2043054649, ____cards_4)); }
	inline List_1_t799051817 * get__cards_4() const { return ____cards_4; }
	inline List_1_t799051817 ** get_address_of__cards_4() { return &____cards_4; }
	inline void set__cards_4(List_1_t799051817 * value)
	{
		____cards_4 = value;
		Il2CppCodeGenWriteBarrier(&____cards_4, value);
	}

	inline static int32_t get_offset_of_rectTransform_5() { return static_cast<int32_t>(offsetof(Dealer_t2043054649, ___rectTransform_5)); }
	inline RectTransform_t3317474837 * get_rectTransform_5() const { return ___rectTransform_5; }
	inline RectTransform_t3317474837 ** get_address_of_rectTransform_5() { return &___rectTransform_5; }
	inline void set_rectTransform_5(RectTransform_t3317474837 * value)
	{
		___rectTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_5, value);
	}

	inline static int32_t get_offset_of__minNumOfCardsReqToMatch_6() { return static_cast<int32_t>(offsetof(Dealer_t2043054649, ____minNumOfCardsReqToMatch_6)); }
	inline int32_t get__minNumOfCardsReqToMatch_6() const { return ____minNumOfCardsReqToMatch_6; }
	inline int32_t* get_address_of__minNumOfCardsReqToMatch_6() { return &____minNumOfCardsReqToMatch_6; }
	inline void set__minNumOfCardsReqToMatch_6(int32_t value)
	{
		____minNumOfCardsReqToMatch_6 = value;
	}

	inline static int32_t get_offset_of_U3CCardsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Dealer_t2043054649, ___U3CCardsU3Ek__BackingField_7)); }
	inline List_1_t799051817 * get_U3CCardsU3Ek__BackingField_7() const { return ___U3CCardsU3Ek__BackingField_7; }
	inline List_1_t799051817 ** get_address_of_U3CCardsU3Ek__BackingField_7() { return &___U3CCardsU3Ek__BackingField_7; }
	inline void set_U3CCardsU3Ek__BackingField_7(List_1_t799051817 * value)
	{
		___U3CCardsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCardsU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
