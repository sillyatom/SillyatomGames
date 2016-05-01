#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JObject/JPropertKeyedCollection
struct JPropertKeyedCollection_t2657788322;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t2898121368;
// System.Func`2<Newtonsoft.Json.Linq.JProperty,Newtonsoft.Json.Linq.JToken>
struct Func_2_t292817920;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JContainer103968846.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JObject
struct  JObject_t3774284064  : public JContainer_t103968846
{
public:
	// Newtonsoft.Json.Linq.JObject/JPropertKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertKeyedCollection_t2657788322 * ____properties_8;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t2898121368 * ___PropertyChanged_9;

public:
	inline static int32_t get_offset_of__properties_8() { return static_cast<int32_t>(offsetof(JObject_t3774284064, ____properties_8)); }
	inline JPropertKeyedCollection_t2657788322 * get__properties_8() const { return ____properties_8; }
	inline JPropertKeyedCollection_t2657788322 ** get_address_of__properties_8() { return &____properties_8; }
	inline void set__properties_8(JPropertKeyedCollection_t2657788322 * value)
	{
		____properties_8 = value;
		Il2CppCodeGenWriteBarrier(&____properties_8, value);
	}

	inline static int32_t get_offset_of_PropertyChanged_9() { return static_cast<int32_t>(offsetof(JObject_t3774284064, ___PropertyChanged_9)); }
	inline PropertyChangedEventHandler_t2898121368 * get_PropertyChanged_9() const { return ___PropertyChanged_9; }
	inline PropertyChangedEventHandler_t2898121368 ** get_address_of_PropertyChanged_9() { return &___PropertyChanged_9; }
	inline void set_PropertyChanged_9(PropertyChangedEventHandler_t2898121368 * value)
	{
		___PropertyChanged_9 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyChanged_9, value);
	}
};

struct JObject_t3774284064_StaticFields
{
public:
	// System.Func`2<Newtonsoft.Json.Linq.JProperty,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject::<>f__am$cache2
	Func_2_t292817920 * ___U3CU3Ef__amU24cache2_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_10() { return static_cast<int32_t>(offsetof(JObject_t3774284064_StaticFields, ___U3CU3Ef__amU24cache2_10)); }
	inline Func_2_t292817920 * get_U3CU3Ef__amU24cache2_10() const { return ___U3CU3Ef__amU24cache2_10; }
	inline Func_2_t292817920 ** get_address_of_U3CU3Ef__amU24cache2_10() { return &___U3CU3Ef__amU24cache2_10; }
	inline void set_U3CU3Ef__amU24cache2_10(Func_2_t292817920 * value)
	{
		___U3CU3Ef__amU24cache2_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
