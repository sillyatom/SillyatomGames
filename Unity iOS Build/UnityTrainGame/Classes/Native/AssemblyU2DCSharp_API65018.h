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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// API
struct  API_t65019  : public Il2CppObject
{
public:
	// System.Int32 API::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// System.Int32 API::<api>k__BackingField
	int32_t ___U3CapiU3Ek__BackingField_1;
	// System.String API::<data>k__BackingField
	String_t* ___U3CdataU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> API::<playerIds>k__BackingField
	List_1_t1765447871 * ___U3CplayerIdsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(API_t65019, ___U3CidU3Ek__BackingField_0)); }
	inline int32_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int32_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CapiU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(API_t65019, ___U3CapiU3Ek__BackingField_1)); }
	inline int32_t get_U3CapiU3Ek__BackingField_1() const { return ___U3CapiU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CapiU3Ek__BackingField_1() { return &___U3CapiU3Ek__BackingField_1; }
	inline void set_U3CapiU3Ek__BackingField_1(int32_t value)
	{
		___U3CapiU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(API_t65019, ___U3CdataU3Ek__BackingField_2)); }
	inline String_t* get_U3CdataU3Ek__BackingField_2() const { return ___U3CdataU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CdataU3Ek__BackingField_2() { return &___U3CdataU3Ek__BackingField_2; }
	inline void set_U3CdataU3Ek__BackingField_2(String_t* value)
	{
		___U3CdataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdataU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CplayerIdsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(API_t65019, ___U3CplayerIdsU3Ek__BackingField_3)); }
	inline List_1_t1765447871 * get_U3CplayerIdsU3Ek__BackingField_3() const { return ___U3CplayerIdsU3Ek__BackingField_3; }
	inline List_1_t1765447871 ** get_address_of_U3CplayerIdsU3Ek__BackingField_3() { return &___U3CplayerIdsU3Ek__BackingField_3; }
	inline void set_U3CplayerIdsU3Ek__BackingField_3(List_1_t1765447871 * value)
	{
		___U3CplayerIdsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerIdsU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
