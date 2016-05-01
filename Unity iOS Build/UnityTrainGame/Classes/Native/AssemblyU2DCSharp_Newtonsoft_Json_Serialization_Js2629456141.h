#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t1638952051;
// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t1794357283;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;

#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct  JsonSerializerProxy_t2629456141  : public JsonSerializer_t4019458909
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader Newtonsoft.Json.Serialization.JsonSerializerProxy::_serializerReader
	JsonSerializerInternalReader_t1638952051 * ____serializerReader_15;
	// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter Newtonsoft.Json.Serialization.JsonSerializerProxy::_serializerWriter
	JsonSerializerInternalWriter_t1794357283 * ____serializerWriter_16;
	// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.Serialization.JsonSerializerProxy::_serializer
	JsonSerializer_t4019458909 * ____serializer_17;

public:
	inline static int32_t get_offset_of__serializerReader_15() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t2629456141, ____serializerReader_15)); }
	inline JsonSerializerInternalReader_t1638952051 * get__serializerReader_15() const { return ____serializerReader_15; }
	inline JsonSerializerInternalReader_t1638952051 ** get_address_of__serializerReader_15() { return &____serializerReader_15; }
	inline void set__serializerReader_15(JsonSerializerInternalReader_t1638952051 * value)
	{
		____serializerReader_15 = value;
		Il2CppCodeGenWriteBarrier(&____serializerReader_15, value);
	}

	inline static int32_t get_offset_of__serializerWriter_16() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t2629456141, ____serializerWriter_16)); }
	inline JsonSerializerInternalWriter_t1794357283 * get__serializerWriter_16() const { return ____serializerWriter_16; }
	inline JsonSerializerInternalWriter_t1794357283 ** get_address_of__serializerWriter_16() { return &____serializerWriter_16; }
	inline void set__serializerWriter_16(JsonSerializerInternalWriter_t1794357283 * value)
	{
		____serializerWriter_16 = value;
		Il2CppCodeGenWriteBarrier(&____serializerWriter_16, value);
	}

	inline static int32_t get_offset_of__serializer_17() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t2629456141, ____serializer_17)); }
	inline JsonSerializer_t4019458909 * get__serializer_17() const { return ____serializer_17; }
	inline JsonSerializer_t4019458909 ** get_address_of__serializer_17() { return &____serializer_17; }
	inline void set__serializer_17(JsonSerializer_t4019458909 * value)
	{
		____serializer_17 = value;
		Il2CppCodeGenWriteBarrier(&____serializer_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
