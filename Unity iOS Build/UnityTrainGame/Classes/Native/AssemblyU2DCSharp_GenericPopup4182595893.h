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

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GenericPopup
struct  GenericPopup_t4182595893  : public ExtMonoBehaviour_t2624599193
{
public:
	// UnityEngine.UI.Text GenericPopup::header
	Text_t3286458198 * ___header_3;
	// UnityEngine.UI.Text GenericPopup::body
	Text_t3286458198 * ___body_4;

public:
	inline static int32_t get_offset_of_header_3() { return static_cast<int32_t>(offsetof(GenericPopup_t4182595893, ___header_3)); }
	inline Text_t3286458198 * get_header_3() const { return ___header_3; }
	inline Text_t3286458198 ** get_address_of_header_3() { return &___header_3; }
	inline void set_header_3(Text_t3286458198 * value)
	{
		___header_3 = value;
		Il2CppCodeGenWriteBarrier(&___header_3, value);
	}

	inline static int32_t get_offset_of_body_4() { return static_cast<int32_t>(offsetof(GenericPopup_t4182595893, ___body_4)); }
	inline Text_t3286458198 * get_body_4() const { return ___body_4; }
	inline Text_t3286458198 ** get_address_of_body_4() { return &___body_4; }
	inline void set_body_4(Text_t3286458198 * value)
	{
		___body_4 = value;
		Il2CppCodeGenWriteBarrier(&___body_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
