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
// Networking
struct Networking_t1515242260;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_GameScreenMonoBehaviour3269764764.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainScreen
struct  MainScreen_t2442698661  : public GameScreenMonoBehaviour_t3269764764
{
public:
	// UnityEngine.UI.Button MainScreen::playBtn
	Button_t990034267 * ___playBtn_4;
	// Networking MainScreen::network
	Networking_t1515242260 * ___network_5;
	// System.Int32 MainScreen::_signingStatus
	int32_t ____signingStatus_6;

public:
	inline static int32_t get_offset_of_playBtn_4() { return static_cast<int32_t>(offsetof(MainScreen_t2442698661, ___playBtn_4)); }
	inline Button_t990034267 * get_playBtn_4() const { return ___playBtn_4; }
	inline Button_t990034267 ** get_address_of_playBtn_4() { return &___playBtn_4; }
	inline void set_playBtn_4(Button_t990034267 * value)
	{
		___playBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___playBtn_4, value);
	}

	inline static int32_t get_offset_of_network_5() { return static_cast<int32_t>(offsetof(MainScreen_t2442698661, ___network_5)); }
	inline Networking_t1515242260 * get_network_5() const { return ___network_5; }
	inline Networking_t1515242260 ** get_address_of_network_5() { return &___network_5; }
	inline void set_network_5(Networking_t1515242260 * value)
	{
		___network_5 = value;
		Il2CppCodeGenWriteBarrier(&___network_5, value);
	}

	inline static int32_t get_offset_of__signingStatus_6() { return static_cast<int32_t>(offsetof(MainScreen_t2442698661, ____signingStatus_6)); }
	inline int32_t get__signingStatus_6() const { return ____signingStatus_6; }
	inline int32_t* get_address_of__signingStatus_6() { return &____signingStatus_6; }
	inline void set__signingStatus_6(int32_t value)
	{
		____signingStatus_6 = value;
	}
};

struct MainScreen_t2442698661_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MainScreen::<>f__switch$mapB
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24mapB_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_7() { return static_cast<int32_t>(offsetof(MainScreen_t2442698661_StaticFields, ___U3CU3Ef__switchU24mapB_7)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24mapB_7() const { return ___U3CU3Ef__switchU24mapB_7; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24mapB_7() { return &___U3CU3Ef__switchU24mapB_7; }
	inline void set_U3CU3Ef__switchU24mapB_7(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24mapB_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapB_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
