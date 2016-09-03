#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// Train
struct Train_t81068520;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Trains
struct  Trains_t2513124235  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Trains::trains
	List_1_t514686775 * ___trains_2;
	// Train Trains::_activeTrain
	Train_t81068520 * ____activeTrain_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Trains::positions
	List_1_t27321462 * ___positions_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Trains::scale
	List_1_t27321462 * ___scale_5;

public:
	inline static int32_t get_offset_of_trains_2() { return static_cast<int32_t>(offsetof(Trains_t2513124235, ___trains_2)); }
	inline List_1_t514686775 * get_trains_2() const { return ___trains_2; }
	inline List_1_t514686775 ** get_address_of_trains_2() { return &___trains_2; }
	inline void set_trains_2(List_1_t514686775 * value)
	{
		___trains_2 = value;
		Il2CppCodeGenWriteBarrier(&___trains_2, value);
	}

	inline static int32_t get_offset_of__activeTrain_3() { return static_cast<int32_t>(offsetof(Trains_t2513124235, ____activeTrain_3)); }
	inline Train_t81068520 * get__activeTrain_3() const { return ____activeTrain_3; }
	inline Train_t81068520 ** get_address_of__activeTrain_3() { return &____activeTrain_3; }
	inline void set__activeTrain_3(Train_t81068520 * value)
	{
		____activeTrain_3 = value;
		Il2CppCodeGenWriteBarrier(&____activeTrain_3, value);
	}

	inline static int32_t get_offset_of_positions_4() { return static_cast<int32_t>(offsetof(Trains_t2513124235, ___positions_4)); }
	inline List_1_t27321462 * get_positions_4() const { return ___positions_4; }
	inline List_1_t27321462 ** get_address_of_positions_4() { return &___positions_4; }
	inline void set_positions_4(List_1_t27321462 * value)
	{
		___positions_4 = value;
		Il2CppCodeGenWriteBarrier(&___positions_4, value);
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(Trains_t2513124235, ___scale_5)); }
	inline List_1_t27321462 * get_scale_5() const { return ___scale_5; }
	inline List_1_t27321462 ** get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(List_1_t27321462 * value)
	{
		___scale_5 = value;
		Il2CppCodeGenWriteBarrier(&___scale_5, value);
	}
};

struct Trains_t2513124235_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Trains::<>f__switch$map4
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map4_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_6() { return static_cast<int32_t>(offsetof(Trains_t2513124235_StaticFields, ___U3CU3Ef__switchU24map4_6)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map4_6() const { return ___U3CU3Ef__switchU24map4_6; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map4_6() { return &___U3CU3Ef__switchU24map4_6; }
	inline void set_U3CU3Ef__switchU24map4_6(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map4_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
