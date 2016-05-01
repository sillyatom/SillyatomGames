#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Reflection.ICustomAttributeProvider,System.Runtime.Serialization.DataMemberAttribute>
struct ThreadSafeStore_2_t1245035948;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.CachedAttributeGetter`1<System.Runtime.Serialization.DataMemberAttribute>
struct  CachedAttributeGetter_1_t5109645  : public Il2CppObject
{
public:

public:
};

struct CachedAttributeGetter_1_t5109645_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Reflection.ICustomAttributeProvider,T> Newtonsoft.Json.Serialization.CachedAttributeGetter`1::TypeAttributeCache
	ThreadSafeStore_2_t1245035948 * ___TypeAttributeCache_0;

public:
	inline static int32_t get_offset_of_TypeAttributeCache_0() { return static_cast<int32_t>(offsetof(CachedAttributeGetter_1_t5109645_StaticFields, ___TypeAttributeCache_0)); }
	inline ThreadSafeStore_2_t1245035948 * get_TypeAttributeCache_0() const { return ___TypeAttributeCache_0; }
	inline ThreadSafeStore_2_t1245035948 ** get_address_of_TypeAttributeCache_0() { return &___TypeAttributeCache_0; }
	inline void set_TypeAttributeCache_0(ThreadSafeStore_2_t1245035948 * value)
	{
		___TypeAttributeCache_0 = value;
		Il2CppCodeGenWriteBarrier(&___TypeAttributeCache_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
