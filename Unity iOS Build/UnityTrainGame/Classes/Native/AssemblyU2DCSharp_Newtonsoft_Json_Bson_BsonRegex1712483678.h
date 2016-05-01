#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3246530440;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonToken1714632464.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonRegex
struct  BsonRegex_t1712483678  : public BsonToken_t1714632464
{
public:
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Pattern>k__BackingField
	BsonString_t3246530440 * ___U3CPatternU3Ek__BackingField_2;
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Options>k__BackingField
	BsonString_t3246530440 * ___U3COptionsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPatternU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BsonRegex_t1712483678, ___U3CPatternU3Ek__BackingField_2)); }
	inline BsonString_t3246530440 * get_U3CPatternU3Ek__BackingField_2() const { return ___U3CPatternU3Ek__BackingField_2; }
	inline BsonString_t3246530440 ** get_address_of_U3CPatternU3Ek__BackingField_2() { return &___U3CPatternU3Ek__BackingField_2; }
	inline void set_U3CPatternU3Ek__BackingField_2(BsonString_t3246530440 * value)
	{
		___U3CPatternU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPatternU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BsonRegex_t1712483678, ___U3COptionsU3Ek__BackingField_3)); }
	inline BsonString_t3246530440 * get_U3COptionsU3Ek__BackingField_3() const { return ___U3COptionsU3Ek__BackingField_3; }
	inline BsonString_t3246530440 ** get_address_of_U3COptionsU3Ek__BackingField_3() { return &___U3COptionsU3Ek__BackingField_3; }
	inline void set_U3COptionsU3Ek__BackingField_3(BsonString_t3246530440 * value)
	{
		___U3COptionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3COptionsU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
