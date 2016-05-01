#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t2629456141;
// Newtonsoft.Json.Serialization.JsonFormatterConverter
struct JsonFormatterConverter_t3202368087;
// System.Func`2<System.Reflection.ParameterInfo,System.Reflection.ParameterInfo>
struct Func_2_t729921492;
// System.Func`2<System.Reflection.ParameterInfo,System.Object>
struct Func_2_t3251721379;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Reflection.ParameterInfo,System.Object>,System.String>
struct Func_2_t1697540151;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_t1588144240;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Func_2_t2399039562;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1092275265.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct  JsonSerializerInternalReader_t1638952051  : public JsonSerializerInternalBase_t1092275265
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalReader::_internalSerializer
	JsonSerializerProxy_t2629456141 * ____internalSerializer_3;
	// Newtonsoft.Json.Serialization.JsonFormatterConverter Newtonsoft.Json.Serialization.JsonSerializerInternalReader::_formatterConverter
	JsonFormatterConverter_t3202368087 * ____formatterConverter_4;

public:
	inline static int32_t get_offset_of__internalSerializer_3() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t1638952051, ____internalSerializer_3)); }
	inline JsonSerializerProxy_t2629456141 * get__internalSerializer_3() const { return ____internalSerializer_3; }
	inline JsonSerializerProxy_t2629456141 ** get_address_of__internalSerializer_3() { return &____internalSerializer_3; }
	inline void set__internalSerializer_3(JsonSerializerProxy_t2629456141 * value)
	{
		____internalSerializer_3 = value;
		Il2CppCodeGenWriteBarrier(&____internalSerializer_3, value);
	}

	inline static int32_t get_offset_of__formatterConverter_4() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t1638952051, ____formatterConverter_4)); }
	inline JsonFormatterConverter_t3202368087 * get__formatterConverter_4() const { return ____formatterConverter_4; }
	inline JsonFormatterConverter_t3202368087 ** get_address_of__formatterConverter_4() { return &____formatterConverter_4; }
	inline void set__formatterConverter_4(JsonFormatterConverter_t3202368087 * value)
	{
		____formatterConverter_4 = value;
		Il2CppCodeGenWriteBarrier(&____formatterConverter_4, value);
	}
};

struct JsonSerializerInternalReader_t1638952051_StaticFields
{
public:
	// System.Func`2<System.Reflection.ParameterInfo,System.Reflection.ParameterInfo> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>f__am$cache2
	Func_2_t729921492 * ___U3CU3Ef__amU24cache2_5;
	// System.Func`2<System.Reflection.ParameterInfo,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>f__am$cache3
	Func_2_t3251721379 * ___U3CU3Ef__amU24cache3_6;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Reflection.ParameterInfo,System.Object>,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>f__am$cache4
	Func_2_t1697540151 * ___U3CU3Ef__amU24cache4_7;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>f__am$cache5
	Func_2_t1588144240 * ___U3CU3Ef__amU24cache5_8;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>f__am$cache6
	Func_2_t2399039562 * ___U3CU3Ef__amU24cache6_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_5() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t1638952051_StaticFields, ___U3CU3Ef__amU24cache2_5)); }
	inline Func_2_t729921492 * get_U3CU3Ef__amU24cache2_5() const { return ___U3CU3Ef__amU24cache2_5; }
	inline Func_2_t729921492 ** get_address_of_U3CU3Ef__amU24cache2_5() { return &___U3CU3Ef__amU24cache2_5; }
	inline void set_U3CU3Ef__amU24cache2_5(Func_2_t729921492 * value)
	{
		___U3CU3Ef__amU24cache2_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_6() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t1638952051_StaticFields, ___U3CU3Ef__amU24cache3_6)); }
	inline Func_2_t3251721379 * get_U3CU3Ef__amU24cache3_6() const { return ___U3CU3Ef__amU24cache3_6; }
	inline Func_2_t3251721379 ** get_address_of_U3CU3Ef__amU24cache3_6() { return &___U3CU3Ef__amU24cache3_6; }
	inline void set_U3CU3Ef__amU24cache3_6(Func_2_t3251721379 * value)
	{
		___U3CU3Ef__amU24cache3_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_7() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t1638952051_StaticFields, ___U3CU3Ef__amU24cache4_7)); }
	inline Func_2_t1697540151 * get_U3CU3Ef__amU24cache4_7() const { return ___U3CU3Ef__amU24cache4_7; }
	inline Func_2_t1697540151 ** get_address_of_U3CU3Ef__amU24cache4_7() { return &___U3CU3Ef__amU24cache4_7; }
	inline void set_U3CU3Ef__amU24cache4_7(Func_2_t1697540151 * value)
	{
		___U3CU3Ef__amU24cache4_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_8() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t1638952051_StaticFields, ___U3CU3Ef__amU24cache5_8)); }
	inline Func_2_t1588144240 * get_U3CU3Ef__amU24cache5_8() const { return ___U3CU3Ef__amU24cache5_8; }
	inline Func_2_t1588144240 ** get_address_of_U3CU3Ef__amU24cache5_8() { return &___U3CU3Ef__amU24cache5_8; }
	inline void set_U3CU3Ef__amU24cache5_8(Func_2_t1588144240 * value)
	{
		___U3CU3Ef__amU24cache5_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_9() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t1638952051_StaticFields, ___U3CU3Ef__amU24cache6_9)); }
	inline Func_2_t2399039562 * get_U3CU3Ef__amU24cache6_9() const { return ___U3CU3Ef__amU24cache6_9; }
	inline Func_2_t2399039562 ** get_address_of_U3CU3Ef__amU24cache6_9() { return &___U3CU3Ef__amU24cache6_9; }
	inline void set_U3CU3Ef__amU24cache6_9(Func_2_t2399039562 * value)
	{
		___U3CU3Ef__amU24cache6_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
