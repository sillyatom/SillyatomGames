#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JContainer
struct JContainer_t103968846;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2977046061;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JToken
struct  JToken_t2367600838  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t103968846 * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t2367600838 * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t2367600838 * ____next_2;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Linq.JToken::_lineNumber
	Nullable_1_t1438485399  ____lineNumber_4;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Linq.JToken::_linePosition
	Nullable_1_t1438485399  ____linePosition_5;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_t2367600838, ____parent_0)); }
	inline JContainer_t103968846 * get__parent_0() const { return ____parent_0; }
	inline JContainer_t103968846 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t103968846 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier(&____parent_0, value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_t2367600838, ____previous_1)); }
	inline JToken_t2367600838 * get__previous_1() const { return ____previous_1; }
	inline JToken_t2367600838 ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_t2367600838 * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier(&____previous_1, value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_t2367600838, ____next_2)); }
	inline JToken_t2367600838 * get__next_2() const { return ____next_2; }
	inline JToken_t2367600838 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_t2367600838 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier(&____next_2, value);
	}

	inline static int32_t get_offset_of__lineNumber_4() { return static_cast<int32_t>(offsetof(JToken_t2367600838, ____lineNumber_4)); }
	inline Nullable_1_t1438485399  get__lineNumber_4() const { return ____lineNumber_4; }
	inline Nullable_1_t1438485399 * get_address_of__lineNumber_4() { return &____lineNumber_4; }
	inline void set__lineNumber_4(Nullable_1_t1438485399  value)
	{
		____lineNumber_4 = value;
	}

	inline static int32_t get_offset_of__linePosition_5() { return static_cast<int32_t>(offsetof(JToken_t2367600838, ____linePosition_5)); }
	inline Nullable_1_t1438485399  get__linePosition_5() const { return ____linePosition_5; }
	inline Nullable_1_t1438485399 * get_address_of__linePosition_5() { return &____linePosition_5; }
	inline void set__linePosition_5(Nullable_1_t1438485399  value)
	{
		____linePosition_5 = value;
	}
};

struct JToken_t2367600838_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2977046061 * ____equalityComparer_3;

public:
	inline static int32_t get_offset_of__equalityComparer_3() { return static_cast<int32_t>(offsetof(JToken_t2367600838_StaticFields, ____equalityComparer_3)); }
	inline JTokenEqualityComparer_t2977046061 * get__equalityComparer_3() const { return ____equalityComparer_3; }
	inline JTokenEqualityComparer_t2977046061 ** get_address_of__equalityComparer_3() { return &____equalityComparer_3; }
	inline void set__equalityComparer_3(JTokenEqualityComparer_t2977046061 * value)
	{
		____equalityComparer_3 = value;
		Il2CppCodeGenWriteBarrier(&____equalityComparer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
