#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.Extension.IStoreConfiguration>
struct Dictionary_2_t1107564931;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.Purchasing.Extension.IStoreConfiguration>
struct  KeyCollection_t3430840211  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t1107564931 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3430840211, ___dictionary_0)); }
	inline Dictionary_2_t1107564931 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1107564931 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1107564931 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___dictionary_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
