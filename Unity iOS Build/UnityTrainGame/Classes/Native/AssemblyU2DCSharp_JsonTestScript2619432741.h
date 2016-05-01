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
// UnityEngine.TextMesh
struct TextMesh_t583678247;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JsonTestScript
struct  JsonTestScript_t2619432741  : public Il2CppObject
{
public:
	// UnityEngine.TextMesh JsonTestScript::_text
	TextMesh_t583678247 * ____text_1;

public:
	inline static int32_t get_offset_of__text_1() { return static_cast<int32_t>(offsetof(JsonTestScript_t2619432741, ____text_1)); }
	inline TextMesh_t583678247 * get__text_1() const { return ____text_1; }
	inline TextMesh_t583678247 ** get_address_of__text_1() { return &____text_1; }
	inline void set__text_1(TextMesh_t583678247 * value)
	{
		____text_1 = value;
		Il2CppCodeGenWriteBarrier(&____text_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
