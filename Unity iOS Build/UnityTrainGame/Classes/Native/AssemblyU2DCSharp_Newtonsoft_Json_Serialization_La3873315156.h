#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.LateBoundMetadataTypeAttribute
struct  LateBoundMetadataTypeAttribute_t3873315156  : public Il2CppObject
{
public:
	// System.Object Newtonsoft.Json.Serialization.LateBoundMetadataTypeAttribute::_attribute
	Il2CppObject * ____attribute_1;

public:
	inline static int32_t get_offset_of__attribute_1() { return static_cast<int32_t>(offsetof(LateBoundMetadataTypeAttribute_t3873315156, ____attribute_1)); }
	inline Il2CppObject * get__attribute_1() const { return ____attribute_1; }
	inline Il2CppObject ** get_address_of__attribute_1() { return &____attribute_1; }
	inline void set__attribute_1(Il2CppObject * value)
	{
		____attribute_1 = value;
		Il2CppCodeGenWriteBarrier(&____attribute_1, value);
	}
};

struct LateBoundMetadataTypeAttribute_t3873315156_StaticFields
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Serialization.LateBoundMetadataTypeAttribute::_metadataClassTypeProperty
	PropertyInfo_t * ____metadataClassTypeProperty_0;

public:
	inline static int32_t get_offset_of__metadataClassTypeProperty_0() { return static_cast<int32_t>(offsetof(LateBoundMetadataTypeAttribute_t3873315156_StaticFields, ____metadataClassTypeProperty_0)); }
	inline PropertyInfo_t * get__metadataClassTypeProperty_0() const { return ____metadataClassTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of__metadataClassTypeProperty_0() { return &____metadataClassTypeProperty_0; }
	inline void set__metadataClassTypeProperty_0(PropertyInfo_t * value)
	{
		____metadataClassTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier(&____metadataClassTypeProperty_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
