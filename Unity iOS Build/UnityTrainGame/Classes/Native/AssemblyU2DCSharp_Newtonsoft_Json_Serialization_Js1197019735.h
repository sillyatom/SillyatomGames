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
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Reflection.ICustomAttributeProvider,System.Type>
struct ThreadSafeStore_2_t398803882;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Type>
struct ThreadSafeStore_2_t994769476;
// System.Type
struct Type_t;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonTypeReflector
struct  JsonTypeReflector_t1197019735  : public Il2CppObject
{
public:

public:
};

struct JsonTypeReflector_t1197019735_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Reflection.ICustomAttributeProvider,System.Type> Newtonsoft.Json.Serialization.JsonTypeReflector::JsonConverterTypeCache
	ThreadSafeStore_2_t398803882 * ___JsonConverterTypeCache_8;
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Type> Newtonsoft.Json.Serialization.JsonTypeReflector::AssociatedMetadataTypesCache
	ThreadSafeStore_2_t994769476 * ___AssociatedMetadataTypesCache_9;
	// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::_cachedMetadataTypeAttributeType
	Type_t * ____cachedMetadataTypeAttributeType_10;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonTypeReflector::_dynamicCodeGeneration
	Nullable_1_t3097043249  ____dynamicCodeGeneration_11;

public:
	inline static int32_t get_offset_of_JsonConverterTypeCache_8() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1197019735_StaticFields, ___JsonConverterTypeCache_8)); }
	inline ThreadSafeStore_2_t398803882 * get_JsonConverterTypeCache_8() const { return ___JsonConverterTypeCache_8; }
	inline ThreadSafeStore_2_t398803882 ** get_address_of_JsonConverterTypeCache_8() { return &___JsonConverterTypeCache_8; }
	inline void set_JsonConverterTypeCache_8(ThreadSafeStore_2_t398803882 * value)
	{
		___JsonConverterTypeCache_8 = value;
		Il2CppCodeGenWriteBarrier(&___JsonConverterTypeCache_8, value);
	}

	inline static int32_t get_offset_of_AssociatedMetadataTypesCache_9() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1197019735_StaticFields, ___AssociatedMetadataTypesCache_9)); }
	inline ThreadSafeStore_2_t994769476 * get_AssociatedMetadataTypesCache_9() const { return ___AssociatedMetadataTypesCache_9; }
	inline ThreadSafeStore_2_t994769476 ** get_address_of_AssociatedMetadataTypesCache_9() { return &___AssociatedMetadataTypesCache_9; }
	inline void set_AssociatedMetadataTypesCache_9(ThreadSafeStore_2_t994769476 * value)
	{
		___AssociatedMetadataTypesCache_9 = value;
		Il2CppCodeGenWriteBarrier(&___AssociatedMetadataTypesCache_9, value);
	}

	inline static int32_t get_offset_of__cachedMetadataTypeAttributeType_10() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1197019735_StaticFields, ____cachedMetadataTypeAttributeType_10)); }
	inline Type_t * get__cachedMetadataTypeAttributeType_10() const { return ____cachedMetadataTypeAttributeType_10; }
	inline Type_t ** get_address_of__cachedMetadataTypeAttributeType_10() { return &____cachedMetadataTypeAttributeType_10; }
	inline void set__cachedMetadataTypeAttributeType_10(Type_t * value)
	{
		____cachedMetadataTypeAttributeType_10 = value;
		Il2CppCodeGenWriteBarrier(&____cachedMetadataTypeAttributeType_10, value);
	}

	inline static int32_t get_offset_of__dynamicCodeGeneration_11() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1197019735_StaticFields, ____dynamicCodeGeneration_11)); }
	inline Nullable_1_t3097043249  get__dynamicCodeGeneration_11() const { return ____dynamicCodeGeneration_11; }
	inline Nullable_1_t3097043249 * get_address_of__dynamicCodeGeneration_11() { return &____dynamicCodeGeneration_11; }
	inline void set__dynamicCodeGeneration_11(Nullable_1_t3097043249  value)
	{
		____dynamicCodeGeneration_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
