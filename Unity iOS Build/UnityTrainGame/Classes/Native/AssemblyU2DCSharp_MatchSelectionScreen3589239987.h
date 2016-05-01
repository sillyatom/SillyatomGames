#pragma once

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

#include "AssemblyU2DCSharp_SceneMonoBehaviour4246217742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchSelectionScreen
struct  MatchSelectionScreen_t3589239987  : public SceneMonoBehaviour_t4246217742
{
public:
	// UnityEngine.RectTransform MatchSelectionScreen::gameLayout
	RectTransform_t3317474837 * ___gameLayout_4;
	// UnityEngine.UI.Button MatchSelectionScreen::autoMatchBtn
	Button_t990034267 * ___autoMatchBtn_5;
	// UnityEngine.UI.Button MatchSelectionScreen::inviteBtn
	Button_t990034267 * ___inviteBtn_6;
	// UnityEngine.UI.Button MatchSelectionScreen::singlePlayerBtn
	Button_t990034267 * ___singlePlayerBtn_7;

public:
	inline static int32_t get_offset_of_gameLayout_4() { return static_cast<int32_t>(offsetof(MatchSelectionScreen_t3589239987, ___gameLayout_4)); }
	inline RectTransform_t3317474837 * get_gameLayout_4() const { return ___gameLayout_4; }
	inline RectTransform_t3317474837 ** get_address_of_gameLayout_4() { return &___gameLayout_4; }
	inline void set_gameLayout_4(RectTransform_t3317474837 * value)
	{
		___gameLayout_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameLayout_4, value);
	}

	inline static int32_t get_offset_of_autoMatchBtn_5() { return static_cast<int32_t>(offsetof(MatchSelectionScreen_t3589239987, ___autoMatchBtn_5)); }
	inline Button_t990034267 * get_autoMatchBtn_5() const { return ___autoMatchBtn_5; }
	inline Button_t990034267 ** get_address_of_autoMatchBtn_5() { return &___autoMatchBtn_5; }
	inline void set_autoMatchBtn_5(Button_t990034267 * value)
	{
		___autoMatchBtn_5 = value;
		Il2CppCodeGenWriteBarrier(&___autoMatchBtn_5, value);
	}

	inline static int32_t get_offset_of_inviteBtn_6() { return static_cast<int32_t>(offsetof(MatchSelectionScreen_t3589239987, ___inviteBtn_6)); }
	inline Button_t990034267 * get_inviteBtn_6() const { return ___inviteBtn_6; }
	inline Button_t990034267 ** get_address_of_inviteBtn_6() { return &___inviteBtn_6; }
	inline void set_inviteBtn_6(Button_t990034267 * value)
	{
		___inviteBtn_6 = value;
		Il2CppCodeGenWriteBarrier(&___inviteBtn_6, value);
	}

	inline static int32_t get_offset_of_singlePlayerBtn_7() { return static_cast<int32_t>(offsetof(MatchSelectionScreen_t3589239987, ___singlePlayerBtn_7)); }
	inline Button_t990034267 * get_singlePlayerBtn_7() const { return ___singlePlayerBtn_7; }
	inline Button_t990034267 ** get_address_of_singlePlayerBtn_7() { return &___singlePlayerBtn_7; }
	inline void set_singlePlayerBtn_7(Button_t990034267 * value)
	{
		___singlePlayerBtn_7 = value;
		Il2CppCodeGenWriteBarrier(&___singlePlayerBtn_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
