#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.DefaultSerializationBinder
struct DefaultSerializationBinder_t2071761170;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Type>
struct ThreadSafeStore_2_t3354643725;

#include "mscorlib_System_Runtime_Serialization_Serializatio3161036435.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.DefaultSerializationBinder
struct  DefaultSerializationBinder_t2071761170  : public SerializationBinder_t3161036435
{
public:
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Type> Newtonsoft.Json.Serialization.DefaultSerializationBinder::_typeCache
	ThreadSafeStore_2_t3354643725 * ____typeCache_1;

public:
	inline static int32_t get_offset_of__typeCache_1() { return static_cast<int32_t>(offsetof(DefaultSerializationBinder_t2071761170, ____typeCache_1)); }
	inline ThreadSafeStore_2_t3354643725 * get__typeCache_1() const { return ____typeCache_1; }
	inline ThreadSafeStore_2_t3354643725 ** get_address_of__typeCache_1() { return &____typeCache_1; }
	inline void set__typeCache_1(ThreadSafeStore_2_t3354643725 * value)
	{
		____typeCache_1 = value;
		Il2CppCodeGenWriteBarrier(&____typeCache_1, value);
	}
};

struct DefaultSerializationBinder_t2071761170_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.DefaultSerializationBinder Newtonsoft.Json.Serialization.DefaultSerializationBinder::Instance
	DefaultSerializationBinder_t2071761170 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(DefaultSerializationBinder_t2071761170_StaticFields, ___Instance_0)); }
	inline DefaultSerializationBinder_t2071761170 * get_Instance_0() const { return ___Instance_0; }
	inline DefaultSerializationBinder_t2071761170 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(DefaultSerializationBinder_t2071761170 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
