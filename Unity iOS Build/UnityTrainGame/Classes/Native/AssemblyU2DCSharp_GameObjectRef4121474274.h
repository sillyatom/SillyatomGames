#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RoundHandler
struct RoundHandler_t2172802556;
// CardSelectionHandler
struct CardSelectionHandler_t2914958190;
// Networking
struct Networking_t1515242260;
// APIHandler
struct APIHandler_t2277647344;
// PopupManager
struct PopupManager_t2711269761;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameObjectRef
struct  GameObjectRef_t4121474274  : public MonoBehaviour_t3012272455
{
public:
	// RoundHandler GameObjectRef::roundHandler
	RoundHandler_t2172802556 * ___roundHandler_2;
	// CardSelectionHandler GameObjectRef::cardSelectionHandler
	CardSelectionHandler_t2914958190 * ___cardSelectionHandler_3;
	// Networking GameObjectRef::network
	Networking_t1515242260 * ___network_4;
	// APIHandler GameObjectRef::apiHandler
	APIHandler_t2277647344 * ___apiHandler_5;
	// PopupManager GameObjectRef::popupManager
	PopupManager_t2711269761 * ___popupManager_6;

public:
	inline static int32_t get_offset_of_roundHandler_2() { return static_cast<int32_t>(offsetof(GameObjectRef_t4121474274, ___roundHandler_2)); }
	inline RoundHandler_t2172802556 * get_roundHandler_2() const { return ___roundHandler_2; }
	inline RoundHandler_t2172802556 ** get_address_of_roundHandler_2() { return &___roundHandler_2; }
	inline void set_roundHandler_2(RoundHandler_t2172802556 * value)
	{
		___roundHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___roundHandler_2, value);
	}

	inline static int32_t get_offset_of_cardSelectionHandler_3() { return static_cast<int32_t>(offsetof(GameObjectRef_t4121474274, ___cardSelectionHandler_3)); }
	inline CardSelectionHandler_t2914958190 * get_cardSelectionHandler_3() const { return ___cardSelectionHandler_3; }
	inline CardSelectionHandler_t2914958190 ** get_address_of_cardSelectionHandler_3() { return &___cardSelectionHandler_3; }
	inline void set_cardSelectionHandler_3(CardSelectionHandler_t2914958190 * value)
	{
		___cardSelectionHandler_3 = value;
		Il2CppCodeGenWriteBarrier(&___cardSelectionHandler_3, value);
	}

	inline static int32_t get_offset_of_network_4() { return static_cast<int32_t>(offsetof(GameObjectRef_t4121474274, ___network_4)); }
	inline Networking_t1515242260 * get_network_4() const { return ___network_4; }
	inline Networking_t1515242260 ** get_address_of_network_4() { return &___network_4; }
	inline void set_network_4(Networking_t1515242260 * value)
	{
		___network_4 = value;
		Il2CppCodeGenWriteBarrier(&___network_4, value);
	}

	inline static int32_t get_offset_of_apiHandler_5() { return static_cast<int32_t>(offsetof(GameObjectRef_t4121474274, ___apiHandler_5)); }
	inline APIHandler_t2277647344 * get_apiHandler_5() const { return ___apiHandler_5; }
	inline APIHandler_t2277647344 ** get_address_of_apiHandler_5() { return &___apiHandler_5; }
	inline void set_apiHandler_5(APIHandler_t2277647344 * value)
	{
		___apiHandler_5 = value;
		Il2CppCodeGenWriteBarrier(&___apiHandler_5, value);
	}

	inline static int32_t get_offset_of_popupManager_6() { return static_cast<int32_t>(offsetof(GameObjectRef_t4121474274, ___popupManager_6)); }
	inline PopupManager_t2711269761 * get_popupManager_6() const { return ___popupManager_6; }
	inline PopupManager_t2711269761 ** get_address_of_popupManager_6() { return &___popupManager_6; }
	inline void set_popupManager_6(PopupManager_t2711269761 * value)
	{
		___popupManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___popupManager_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
