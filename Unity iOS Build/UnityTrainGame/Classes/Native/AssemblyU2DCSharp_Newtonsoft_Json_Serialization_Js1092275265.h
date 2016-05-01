#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct BidirectionalDictionary_2_t2587161411;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerInternalBase
struct  JsonSerializerInternalBase_t1092275265  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Serialization.ErrorContext Newtonsoft.Json.Serialization.JsonSerializerInternalBase::_currentErrorContext
	ErrorContext_t957583840 * ____currentErrorContext_0;
	// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalBase::_mappings
	BidirectionalDictionary_2_t2587161411 * ____mappings_1;
	// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.Serialization.JsonSerializerInternalBase::<Serializer>k__BackingField
	JsonSerializer_t4019458909 * ___U3CSerializerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__currentErrorContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t1092275265, ____currentErrorContext_0)); }
	inline ErrorContext_t957583840 * get__currentErrorContext_0() const { return ____currentErrorContext_0; }
	inline ErrorContext_t957583840 ** get_address_of__currentErrorContext_0() { return &____currentErrorContext_0; }
	inline void set__currentErrorContext_0(ErrorContext_t957583840 * value)
	{
		____currentErrorContext_0 = value;
		Il2CppCodeGenWriteBarrier(&____currentErrorContext_0, value);
	}

	inline static int32_t get_offset_of__mappings_1() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t1092275265, ____mappings_1)); }
	inline BidirectionalDictionary_2_t2587161411 * get__mappings_1() const { return ____mappings_1; }
	inline BidirectionalDictionary_2_t2587161411 ** get_address_of__mappings_1() { return &____mappings_1; }
	inline void set__mappings_1(BidirectionalDictionary_2_t2587161411 * value)
	{
		____mappings_1 = value;
		Il2CppCodeGenWriteBarrier(&____mappings_1, value);
	}

	inline static int32_t get_offset_of_U3CSerializerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t1092275265, ___U3CSerializerU3Ek__BackingField_2)); }
	inline JsonSerializer_t4019458909 * get_U3CSerializerU3Ek__BackingField_2() const { return ___U3CSerializerU3Ek__BackingField_2; }
	inline JsonSerializer_t4019458909 ** get_address_of_U3CSerializerU3Ek__BackingField_2() { return &___U3CSerializerU3Ek__BackingField_2; }
	inline void set_U3CSerializerU3Ek__BackingField_2(JsonSerializer_t4019458909 * value)
	{
		___U3CSerializerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSerializerU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
