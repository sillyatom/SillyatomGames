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

// Newtonsoft.Json.Utilities.CollectionUtils/<CreateDictionaryWrapper>c__AnonStorey1D
struct  U3CCreateDictionaryWrapperU3Ec__AnonStorey1D_t2550116769  : public Il2CppObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.CollectionUtils/<CreateDictionaryWrapper>c__AnonStorey1D::dictionaryDefinition
	Type_t * ___dictionaryDefinition_0;
	// System.Object Newtonsoft.Json.Utilities.CollectionUtils/<CreateDictionaryWrapper>c__AnonStorey1D::dictionary
	Il2CppObject * ___dictionary_1;

public:
	inline static int32_t get_offset_of_dictionaryDefinition_0() { return static_cast<int32_t>(offsetof(U3CCreateDictionaryWrapperU3Ec__AnonStorey1D_t2550116769, ___dictionaryDefinition_0)); }
	inline Type_t * get_dictionaryDefinition_0() const { return ___dictionaryDefinition_0; }
	inline Type_t ** get_address_of_dictionaryDefinition_0() { return &___dictionaryDefinition_0; }
	inline void set_dictionaryDefinition_0(Type_t * value)
	{
		___dictionaryDefinition_0 = value;
		Il2CppCodeGenWriteBarrier(&___dictionaryDefinition_0, value);
	}

	inline static int32_t get_offset_of_dictionary_1() { return static_cast<int32_t>(offsetof(U3CCreateDictionaryWrapperU3Ec__AnonStorey1D_t2550116769, ___dictionary_1)); }
	inline Il2CppObject * get_dictionary_1() const { return ___dictionary_1; }
	inline Il2CppObject ** get_address_of_dictionary_1() { return &___dictionary_1; }
	inline void set_dictionary_1(Il2CppObject * value)
	{
		___dictionary_1 = value;
		Il2CppCodeGenWriteBarrier(&___dictionary_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
