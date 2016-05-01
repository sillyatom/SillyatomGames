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
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1092275265.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct  JsonSerializerInternalWriter_t1794357283  : public JsonSerializerInternalBase_t1092275265
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::_internalSerializer
	JsonSerializerProxy_t2629456141 * ____internalSerializer_3;
	// System.Collections.Generic.List`1<System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::_serializeStack
	List_1_t1634065389 * ____serializeStack_4;

public:
	inline static int32_t get_offset_of__internalSerializer_3() { return static_cast<int32_t>(offsetof(JsonSerializerInternalWriter_t1794357283, ____internalSerializer_3)); }
	inline JsonSerializerProxy_t2629456141 * get__internalSerializer_3() const { return ____internalSerializer_3; }
	inline JsonSerializerProxy_t2629456141 ** get_address_of__internalSerializer_3() { return &____internalSerializer_3; }
	inline void set__internalSerializer_3(JsonSerializerProxy_t2629456141 * value)
	{
		____internalSerializer_3 = value;
		Il2CppCodeGenWriteBarrier(&____internalSerializer_3, value);
	}

	inline static int32_t get_offset_of__serializeStack_4() { return static_cast<int32_t>(offsetof(JsonSerializerInternalWriter_t1794357283, ____serializeStack_4)); }
	inline List_1_t1634065389 * get__serializeStack_4() const { return ____serializeStack_4; }
	inline List_1_t1634065389 ** get_address_of__serializeStack_4() { return &____serializeStack_4; }
	inline void set__serializeStack_4(List_1_t1634065389 * value)
	{
		____serializeStack_4 = value;
		Il2CppCodeGenWriteBarrier(&____serializeStack_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
