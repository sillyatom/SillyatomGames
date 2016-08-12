#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled_pinvoke;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGameInfoText
struct  InGameInfoText_t36852466  : public ExtMonoBehaviour_t2624599193
{
public:
	// UnityEngine.UI.Text InGameInfoText::text
	Text_t3286458198 * ___text_3;
	// UnityEngine.Coroutine InGameInfoText::_removeCoroutine
	Coroutine_t2246592261 * ____removeCoroutine_4;

public:
	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(InGameInfoText_t36852466, ___text_3)); }
	inline Text_t3286458198 * get_text_3() const { return ___text_3; }
	inline Text_t3286458198 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(Text_t3286458198 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}

	inline static int32_t get_offset_of__removeCoroutine_4() { return static_cast<int32_t>(offsetof(InGameInfoText_t36852466, ____removeCoroutine_4)); }
	inline Coroutine_t2246592261 * get__removeCoroutine_4() const { return ____removeCoroutine_4; }
	inline Coroutine_t2246592261 ** get_address_of__removeCoroutine_4() { return &____removeCoroutine_4; }
	inline void set__removeCoroutine_4(Coroutine_t2246592261 * value)
	{
		____removeCoroutine_4 = value;
		Il2CppCodeGenWriteBarrier(&____removeCoroutine_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
