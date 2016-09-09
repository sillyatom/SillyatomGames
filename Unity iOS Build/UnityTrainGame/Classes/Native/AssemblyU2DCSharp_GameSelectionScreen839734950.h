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
	Button_t990034267 * ___next_5;
	// UnityEngine.UI.Button GameSelectionScreen::play
	Button_t990034267 * ___play_6;
	// UnityEngine.UI.Button GameSelectionScreen::previous
	Button_t990034267 * ___previous_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameSelectionScreen::_train
	List_1_t514686775 * ____train_8;
	// System.Single GameSelectionScreen::maskWidth
	float ___maskWidth_12;
	// System.Single GameSelectionScreen::xOffset
	float ___xOffset_13;

public:
	inline static int32_t get_offset_of_next_5() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___next_5)); }
	inline Button_t990034267 * get_next_5() const { return ___next_5; }
	inline Button_t990034267 ** get_address_of_next_5() { return &___next_5; }
	inline void set_next_5(Button_t990034267 * value)
	{
		___next_5 = value;
		Il2CppCodeGenWriteBarrier(&___next_5, value);
	}

	inline static int32_t get_offset_of_play_6() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___play_6)); }
	inline Button_t990034267 * get_play_6() const { return ___play_6; }
	inline Button_t990034267 ** get_address_of_play_6() { return &___play_6; }
	inline void set_play_6(Button_t990034267 * value)
	{
		___play_6 = value;
		Il2CppCodeGenWriteBarrier(&___play_6, value);
	}

	inline static int32_t get_offset_of_previous_7() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___previous_7)); }
	inline Button_t990034267 * get_previous_7() const { return ___previous_7; }
	inline Button_t990034267 ** get_address_of_previous_7() { return &___previous_7; }
	inline void set_previous_7(Button_t990034267 * value)
	{
		___previous_7 = value;
		Il2CppCodeGenWriteBarrier(&___previous_7, value);
	}

	inline static int32_t get_offset_of__train_8() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ____train_8)); }
	inline List_1_t514686775 * get__train_8() const { return ____train_8; }
	inline List_1_t514686775 ** get_address_of__train_8() { return &____train_8; }
	inline void set__train_8(List_1_t514686775 * value)
	{
		____train_8 = value;
		Il2CppCodeGenWriteBarrier(&____train_8, value);
	}

	inline static int32_t get_offset_of_maskWidth_12() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___maskWidth_12)); }
	inline float get_maskWidth_12() const { return ___maskWidth_12; }
	inline float* get_address_of_maskWidth_12() { return &___maskWidth_12; }
	inline void set_maskWidth_12(float value)
	{
		___maskWidth_12 = value;
	}

	inline static int32_t get_offset_of_xOffset_13() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950, ___xOffset_13)); }
	inline float get_xOffset_13() const { return ___xOffset_13; }
	inline float* get_address_of_xOffset_13() { return &___xOffset_13; }
	inline void set_xOffset_13(float value)
	{
		___xOffset_13 = value;
	}
};

struct GameSelectionScreen_t839734950_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Int32> GameSelectionScreen::entryFees
	List_1_t3644373756 * ___entryFees_9;
	// System.Int32 GameSelectionScreen::selectedIndex
	int32_t ___selectedIndex_10;
	// System.Collections.Generic.List`1<System.Int32> GameSelectionScreen::matchTypes
	List_1_t3644373756 * ___matchTypes_11;

public:
	inline static int32_t get_offset_of_entryFees_9() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950_StaticFields, ___entryFees_9)); }
	inline List_1_t3644373756 * get_entryFees_9() const { return ___entryFees_9; }
	inline List_1_t3644373756 ** get_address_of_entryFees_9() { return &___entryFees_9; }
	inline void set_entryFees_9(List_1_t3644373756 * value)
	{
		___entryFees_9 = value;
		Il2CppCodeGenWriteBarrier(&___entryFees_9, value);
	}

	inline static int32_t get_offset_of_selectedIndex_10() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950_StaticFields, ___selectedIndex_10)); }
	inline int32_t get_selectedIndex_10() const { return ___selectedIndex_10; }
	inline int32_t* get_address_of_selectedIndex_10() { return &___selectedIndex_10; }
	inline void set_selectedIndex_10(int32_t value)
	{
		___selectedIndex_10 = value;
	}

	inline static int32_t get_offset_of_matchTypes_11() { return static_cast<int32_t>(offsetof(GameSelectionScreen_t839734950_StaticFields, ___matchTypes_11)); }
	inline List_1_t3644373756 * get_matchTypes_11() const { return ___matchTypes_11; }
	inline List_1_t3644373756 ** get_address_of_matchTypes_11() { return &___matchTypes_11; }
	inline void set_matchTypes_11(List_1_t3644373756 * value)
	{
		___matchTypes_11 = value;
		Il2CppCodeGenWriteBarrier(&___matchTypes_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
