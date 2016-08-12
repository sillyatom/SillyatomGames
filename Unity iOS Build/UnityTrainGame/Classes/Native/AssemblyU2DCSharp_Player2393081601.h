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
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// System.Collections.Generic.List`1<Card>
struct List_1_t799051817;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// CardSelectionHandler
struct CardSelectionHandler_t2914958190;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4151574589;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public ExtMonoBehaviour_t2624599193
{
public:
	// System.Int32 Player::index
	int32_t ___index_3;
	// System.String Player::playerId
	String_t* ___playerId_4;
	// UnityEngine.UI.Text Player::cardCount
	Text_t3286458198 * ___cardCount_5;
	// UnityEngine.UI.Text Player::playerName
	Text_t3286458198 * ___playerName_6;
	// UnityEngine.UI.Image Player::playerDP
	Image_t3354615620 * ___playerDP_7;
	// UnityEngine.UI.Button Player::pullOverBtn
	Button_t990034267 * ___pullOverBtn_8;
	// UnityEngine.RectTransform Player::cardsHolder
	RectTransform_t3317474837 * ___cardsHolder_9;
	// System.Single Player::_delAngle
	float ____delAngle_10;
	// System.Single Player::_angle
	float ____angle_11;
	// System.Boolean Player::_canDrag
	bool ____canDrag_12;
	// System.Collections.Generic.List`1<Card> Player::_cards
	List_1_t799051817 * ____cards_13;
	// System.Collections.Generic.List`1<System.String> Player::_cardsRewarded
	List_1_t1765447871 * ____cardsRewarded_14;
	// UnityEngine.Vector3 Player::_rotateAround
	Vector3_t3525329789  ____rotateAround_15;
	// UnityEngine.Vector2 Player::_lastMousePosition
	Vector2_t3525329788  ____lastMousePosition_16;
	// CardSelectionHandler Player::_cardSelectionHandler
	CardSelectionHandler_t2914958190 * ____cardSelectionHandler_17;
	// System.Int32 Player::count
	int32_t ___count_18;
	// UnityEngine.UI.Image Player::dimRed
	Image_t3354615620 * ___dimRed_19;
	// UnityEngine.UI.Image Player::dimYellow
	Image_t3354615620 * ___dimYellow_20;
	// UnityEngine.UI.Image Player::dimGreen
	Image_t3354615620 * ___dimGreen_21;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> Player::grayShaderImages
	List_1_t4151574589 * ___grayShaderImages_22;
	// System.Boolean Player::<DidPullOver>k__BackingField
	bool ___U3CDidPullOverU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_playerId_4() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerId_4)); }
	inline String_t* get_playerId_4() const { return ___playerId_4; }
	inline String_t** get_address_of_playerId_4() { return &___playerId_4; }
	inline void set_playerId_4(String_t* value)
	{
		___playerId_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerId_4, value);
	}

	inline static int32_t get_offset_of_cardCount_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___cardCount_5)); }
	inline Text_t3286458198 * get_cardCount_5() const { return ___cardCount_5; }
	inline Text_t3286458198 ** get_address_of_cardCount_5() { return &___cardCount_5; }
	inline void set_cardCount_5(Text_t3286458198 * value)
	{
		___cardCount_5 = value;
		Il2CppCodeGenWriteBarrier(&___cardCount_5, value);
	}

	inline static int32_t get_offset_of_playerName_6() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerName_6)); }
	inline Text_t3286458198 * get_playerName_6() const { return ___playerName_6; }
	inline Text_t3286458198 ** get_address_of_playerName_6() { return &___playerName_6; }
	inline void set_playerName_6(Text_t3286458198 * value)
	{
		___playerName_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_6, value);
	}

	inline static int32_t get_offset_of_playerDP_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerDP_7)); }
	inline Image_t3354615620 * get_playerDP_7() const { return ___playerDP_7; }
	inline Image_t3354615620 ** get_address_of_playerDP_7() { return &___playerDP_7; }
	inline void set_playerDP_7(Image_t3354615620 * value)
	{
		___playerDP_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerDP_7, value);
	}

	inline static int32_t get_offset_of_pullOverBtn_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___pullOverBtn_8)); }
	inline Button_t990034267 * get_pullOverBtn_8() const { return ___pullOverBtn_8; }
	inline Button_t990034267 ** get_address_of_pullOverBtn_8() { return &___pullOverBtn_8; }
	inline void set_pullOverBtn_8(Button_t990034267 * value)
	{
		___pullOverBtn_8 = value;
		Il2CppCodeGenWriteBarrier(&___pullOverBtn_8, value);
	}

	inline static int32_t get_offset_of_cardsHolder_9() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___cardsHolder_9)); }
	inline RectTransform_t3317474837 * get_cardsHolder_9() const { return ___cardsHolder_9; }
	inline RectTransform_t3317474837 ** get_address_of_cardsHolder_9() { return &___cardsHolder_9; }
	inline void set_cardsHolder_9(RectTransform_t3317474837 * value)
	{
		___cardsHolder_9 = value;
		Il2CppCodeGenWriteBarrier(&___cardsHolder_9, value);
	}

	inline static int32_t get_offset_of__delAngle_10() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____delAngle_10)); }
	inline float get__delAngle_10() const { return ____delAngle_10; }
	inline float* get_address_of__delAngle_10() { return &____delAngle_10; }
	inline void set__delAngle_10(float value)
	{
		____delAngle_10 = value;
	}

	inline static int32_t get_offset_of__angle_11() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____angle_11)); }
	inline float get__angle_11() const { return ____angle_11; }
	inline float* get_address_of__angle_11() { return &____angle_11; }
	inline void set__angle_11(float value)
	{
		____angle_11 = value;
	}

	inline static int32_t get_offset_of__canDrag_12() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____canDrag_12)); }
	inline bool get__canDrag_12() const { return ____canDrag_12; }
	inline bool* get_address_of__canDrag_12() { return &____canDrag_12; }
	inline void set__canDrag_12(bool value)
	{
		____canDrag_12 = value;
	}

	inline static int32_t get_offset_of__cards_13() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____cards_13)); }
	inline List_1_t799051817 * get__cards_13() const { return ____cards_13; }
	inline List_1_t799051817 ** get_address_of__cards_13() { return &____cards_13; }
	inline void set__cards_13(List_1_t799051817 * value)
	{
		____cards_13 = value;
		Il2CppCodeGenWriteBarrier(&____cards_13, value);
	}

	inline static int32_t get_offset_of__cardsRewarded_14() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____cardsRewarded_14)); }
	inline List_1_t1765447871 * get__cardsRewarded_14() const { return ____cardsRewarded_14; }
	inline List_1_t1765447871 ** get_address_of__cardsRewarded_14() { return &____cardsRewarded_14; }
	inline void set__cardsRewarded_14(List_1_t1765447871 * value)
	{
		____cardsRewarded_14 = value;
		Il2CppCodeGenWriteBarrier(&____cardsRewarded_14, value);
	}

	inline static int32_t get_offset_of__rotateAround_15() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____rotateAround_15)); }
	inline Vector3_t3525329789  get__rotateAround_15() const { return ____rotateAround_15; }
	inline Vector3_t3525329789 * get_address_of__rotateAround_15() { return &____rotateAround_15; }
	inline void set__rotateAround_15(Vector3_t3525329789  value)
	{
		____rotateAround_15 = value;
	}

	inline static int32_t get_offset_of__lastMousePosition_16() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____lastMousePosition_16)); }
	inline Vector2_t3525329788  get__lastMousePosition_16() const { return ____lastMousePosition_16; }
	inline Vector2_t3525329788 * get_address_of__lastMousePosition_16() { return &____lastMousePosition_16; }
	inline void set__lastMousePosition_16(Vector2_t3525329788  value)
	{
		____lastMousePosition_16 = value;
	}

	inline static int32_t get_offset_of__cardSelectionHandler_17() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____cardSelectionHandler_17)); }
	inline CardSelectionHandler_t2914958190 * get__cardSelectionHandler_17() const { return ____cardSelectionHandler_17; }
	inline CardSelectionHandler_t2914958190 ** get_address_of__cardSelectionHandler_17() { return &____cardSelectionHandler_17; }
	inline void set__cardSelectionHandler_17(CardSelectionHandler_t2914958190 * value)
	{
		____cardSelectionHandler_17 = value;
		Il2CppCodeGenWriteBarrier(&____cardSelectionHandler_17, value);
	}

	inline static int32_t get_offset_of_count_18() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___count_18)); }
	inline int32_t get_count_18() const { return ___count_18; }
	inline int32_t* get_address_of_count_18() { return &___count_18; }
	inline void set_count_18(int32_t value)
	{
		___count_18 = value;
	}

	inline static int32_t get_offset_of_dimRed_19() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___dimRed_19)); }
	inline Image_t3354615620 * get_dimRed_19() const { return ___dimRed_19; }
	inline Image_t3354615620 ** get_address_of_dimRed_19() { return &___dimRed_19; }
	inline void set_dimRed_19(Image_t3354615620 * value)
	{
		___dimRed_19 = value;
		Il2CppCodeGenWriteBarrier(&___dimRed_19, value);
	}

	inline static int32_t get_offset_of_dimYellow_20() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___dimYellow_20)); }
	inline Image_t3354615620 * get_dimYellow_20() const { return ___dimYellow_20; }
	inline Image_t3354615620 ** get_address_of_dimYellow_20() { return &___dimYellow_20; }
	inline void set_dimYellow_20(Image_t3354615620 * value)
	{
		___dimYellow_20 = value;
		Il2CppCodeGenWriteBarrier(&___dimYellow_20, value);
	}

	inline static int32_t get_offset_of_dimGreen_21() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___dimGreen_21)); }
	inline Image_t3354615620 * get_dimGreen_21() const { return ___dimGreen_21; }
	inline Image_t3354615620 ** get_address_of_dimGreen_21() { return &___dimGreen_21; }
	inline void set_dimGreen_21(Image_t3354615620 * value)
	{
		___dimGreen_21 = value;
		Il2CppCodeGenWriteBarrier(&___dimGreen_21, value);
	}

	inline static int32_t get_offset_of_grayShaderImages_22() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___grayShaderImages_22)); }
	inline List_1_t4151574589 * get_grayShaderImages_22() const { return ___grayShaderImages_22; }
	inline List_1_t4151574589 ** get_address_of_grayShaderImages_22() { return &___grayShaderImages_22; }
	inline void set_grayShaderImages_22(List_1_t4151574589 * value)
	{
		___grayShaderImages_22 = value;
		Il2CppCodeGenWriteBarrier(&___grayShaderImages_22, value);
	}

	inline static int32_t get_offset_of_U3CDidPullOverU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___U3CDidPullOverU3Ek__BackingField_23)); }
	inline bool get_U3CDidPullOverU3Ek__BackingField_23() const { return ___U3CDidPullOverU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CDidPullOverU3Ek__BackingField_23() { return &___U3CDidPullOverU3Ek__BackingField_23; }
	inline void set_U3CDidPullOverU3Ek__BackingField_23(bool value)
	{
		___U3CDidPullOverU3Ek__BackingField_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
