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
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.CollectionUtils/<CreateCollectionWrapper>c__AnonStorey1B
struct  U3CCreateCollectionWrapperU3Ec__AnonStorey1B_t420883095  : public Il2CppObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.CollectionUtils/<CreateCollectionWrapper>c__AnonStorey1B::collectionDefinition
	Type_t * ___collectionDefinition_0;
	// System.Object Newtonsoft.Json.Utilities.CollectionUtils/<CreateCollectionWrapper>c__AnonStorey1B::list
	Il2CppObject * ___list_1;

public:
	inline static int32_t get_offset_of_collectionDefinition_0() { return static_cast<int32_t>(offsetof(U3CCreateCollectionWrapperU3Ec__AnonStorey1B_t420883095, ___collectionDefinition_0)); }
	inline Type_t * get_collectionDefinition_0() const { return ___collectionDefinition_0; }
	inline Type_t ** get_address_of_collectionDefinition_0() { return &___collectionDefinition_0; }
	inline void set_collectionDefinition_0(Type_t * value)
	{
		___collectionDefinition_0 = value;
		Il2CppCodeGenWriteBarrier(&___collectionDefinition_0, value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(U3CCreateCollectionWrapperU3Ec__AnonStorey1B_t420883095, ___list_1)); }
	inline Il2CppObject * get_list_1() const { return ___list_1; }
	inline Il2CppObject ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(Il2CppObject * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier(&___list_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
