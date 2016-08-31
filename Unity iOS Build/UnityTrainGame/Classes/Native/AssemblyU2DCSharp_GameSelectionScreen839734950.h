#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t990034267;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "AssemblyU2DCSharp_GameScreenMonoBehaviour3269764764.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSelectionScreen
struct  GameSelectionScreen_t839734950  : public GameScreenMonoBehaviour_t3269764764
{
public:
	// UnityEngine.UI.Button GameSelectionScreen::next
	Button_t990034267 * ___next_4;
	// UnityEngine.UI.Button GameSelectionScreen::play
	Button_t990034267 * ___play_5;
	// UnityEngine.UI.Button GameSelectionScreen::previous
	Button_t990034267 * ___previous_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameSelectionScreen::_train
	List_1_t514686775 * ____train_7;
	// UnityEngine.RectTransform GameSelectionScreen::mask
	RectTransform_t3317474837 * ___mask_11;
	// UnityEngine.GameObject GameSelectionScreen::info
	GameObject_t4012695102 * ___info_12;
	// UnityEngine.UI.Text GameSelectionScreen::entryText
	Text_t3286458198 * ___entryText_13;

public:
	inline static int32_t get_offset_of_next_4() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___next_4)); }
	inline Button_t990034267 * get_next_4() const { return ___next_4; }
	inline Button_t990034267 ** get_address_of_next_4() { return &___next_4; }
	inline void set_next_4(Button_t990034267 * value)
	{
		___next_4 = value;
		Il2CppCodeGenWriteBarrier(&___next_4, value);
	}

	inline static int32_t get_offset_of_play_5() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___play_5)); }
	inline Button_t990034267 * get_play_5() const { return ___play_5; }
	inline Button_t990034267 ** get_address_of_play_5() { return &___play_5; }
	inline void set_play_5(Button_t990034267 * value)
	{
		___play_5 = value;
		Il2CppCodeGenWriteBarrier(&___play_5, value);
	}

	inline static int32_t get_offset_of_previous_6() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___previous_6)); }
	inline Button_t990034267 * get_previous_6() const { return ___previous_6; }
	inline Button_t990034267 ** get_address_of_previous_6() { return &___previous_6; }
	inline void set_previous_6(Button_t990034267 * value)
	{
		___previous_6 = value;
		Il2CppCodeGenWriteBarrier(&___previous_6, value);
	}

	inline static int32_t get_offset_of__train_7() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ____train_7)); }
	inline List_1_t514686775 * get__train_7() const { return ____train_7; }
	inline List_1_t514686775 ** get_address_of__train_7() { return &____train_7; }
	inline void set__train_7(List_1_t514686775 * value)
	{
		____train_7 = value;
		Il2CppCodeGenWriteBarrier(&____train_7, value);
	}

	inline static int32_t get_offset_of_mask_11() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___mask_11)); }
	inline RectTransform_t3317474837 * get_mask_11() const { return ___mask_11; }
	inline RectTransform_t3317474837 ** get_address_of_mask_11() { return &___mask_11; }
	inline void set_mask_11(RectTransform_t3317474837 * value)
	{
		___mask_11 = value;
		Il2CppCodeGenWriteBarrier(&___mask_11, value);
	}

	inline static int32_t get_offset_of_info_12() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___info_12)); }
	inline GameObject_t4012695102 * get_info_12() const { return ___info_12; }
	inline GameObject_t4012695102 ** get_address_of_info_12() { return &___info_12; }
	inline void set_info_12(GameObject_t4012695102 * value)
	{
		___info_12 = value;
		Il2CppCodeGenWriteBarrier(&___info_12, value);
	}

	inline static int32_t get_offset_of_entryText_13() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___entryText_13)); }
	inline Text_t3286458198 * get_entryText_13() const { return ___entryText_13; }
	inline Text_t3286458198 ** get_address_of_entryText_13() { return &___entryText_13; }
	inline void set_entryText_13(Text_t3286458198 * value)
	{
		___entryText_13 = value;
		Il2CppCodeGenWriteBarrier(&___entryText_13, value);
	}
};

struct GameSelectionScreen_t839734950_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Int32> GameSelectionScreen::entryFees
	List_1_t3644373756 * ___entryFees_8;
	// System.Int32 GameSelectionScreen::selectedIndex
	int32_t ___selectedIndex_9;
	// System.Collections.Generic.List`1<System.Int32> GameSelectionScreen::matchTypes
	List_1_t3644373756 * ___matchTypes_10;

public:
	inline static int32_t get_offset_of_entryFees_8() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950_StaticFields, ___entryFees_8)); }
	inline List_1_t3644373756 * get_entryFees_8() const { return ___entryFees_8; }
	inline List_1_t3644373756 ** get_address_of_entryFees_8() { return &___entryFees_8; }
	inline void set_entryFees_8(List_1_t3644373756 * value)
	{
		___entryFees_8 = value;
		Il2CppCodeGenWriteBarrier(&___entryFees_8, value);
	}

	inline static int32_t get_offset_of_selectedIndex_9() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950_StaticFields, ___selectedIndex_9)); }
	inline int32_t get_selectedIndex_9() const { return ___selectedIndex_9; }
	inline int32_t* get_address_of_selectedIndex_9() { return &___selectedIndex_9; }
	inline void set_selectedIndex_9(int32_t value)
	{
		___selectedIndex_9 = value;
	}

	inline static int32_t get_offset_of_matchTypes_10() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950_StaticFields, ___matchTypes_10)); }
	inline List_1_t3644373756 * get_matchTypes_10() const { return ___matchTypes_10; }
	inline List_1_t3644373756 ** get_address_of_matchTypes_10() { return &___matchTypes_10; }
	inline void set_matchTypes_10(List_1_t3644373756 * value)
	{
		___matchTypes_10 = value;
		Il2CppCodeGenWriteBarrier(&___matchTypes_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
