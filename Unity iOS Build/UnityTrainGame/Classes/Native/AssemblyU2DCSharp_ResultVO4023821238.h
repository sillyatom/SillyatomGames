#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Card>
struct List_1_t799051817;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultVO
struct  ResultVO_t4023821238  : public Il2CppObject
{
public:
	// System.Int32 ResultVO::<count>k__BackingField
	int32_t ___U3CcountU3Ek__BackingField_0;
	// System.Int32 ResultVO::<startIndex>k__BackingField
	int32_t ___U3CstartIndexU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Card> ResultVO::<cards>k__BackingField
	List_1_t799051817 * ___U3CcardsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CcountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResultVO_t4023821238, ___U3CcountU3Ek__BackingField_0)); }
	inline int32_t get_U3CcountU3Ek__BackingField_0() const { return ___U3CcountU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CcountU3Ek__BackingField_0() { return &___U3CcountU3Ek__BackingField_0; }
	inline void set_U3CcountU3Ek__BackingField_0(int32_t value)
	{
		___U3CcountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CstartIndexU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResultVO_t4023821238, ___U3CstartIndexU3Ek__BackingField_1)); }
	inline int32_t get_U3CstartIndexU3Ek__BackingField_1() const { return ___U3CstartIndexU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CstartIndexU3Ek__BackingField_1() { return &___U3CstartIndexU3Ek__BackingField_1; }
	inline void set_U3CstartIndexU3Ek__BackingField_1(int32_t value)
	{
		___U3CstartIndexU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CcardsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResultVO_t4023821238, ___U3CcardsU3Ek__BackingField_2)); }
	inline List_1_t799051817 * get_U3CcardsU3Ek__BackingField_2() const { return ___U3CcardsU3Ek__BackingField_2; }
	inline List_1_t799051817 ** get_address_of_U3CcardsU3Ek__BackingField_2() { return &___U3CcardsU3Ek__BackingField_2; }
	inline void set_U3CcardsU3Ek__BackingField_2(List_1_t799051817 * value)
	{
		___U3CcardsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcardsU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
