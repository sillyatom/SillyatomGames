#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t922188920;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.DustinHorne.JsonDotNetUnity.TestCases.TestCaseUtils
struct  TestCaseUtils_t4062143337  : public Il2CppObject
{
public:

public:
};

struct TestCaseUtils_t4062143337_StaticFields
{
public:
	// System.Random Assets.DustinHorne.JsonDotNetUnity.TestCases.TestCaseUtils::_rnd
	Random_t922188920 * ____rnd_0;

public:
	inline static int32_t get_offset_of__rnd_0() { return static_cast<int32_t>(offsetof(TestCaseUtils_t4062143337_StaticFields, ____rnd_0)); }
	inline Random_t922188920 * get__rnd_0() const { return ____rnd_0; }
	inline Random_t922188920 ** get_address_of__rnd_0() { return &____rnd_0; }
	inline void set__rnd_0(Random_t922188920 * value)
	{
		____rnd_0 = value;
		Il2CppCodeGenWriteBarrier(&____rnd_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
