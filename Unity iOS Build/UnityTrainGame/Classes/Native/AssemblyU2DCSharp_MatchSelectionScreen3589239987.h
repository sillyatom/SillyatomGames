﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.UI.Button
struct Button_t990034267;

#include "AssemblyU2DCSharp_GameScreenMonoBehaviour3269764764.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchSelectionScreen
struct  MatchSelectionScreen_t3589239987  : public GameScreenMonoBehaviour_t3269764764
{
public:
	// UnityEngine.RectTransform MatchSelectionScreen::gameLayout
	RectTransform_t3317474837 * ___gameLayout_5;
	// UnityEngine.UI.Button MatchSelectionScreen::hostMatch
	Button_t990034267 * ___hostMatch_6;
	// UnityEngine.UI.Button MatchSelectionScreen::autoMatchBtn
	Button_t990034267 * ___autoMatchBtn_7;
	// UnityEngine.UI.Button MatchSelectionScreen::inviteBtn
	Button_t990034267 * ___inviteBtn_8;
	// UnityEngine.UI.Button MatchSelectionScreen::singlePlayerBtn
	Button_t990034267 * ___singlePlayerBtn_9;

public:
	inline static int32_t get_offset_of_gameLayout_5() { return static_cast<int32_t>(offsetof(MatchSelectionScreen_t3589239987, ___gameLayout_5)); }
	inline RectTransform_t3317474837 * get_gameLayout_5() const { return ___gameLayout_5; }
	inline RectTransform_t3317474837 ** get_address_of_gameLayout_5() { return &___gameLayout_5; }
	inline void set_gameLayout_5(RectTransform_t3317474837 * value)
	{
		___gameLayout_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameLayout_5, value);
	}

	inline static int32_t get_offset_of_hostMatch_6() { return static_cast<int32_t>(offsetof(MatchSelectionScreen_t3589239987, ___hostMatch_6)); }
	inline Button_t990034267 * get_hostMatch_6() const { return ___hostMatch_6; }
	inline Button_t990034267 ** get_address_of_hostMatch_6() { return &___hostMatch_6; }
	inline void set_hostMatch_6(Button_t990034267 * value)
	{
		___hostMatch_6 = value;
		Il2CppCodeGenWriteBarrier(&___hostMatch_6, value);
	}

	inline static int32_t get_offset_of_autoMatchBtn_7() { return static_cast<int32_t>(offsetof(MatchSelectionScreen_t3589239987, ___autoMatchBtn_7)); }
	inline Button_t990034267 * get_autoMatchBtn_7() const { return ___autoMatchBtn_7; }
	inline Button_t990034267 ** get_address_of_autoMatchBtn_7() { return &___autoMatchBtn_7; }
	inline void set_autoMatchBtn_7(Button_t990034267 * value)
	{
		___autoMatchBtn_7 = value;
		Il2CppCodeGenWriteBarrier(&___autoMatchBtn_7, value);
	}

	inline static int32_t get_offset_of_inviteBtn_8() { return static_cast<int32_t>(offsetof(MatchSelectionScreen_t3589239987, ___inviteBtn_8)); }
	inline Button_t990034267 * get_inviteBtn_8() const { return ___inviteBtn_8; }
	inline Button_t990034267 ** get_address_of_inviteBtn_8() { return &___inviteBtn_8; }
	inline void set_inviteBtn_8(Button_t990034267 * value)
	{
		___inviteBtn_8 = value;
		Il2CppCodeGenWriteBarrier(&___inviteBtn_8, value);
	}

	inline static int32_t get_offset_of_singlePlayerBtn_9() { return static_cast<int32_t>(offsetof(MatchSelectionScreen_t3589239987, ___singlePlayerBtn_9)); }
	inline Button_t990034267 * get_singlePlayerBtn_9() const { return ___singlePlayerBtn_9; }
	inline Button_t990034267 ** get_address_of_singlePlayerBtn_9() { return &___singlePlayerBtn_9; }
	inline void set_singlePlayerBtn_9(Button_t990034267 * value)
	{
		___singlePlayerBtn_9 = value;
		Il2CppCodeGenWriteBarrier(&___singlePlayerBtn_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
