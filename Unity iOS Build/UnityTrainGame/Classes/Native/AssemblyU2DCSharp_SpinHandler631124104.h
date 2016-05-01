#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Int32,System.String>
struct Action_2_t1740334453;
// System.Collections.Generic.List`1<Card>
struct List_1_t799051817;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpinHandler
struct  SpinHandler_t631124104  : public ExtMonoBehaviour_t2624599193
{
public:
	// System.Single SpinHandler::_symbolHeight
	float ____symbolHeight_3;
	// System.Single SpinHandler::_parentHeight
	float ____parentHeight_4;
	// System.Single SpinHandler::_thresholdY
	float ____thresholdY_5;
	// System.Single SpinHandler::_lastPosY
	float ____lastPosY_6;
	// System.Single SpinHandler::_spinDuration
	float ____spinDuration_7;
	// System.Single SpinHandler::_spinStopDuration
	float ____spinStopDuration_8;
	// System.Single SpinHandler::_spinAcceleration
	float ____spinAcceleration_9;
	// System.Single SpinHandler::_spinSpeed
	float ____spinSpeed_10;
	// System.Single SpinHandler::_timeElapsed
	float ____timeElapsed_11;
	// System.Boolean SpinHandler::_isSpinning
	bool ____isSpinning_12;
	// System.Boolean SpinHandler::_canUpdate
	bool ____canUpdate_13;
	// System.Int32 SpinHandler::_startIndex
	int32_t ____startIndex_14;
	// System.Action`2<System.Int32,System.String> SpinHandler::OnSpinCompleteCallback
	Action_2_t1740334453 * ___OnSpinCompleteCallback_15;
	// System.Collections.Generic.List`1<Card> SpinHandler::<Reel>k__BackingField
	List_1_t799051817 * ___U3CReelU3Ek__BackingField_16;
	// System.Single SpinHandler::<LastSpinTime>k__BackingField
	float ___U3CLastSpinTimeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of__symbolHeight_3() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____symbolHeight_3)); }
	inline float get__symbolHeight_3() const { return ____symbolHeight_3; }
	inline float* get_address_of__symbolHeight_3() { return &____symbolHeight_3; }
	inline void set__symbolHeight_3(float value)
	{
		____symbolHeight_3 = value;
	}

	inline static int32_t get_offset_of__parentHeight_4() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____parentHeight_4)); }
	inline float get__parentHeight_4() const { return ____parentHeight_4; }
	inline float* get_address_of__parentHeight_4() { return &____parentHeight_4; }
	inline void set__parentHeight_4(float value)
	{
		____parentHeight_4 = value;
	}

	inline static int32_t get_offset_of__thresholdY_5() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____thresholdY_5)); }
	inline float get__thresholdY_5() const { return ____thresholdY_5; }
	inline float* get_address_of__thresholdY_5() { return &____thresholdY_5; }
	inline void set__thresholdY_5(float value)
	{
		____thresholdY_5 = value;
	}

	inline static int32_t get_offset_of__lastPosY_6() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____lastPosY_6)); }
	inline float get__lastPosY_6() const { return ____lastPosY_6; }
	inline float* get_address_of__lastPosY_6() { return &____lastPosY_6; }
	inline void set__lastPosY_6(float value)
	{
		____lastPosY_6 = value;
	}

	inline static int32_t get_offset_of__spinDuration_7() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____spinDuration_7)); }
	inline float get__spinDuration_7() const { return ____spinDuration_7; }
	inline float* get_address_of__spinDuration_7() { return &____spinDuration_7; }
	inline void set__spinDuration_7(float value)
	{
		____spinDuration_7 = value;
	}

	inline static int32_t get_offset_of__spinStopDuration_8() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____spinStopDuration_8)); }
	inline float get__spinStopDuration_8() const { return ____spinStopDuration_8; }
	inline float* get_address_of__spinStopDuration_8() { return &____spinStopDuration_8; }
	inline void set__spinStopDuration_8(float value)
	{
		____spinStopDuration_8 = value;
	}

	inline static int32_t get_offset_of__spinAcceleration_9() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____spinAcceleration_9)); }
	inline float get__spinAcceleration_9() const { return ____spinAcceleration_9; }
	inline float* get_address_of__spinAcceleration_9() { return &____spinAcceleration_9; }
	inline void set__spinAcceleration_9(float value)
	{
		____spinAcceleration_9 = value;
	}

	inline static int32_t get_offset_of__spinSpeed_10() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____spinSpeed_10)); }
	inline float get__spinSpeed_10() const { return ____spinSpeed_10; }
	inline float* get_address_of__spinSpeed_10() { return &____spinSpeed_10; }
	inline void set__spinSpeed_10(float value)
	{
		____spinSpeed_10 = value;
	}

	inline static int32_t get_offset_of__timeElapsed_11() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____timeElapsed_11)); }
	inline float get__timeElapsed_11() const { return ____timeElapsed_11; }
	inline float* get_address_of__timeElapsed_11() { return &____timeElapsed_11; }
	inline void set__timeElapsed_11(float value)
	{
		____timeElapsed_11 = value;
	}

	inline static int32_t get_offset_of__isSpinning_12() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____isSpinning_12)); }
	inline bool get__isSpinning_12() const { return ____isSpinning_12; }
	inline bool* get_address_of__isSpinning_12() { return &____isSpinning_12; }
	inline void set__isSpinning_12(bool value)
	{
		____isSpinning_12 = value;
	}

	inline static int32_t get_offset_of__canUpdate_13() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____canUpdate_13)); }
	inline bool get__canUpdate_13() const { return ____canUpdate_13; }
	inline bool* get_address_of__canUpdate_13() { return &____canUpdate_13; }
	inline void set__canUpdate_13(bool value)
	{
		____canUpdate_13 = value;
	}

	inline static int32_t get_offset_of__startIndex_14() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ____startIndex_14)); }
	inline int32_t get__startIndex_14() const { return ____startIndex_14; }
	inline int32_t* get_address_of__startIndex_14() { return &____startIndex_14; }
	inline void set__startIndex_14(int32_t value)
	{
		____startIndex_14 = value;
	}

	inline static int32_t get_offset_of_OnSpinCompleteCallback_15() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ___OnSpinCompleteCallback_15)); }
	inline Action_2_t1740334453 * get_OnSpinCompleteCallback_15() const { return ___OnSpinCompleteCallback_15; }
	inline Action_2_t1740334453 ** get_address_of_OnSpinCompleteCallback_15() { return &___OnSpinCompleteCallback_15; }
	inline void set_OnSpinCompleteCallback_15(Action_2_t1740334453 * value)
	{
		___OnSpinCompleteCallback_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnSpinCompleteCallback_15, value);
	}

	inline static int32_t get_offset_of_U3CReelU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ___U3CReelU3Ek__BackingField_16)); }
	inline List_1_t799051817 * get_U3CReelU3Ek__BackingField_16() const { return ___U3CReelU3Ek__BackingField_16; }
	inline List_1_t799051817 ** get_address_of_U3CReelU3Ek__BackingField_16() { return &___U3CReelU3Ek__BackingField_16; }
	inline void set_U3CReelU3Ek__BackingField_16(List_1_t799051817 * value)
	{
		___U3CReelU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CReelU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CLastSpinTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SpinHandler_t631124104, ___U3CLastSpinTimeU3Ek__BackingField_17)); }
	inline float get_U3CLastSpinTimeU3Ek__BackingField_17() const { return ___U3CLastSpinTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CLastSpinTimeU3Ek__BackingField_17() { return &___U3CLastSpinTimeU3Ek__BackingField_17; }
	inline void set_U3CLastSpinTimeU3Ek__BackingField_17(float value)
	{
		___U3CLastSpinTimeU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
