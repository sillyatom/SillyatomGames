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
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JPath
struct  JPath_t238875782  : public Il2CppObject
{
public:
	// System.String Newtonsoft.Json.Linq.JPath::_expression
	String_t* ____expression_0;
	// System.Int32 Newtonsoft.Json.Linq.JPath::_currentIndex
	int32_t ____currentIndex_1;
	// System.Collections.Generic.List`1<System.Object> Newtonsoft.Json.Linq.JPath::<Parts>k__BackingField
	List_1_t1634065389 * ___U3CPartsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__expression_0() { return static_cast<int32_t>(offsetof(JPath_t238875782, ____expression_0)); }
	inline String_t* get__expression_0() const { return ____expression_0; }
	inline String_t** get_address_of__expression_0() { return &____expression_0; }
	inline void set__expression_0(String_t* value)
	{
		____expression_0 = value;
		Il2CppCodeGenWriteBarrier(&____expression_0, value);
	}

	inline static int32_t get_offset_of__currentIndex_1() { return static_cast<int32_t>(offsetof(JPath_t238875782, ____currentIndex_1)); }
	inline int32_t get__currentIndex_1() const { return ____currentIndex_1; }
	inline int32_t* get_address_of__currentIndex_1() { return &____currentIndex_1; }
	inline void set__currentIndex_1(int32_t value)
	{
		____currentIndex_1 = value;
	}

	inline static int32_t get_offset_of_U3CPartsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JPath_t238875782, ___U3CPartsU3Ek__BackingField_2)); }
	inline List_1_t1634065389 * get_U3CPartsU3Ek__BackingField_2() const { return ___U3CPartsU3Ek__BackingField_2; }
	inline List_1_t1634065389 ** get_address_of_U3CPartsU3Ek__BackingField_2() { return &___U3CPartsU3Ek__BackingField_2; }
	inline void set_U3CPartsU3Ek__BackingField_2(List_1_t1634065389 * value)
	{
		___U3CPartsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPartsU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
