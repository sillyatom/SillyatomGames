#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.TextMesh
struct TextMesh_t583678247;
// JsonTestScript
struct JsonTestScript_t2619432741;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextTest
struct  TextTest_t3355968383  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject TextTest::TextObject
	GameObject_t4012695102 * ___TextObject_2;
	// UnityEngine.TextMesh TextTest::_statusText
	TextMesh_t583678247 * ____statusText_3;
	// System.DateTime TextTest::_refTime
	DateTime_t339033936  ____refTime_4;
	// System.Int32 TextTest::_testNum
	int32_t ____testNum_5;
	// JsonTestScript TextTest::_tester
	JsonTestScript_t2619432741 * ____tester_6;
	// System.Boolean TextTest::_complete
	bool ____complete_7;

public:
	inline static int32_t get_offset_of_TextObject_2() { return static_cast<int32_t>(offsetof(TextTest_t3355968383, ___TextObject_2)); }
	inline GameObject_t4012695102 * get_TextObject_2() const { return ___TextObject_2; }
	inline GameObject_t4012695102 ** get_address_of_TextObject_2() { return &___TextObject_2; }
	inline void set_TextObject_2(GameObject_t4012695102 * value)
	{
		___TextObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___TextObject_2, value);
	}

	inline static int32_t get_offset_of__statusText_3() { return static_cast<int32_t>(offsetof(TextTest_t3355968383, ____statusText_3)); }
	inline TextMesh_t583678247 * get__statusText_3() const { return ____statusText_3; }
	inline TextMesh_t583678247 ** get_address_of__statusText_3() { return &____statusText_3; }
	inline void set__statusText_3(TextMesh_t583678247 * value)
	{
		____statusText_3 = value;
		Il2CppCodeGenWriteBarrier(&____statusText_3, value);
	}

	inline static int32_t get_offset_of__refTime_4() { return static_cast<int32_t>(offsetof(TextTest_t3355968383, ____refTime_4)); }
	inline DateTime_t339033936  get__refTime_4() const { return ____refTime_4; }
	inline DateTime_t339033936 * get_address_of__refTime_4() { return &____refTime_4; }
	inline void set__refTime_4(DateTime_t339033936  value)
	{
		____refTime_4 = value;
	}

	inline static int32_t get_offset_of__testNum_5() { return static_cast<int32_t>(offsetof(TextTest_t3355968383, ____testNum_5)); }
	inline int32_t get__testNum_5() const { return ____testNum_5; }
	inline int32_t* get_address_of__testNum_5() { return &____testNum_5; }
	inline void set__testNum_5(int32_t value)
	{
		____testNum_5 = value;
	}

	inline static int32_t get_offset_of__tester_6() { return static_cast<int32_t>(offsetof(TextTest_t3355968383, ____tester_6)); }
	inline JsonTestScript_t2619432741 * get__tester_6() const { return ____tester_6; }
	inline JsonTestScript_t2619432741 ** get_address_of__tester_6() { return &____tester_6; }
	inline void set__tester_6(JsonTestScript_t2619432741 * value)
	{
		____tester_6 = value;
		Il2CppCodeGenWriteBarrier(&____tester_6, value);
	}

	inline static int32_t get_offset_of__complete_7() { return static_cast<int32_t>(offsetof(TextTest_t3355968383, ____complete_7)); }
	inline bool get__complete_7() const { return ____complete_7; }
	inline bool* get_address_of__complete_7() { return &____complete_7; }
	inline void set__complete_7(bool value)
	{
		____complete_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
