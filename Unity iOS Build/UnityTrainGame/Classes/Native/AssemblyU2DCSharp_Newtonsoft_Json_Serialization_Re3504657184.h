#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.ResolverContractKey
struct  ResolverContractKey_t3504657184 
{
public:
	// System.Type Newtonsoft.Json.Serialization.ResolverContractKey::_resolverType
	Type_t * ____resolverType_0;
	// System.Type Newtonsoft.Json.Serialization.ResolverContractKey::_contractType
	Type_t * ____contractType_1;

public:
	inline static int32_t get_offset_of__resolverType_0() { return static_cast<int32_t>(offsetof(ResolverContractKey_t3504657184, ____resolverType_0)); }
	inline Type_t * get__resolverType_0() const { return ____resolverType_0; }
	inline Type_t ** get_address_of__resolverType_0() { return &____resolverType_0; }
	inline void set__resolverType_0(Type_t * value)
	{
		____resolverType_0 = value;
		Il2CppCodeGenWriteBarrier(&____resolverType_0, value);
	}

	inline static int32_t get_offset_of__contractType_1() { return static_cast<int32_t>(offsetof(ResolverContractKey_t3504657184, ____contractType_1)); }
	inline Type_t * get__contractType_1() const { return ____contractType_1; }
	inline Type_t ** get_address_of__contractType_1() { return &____contractType_1; }
	inline void set__contractType_1(Type_t * value)
	{
		____contractType_1 = value;
		Il2CppCodeGenWriteBarrier(&____contractType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
