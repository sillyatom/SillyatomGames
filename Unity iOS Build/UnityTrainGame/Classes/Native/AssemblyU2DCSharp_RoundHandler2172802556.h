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
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.Text
struct Text_t3286458198;
// System.Action
struct Action_t437523947;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoundHandler
struct  RoundHandler_t2172802556  : public ExtMonoBehaviour_t2624599193
{
public:
	// System.Single RoundHandler::_elapsedTime
	float ____elapsedTime_4;
	// System.Boolean RoundHandler::_isRoundActive
	bool ____isRoundActive_5;
	// System.String RoundHandler::_activePlayerId
	String_t* ____activePlayerId_6;
	// UnityEngine.UI.Image RoundHandler::progressBar
	Image_t3354615620 * ___progressBar_7;
	// UnityEngine.UI.Text RoundHandler::currentPlayerName
	Text_t3286458198 * ___currentPlayerName_8;
	// System.Action RoundHandler::<OnRoundCompleteCallback>k__BackingField
	Action_t437523947 * ___U3COnRoundCompleteCallbackU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__elapsedTime_4() { return static_cast<int32_t>(offsetof(RoundHandler_t2172802556, ____elapsedTime_4)); }
	inline float get__elapsedTime_4() const { return ____elapsedTime_4; }
	inline float* get_address_of__elapsedTime_4() { return &____elapsedTime_4; }
	inline void set__elapsedTime_4(float value)
	{
		____elapsedTime_4 = value;
	}

	inline static int32_t get_offset_of__isRoundActive_5() { return static_cast<int32_t>(offsetof(RoundHandler_t2172802556, ____isRoundActive_5)); }
	inline bool get__isRoundActive_5() const { return ____isRoundActive_5; }
	inline bool* get_address_of__isRoundActive_5() { return &____isRoundActive_5; }
	inline void set__isRoundActive_5(bool value)
	{
		____isRoundActive_5 = value;
	}

	inline static int32_t get_offset_of__activePlayerId_6() { return static_cast<int32_t>(offsetof(RoundHandler_t2172802556, ____activePlayerId_6)); }
	inline String_t* get__activePlayerId_6() const { return ____activePlayerId_6; }
	inline String_t** get_address_of__activePlayerId_6() { return &____activePlayerId_6; }
	inline void set__activePlayerId_6(String_t* value)
	{
		____activePlayerId_6 = value;
		Il2CppCodeGenWriteBarrier(&____activePlayerId_6, value);
	}

	inline static int32_t get_offset_of_progressBar_7() { return static_cast<int32_t>(offsetof(RoundHandler_t2172802556, ___progressBar_7)); }
	inline Image_t3354615620 * get_progressBar_7() const { return ___progressBar_7; }
	inline Image_t3354615620 ** get_address_of_progressBar_7() { return &___progressBar_7; }
	inline void set_progressBar_7(Image_t3354615620 * value)
	{
		___progressBar_7 = value;
		Il2CppCodeGenWriteBarrier(&___progressBar_7, value);
	}

	inline static int32_t get_offset_of_currentPlayerName_8() { return static_cast<int32_t>(offsetof(RoundHandler_t2172802556, ___currentPlayerName_8)); }
	inline Text_t3286458198 * get_currentPlayerName_8() const { return ___currentPlayerName_8; }
	inline Text_t3286458198 ** get_address_of_currentPlayerName_8() { return &___currentPlayerName_8; }
	inline void set_currentPlayerName_8(Text_t3286458198 * value)
	{
		___currentPlayerName_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentPlayerName_8, value);
	}

	inline static int32_t get_offset_of_U3COnRoundCompleteCallbackU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoundHandler_t2172802556, ___U3COnRoundCompleteCallbackU3Ek__BackingField_9)); }
	inline Action_t437523947 * get_U3COnRoundCompleteCallbackU3Ek__BackingField_9() const { return ___U3COnRoundCompleteCallbackU3Ek__BackingField_9; }
	inline Action_t437523947 ** get_address_of_U3COnRoundCompleteCallbackU3Ek__BackingField_9() { return &___U3COnRoundCompleteCallbackU3Ek__BackingField_9; }
	inline void set_U3COnRoundCompleteCallbackU3Ek__BackingField_9(Action_t437523947 * value)
	{
		___U3COnRoundCompleteCallbackU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnRoundCompleteCallbackU3Ek__BackingField_9, value);
	}
};

struct RoundHandler_t2172802556_StaticFields
{
public:
	// System.Int32 RoundHandler::currentRound
	int32_t ___currentRound_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> RoundHandler::<>f__switch$map4
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map4_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> RoundHandler::<>f__switch$map5
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map5_11;

public:
	inline static int32_t get_offset_of_currentRound_3() { return static_cast<int32_t>(offsetof(RoundHandler_t2172802556_StaticFields, ___currentRound_3)); }
	inline int32_t get_currentRound_3() const { return ___currentRound_3; }
	inline int32_t* get_address_of_currentRound_3() { return &___currentRound_3; }
	inline void set_currentRound_3(int32_t value)
	{
		___currentRound_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_10() { return static_cast<int32_t>(offsetof(RoundHandler_t2172802556_StaticFields, ___U3CU3Ef__switchU24map4_10)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map4_10() const { return ___U3CU3Ef__switchU24map4_10; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map4_10() { return &___U3CU3Ef__switchU24map4_10; }
	inline void set_U3CU3Ef__switchU24map4_10(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map4_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_11() { return static_cast<int32_t>(offsetof(RoundHandler_t2172802556_StaticFields, ___U3CU3Ef__switchU24map5_11)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map5_11() const { return ___U3CU3Ef__switchU24map5_11; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map5_11() { return &___U3CU3Ef__switchU24map5_11; }
	inline void set_U3CU3Ef__switchU24map5_11(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map5_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
