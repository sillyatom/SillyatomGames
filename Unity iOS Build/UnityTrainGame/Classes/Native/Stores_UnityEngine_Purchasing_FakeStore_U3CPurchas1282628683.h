#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t915591705;
// UnityEngine.Purchasing.FakeStore
struct FakeStore_t1687580931;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.FakeStore/<Purchase>c__AnonStorey1
struct  U3CPurchaseU3Ec__AnonStorey1_t1282628683  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.FakeStore/<Purchase>c__AnonStorey1::product
	ProductDefinition_t915591705 * ___product_0;
	// UnityEngine.Purchasing.FakeStore UnityEngine.Purchasing.FakeStore/<Purchase>c__AnonStorey1::$this
	FakeStore_t1687580931 * ___U24this_1;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CPurchaseU3Ec__AnonStorey1_t1282628683, ___product_0)); }
	inline ProductDefinition_t915591705 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_t915591705 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_t915591705 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier(&___product_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CPurchaseU3Ec__AnonStorey1_t1282628683, ___U24this_1)); }
	inline FakeStore_t1687580931 * get_U24this_1() const { return ___U24this_1; }
	inline FakeStore_t1687580931 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FakeStore_t1687580931 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
