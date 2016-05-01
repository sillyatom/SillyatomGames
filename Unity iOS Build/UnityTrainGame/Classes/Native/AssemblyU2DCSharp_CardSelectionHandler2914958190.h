#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Card
struct Card_t2092848;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardSelectionHandler
struct  CardSelectionHandler_t2914958190  : public ExtMonoBehaviour_t2624599193
{
public:
	// Card CardSelectionHandler::_selectedCard
	Card_t2092848 * ____selectedCard_3;
	// System.String CardSelectionHandler::<playerId>k__BackingField
	String_t* ___U3CplayerIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__selectedCard_3() { return static_cast<int32_t>(offsetof(CardSelectionHandler_t2914958190, ____selectedCard_3)); }
	inline Card_t2092848 * get__selectedCard_3() const { return ____selectedCard_3; }
	inline Card_t2092848 ** get_address_of__selectedCard_3() { return &____selectedCard_3; }
	inline void set__selectedCard_3(Card_t2092848 * value)
	{
		____selectedCard_3 = value;
		Il2CppCodeGenWriteBarrier(&____selectedCard_3, value);
	}

	inline static int32_t get_offset_of_U3CplayerIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CardSelectionHandler_t2914958190, ___U3CplayerIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CplayerIdU3Ek__BackingField_4() const { return ___U3CplayerIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CplayerIdU3Ek__BackingField_4() { return &___U3CplayerIdU3Ek__BackingField_4; }
	inline void set_U3CplayerIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CplayerIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerIdU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
