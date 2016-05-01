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
// CardSelectionHandler
struct CardSelectionHandler_t2914958190;
// System.Collections.Generic.List`1<Card>
struct List_1_t799051817;

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
	// UnityEngine.UI.Text Player::playerName
	Text_t3286458198 * ___playerName_5;
	// UnityEngine.UI.Image Player::playerDP
	Image_t3354615620 * ___playerDP_6;
	// UnityEngine.UI.Button Player::shoutBtn
	Button_t990034267 * ___shoutBtn_7;
	// UnityEngine.RectTransform Player::cardsHolder
	RectTransform_t3317474837 * ___cardsHolder_8;
	// CardSelectionHandler Player::_cardSelectionHandler
	CardSelectionHandler_t2914958190 * ____cardSelectionHandler_9;
	// System.Single Player::_delAngle
	float ____delAngle_10;
	// System.Single Player::_angle
	float ____angle_11;
	// System.Boolean Player::_canDrag
	bool ____canDrag_12;
	// System.Collections.Generic.List`1<Card> Player::_cards
	List_1_t799051817 * ____cards_13;
	// UnityEngine.Vector3 Player::_rotateAround
	Vector3_t3525329789  ____rotateAround_14;
	// UnityEngine.Vector2 Player::_lastMousePosition
	Vector2_t3525329788  ____lastMousePosition_15;

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

	inline static int32_t get_offset_of_playerName_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerName_5)); }
	inline Text_t3286458198 * get_playerName_5() const { return ___playerName_5; }
	inline Text_t3286458198 ** get_address_of_playerName_5() { return &___playerName_5; }
	inline void set_playerName_5(Text_t3286458198 * value)
	{
		___playerName_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_5, value);
	}

	inline static int32_t get_offset_of_playerDP_6() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerDP_6)); }
	inline Image_t3354615620 * get_playerDP_6() const { return ___playerDP_6; }
	inline Image_t3354615620 ** get_address_of_playerDP_6() { return &___playerDP_6; }
	inline void set_playerDP_6(Image_t3354615620 * value)
	{
		___playerDP_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerDP_6, value);
	}

	inline static int32_t get_offset_of_shoutBtn_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___shoutBtn_7)); }
	inline Button_t990034267 * get_shoutBtn_7() const { return ___shoutBtn_7; }
	inline Button_t990034267 ** get_address_of_shoutBtn_7() { return &___shoutBtn_7; }
	inline void set_shoutBtn_7(Button_t990034267 * value)
	{
		___shoutBtn_7 = value;
		Il2CppCodeGenWriteBarrier(&___shoutBtn_7, value);
	}

	inline static int32_t get_offset_of_cardsHolder_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___cardsHolder_8)); }
	inline RectTransform_t3317474837 * get_cardsHolder_8() const { return ___cardsHolder_8; }
	inline RectTransform_t3317474837 ** get_address_of_cardsHolder_8() { return &___cardsHolder_8; }
	inline void set_cardsHolder_8(RectTransform_t3317474837 * value)
	{
		___cardsHolder_8 = value;
		Il2CppCodeGenWriteBarrier(&___cardsHolder_8, value);
	}

	inline static int32_t get_offset_of__cardSelectionHandler_9() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____cardSelectionHandler_9)); }
	inline CardSelectionHandler_t2914958190 * get__cardSelectionHandler_9() const { return ____cardSelectionHandler_9; }
	inline CardSelectionHandler_t2914958190 ** get_address_of__cardSelectionHandler_9() { return &____cardSelectionHandler_9; }
	inline void set__cardSelectionHandler_9(CardSelectionHandler_t2914958190 * value)
	{
		____cardSelectionHandler_9 = value;
		Il2CppCodeGenWriteBarrier(&____cardSelectionHandler_9, value);
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

	inline static int32_t get_offset_of__rotateAround_14() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____rotateAround_14)); }
	inline Vector3_t3525329789  get__rotateAround_14() const { return ____rotateAround_14; }
	inline Vector3_t3525329789 * get_address_of__rotateAround_14() { return &____rotateAround_14; }
	inline void set__rotateAround_14(Vector3_t3525329789  value)
	{
		____rotateAround_14 = value;
	}

	inline static int32_t get_offset_of__lastMousePosition_15() { return static_cast<int32_t>(offsetof(Player_t2393081601, ____lastMousePosition_15)); }
	inline Vector2_t3525329788  get__lastMousePosition_15() const { return ____lastMousePosition_15; }
	inline Vector2_t3525329788 * get_address_of__lastMousePosition_15() { return &____lastMousePosition_15; }
	inline void set__lastMousePosition_15(Vector2_t3525329788  value)
	{
		____lastMousePosition_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
