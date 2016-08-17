#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t1632130460;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t1638952051;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey19
struct  U3CCreateAndPopulateListU3Ec__AnonStorey19_t1236026520  : public Il2CppObject
{
public:
	// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey19::reference
	String_t* ___reference_0;
	// Newtonsoft.Json.Serialization.JsonArrayContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey19::contract
	JsonArrayContract_t1632130460 * ___contract_1;
	// Newtonsoft.Json.JsonReader Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey19::reader
	JsonReader_t1817561742 * ___reader_2;
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey19::<>f__this
	JsonSerializerInternalReader_t1638952051 * ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(U3CCreateAndPopulateListU3Ec__AnonStorey19_t1236026520, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier(&___reference_0, value);
	}

	inline static int32_t get_offset_of_contract_1() { return static_cast<int32_t>(offsetof(U3CCreateAndPopulateListU3Ec__AnonStorey19_t1236026520, ___contract_1)); }
	inline JsonArrayContract_t1632130460 * get_contract_1() const { return ___contract_1; }
	inline JsonArrayContract_t1632130460 ** get_address_of_contract_1() { return &___contract_1; }
	inline void set_contract_1(JsonArrayContract_t1632130460 * value)
	{
		___contract_1 = value;
		Il2CppCodeGenWriteBarrier(&___contract_1, value);
	}

	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(U3CCreateAndPopulateListU3Ec__AnonStorey19_t1236026520, ___reader_2)); }
	inline JsonReader_t1817561742 * get_reader_2() const { return ___reader_2; }
	inline JsonReader_t1817561742 ** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(JsonReader_t1817561742 * value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier(&___reader_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3CCreateAndPopulateListU3Ec__AnonStorey19_t1236026520, ___U3CU3Ef__this_3)); }
	inline JsonSerializerInternalReader_t1638952051 * get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline JsonSerializerInternalReader_t1638952051 ** get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(JsonSerializerInternalReader_t1638952051 * value)
	{
		___U3CU3Ef__this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
