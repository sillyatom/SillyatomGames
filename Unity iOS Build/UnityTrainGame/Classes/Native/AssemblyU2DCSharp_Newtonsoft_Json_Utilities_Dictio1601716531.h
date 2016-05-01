#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t501095600;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.DictionaryWrapper`2/DictionaryEnumerator`2<System.Object,System.Object,System.Object,System.Object>
struct  DictionaryEnumerator_2_t1601716531 
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TEnumeratorKey,TEnumeratorValue>> Newtonsoft.Json.Utilities.DictionaryWrapper`2/DictionaryEnumerator`2::_e
	Il2CppObject* ____e_0;

public:
	inline static int32_t get_offset_of__e_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_2_t1601716531, ____e_0)); }
	inline Il2CppObject* get__e_0() const { return ____e_0; }
	inline Il2CppObject** get_address_of__e_0() { return &____e_0; }
	inline void set__e_0(Il2CppObject* value)
	{
		____e_0 = value;
		Il2CppCodeGenWriteBarrier(&____e_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
