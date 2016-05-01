#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Collections.Generic.IDictionary`2<System.Object,System.String>
struct IDictionary_2_t836506123;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct  BidirectionalDictionary_2_t2587161411  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<TFirst,TSecond> Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_firstToSecond
	Il2CppObject* ____firstToSecond_0;
	// System.Collections.Generic.IDictionary`2<TSecond,TFirst> Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_secondToFirst
	Il2CppObject* ____secondToFirst_1;

public:
	inline static int32_t get_offset_of__firstToSecond_0() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t2587161411, ____firstToSecond_0)); }
	inline Il2CppObject* get__firstToSecond_0() const { return ____firstToSecond_0; }
	inline Il2CppObject** get_address_of__firstToSecond_0() { return &____firstToSecond_0; }
	inline void set__firstToSecond_0(Il2CppObject* value)
	{
		____firstToSecond_0 = value;
		Il2CppCodeGenWriteBarrier(&____firstToSecond_0, value);
	}

	inline static int32_t get_offset_of__secondToFirst_1() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t2587161411, ____secondToFirst_1)); }
	inline Il2CppObject* get__secondToFirst_1() const { return ____secondToFirst_1; }
	inline Il2CppObject** get_address_of__secondToFirst_1() { return &____secondToFirst_1; }
	inline void set__secondToFirst_1(Il2CppObject* value)
	{
		____secondToFirst_1 = value;
		Il2CppCodeGenWriteBarrier(&____secondToFirst_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
