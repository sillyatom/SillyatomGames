#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameModel
struct GameModel_t2988344887;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameModel
struct  GameModel_t2988344887  : public Il2CppObject
{
public:
	// System.Int32 GameModel::<sweepCount>k__BackingField
	int32_t ___U3CsweepCountU3Ek__BackingField_1;
	// System.Boolean GameModel::<isGameOver>k__BackingField
	bool ___U3CisGameOverU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsweepCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GameModel_t2988344887, ___U3CsweepCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CsweepCountU3Ek__BackingField_1() const { return ___U3CsweepCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CsweepCountU3Ek__BackingField_1() { return &___U3CsweepCountU3Ek__BackingField_1; }
	inline void set_U3CsweepCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CsweepCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CisGameOverU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameModel_t2988344887, ___U3CisGameOverU3Ek__BackingField_2)); }
	inline bool get_U3CisGameOverU3Ek__BackingField_2() const { return ___U3CisGameOverU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CisGameOverU3Ek__BackingField_2() { return &___U3CisGameOverU3Ek__BackingField_2; }
	inline void set_U3CisGameOverU3Ek__BackingField_2(bool value)
	{
		___U3CisGameOverU3Ek__BackingField_2 = value;
	}
};

struct GameModel_t2988344887_StaticFields
{
public:
	// GameModel GameModel::_model
	GameModel_t2988344887 * ____model_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GameModel::<>f__switch$map8
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map8_3;

public:
	inline static int32_t get_offset_of__model_0() { return static_cast<int32_t>(offsetof(GameModel_t2988344887_StaticFields, ____model_0)); }
	inline GameModel_t2988344887 * get__model_0() const { return ____model_0; }
	inline GameModel_t2988344887 ** get_address_of__model_0() { return &____model_0; }
	inline void set__model_0(GameModel_t2988344887 * value)
	{
		____model_0 = value;
		Il2CppCodeGenWriteBarrier(&____model_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_3() { return static_cast<int32_t>(offsetof(GameModel_t2988344887_StaticFields, ___U3CU3Ef__switchU24map8_3)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map8_3() const { return ___U3CU3Ef__switchU24map8_3; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map8_3() { return &___U3CU3Ef__switchU24map8_3; }
	inline void set_U3CU3Ef__switchU24map8_3(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map8_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
