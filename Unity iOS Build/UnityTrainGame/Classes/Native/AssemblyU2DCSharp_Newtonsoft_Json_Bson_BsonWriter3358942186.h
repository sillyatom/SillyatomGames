#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t3553243979;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t1714632464;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonWriter
struct  BsonWriter_t3358942186  : public JsonWriter_t1972966974
{
public:
	// Newtonsoft.Json.Bson.BsonBinaryWriter Newtonsoft.Json.Bson.BsonWriter::_writer
	BsonBinaryWriter_t3553243979 * ____writer_6;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_root
	BsonToken_t1714632464 * ____root_7;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_parent
	BsonToken_t1714632464 * ____parent_8;
	// System.String Newtonsoft.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_9;

public:
	inline static int32_t get_offset_of__writer_6() { return static_cast<int32_t>(offsetof(BsonWriter_t3358942186, ____writer_6)); }
	inline BsonBinaryWriter_t3553243979 * get__writer_6() const { return ____writer_6; }
	inline BsonBinaryWriter_t3553243979 ** get_address_of__writer_6() { return &____writer_6; }
	inline void set__writer_6(BsonBinaryWriter_t3553243979 * value)
	{
		____writer_6 = value;
		Il2CppCodeGenWriteBarrier(&____writer_6, value);
	}

	inline static int32_t get_offset_of__root_7() { return static_cast<int32_t>(offsetof(BsonWriter_t3358942186, ____root_7)); }
	inline BsonToken_t1714632464 * get__root_7() const { return ____root_7; }
	inline BsonToken_t1714632464 ** get_address_of__root_7() { return &____root_7; }
	inline void set__root_7(BsonToken_t1714632464 * value)
	{
		____root_7 = value;
		Il2CppCodeGenWriteBarrier(&____root_7, value);
	}

	inline static int32_t get_offset_of__parent_8() { return static_cast<int32_t>(offsetof(BsonWriter_t3358942186, ____parent_8)); }
	inline BsonToken_t1714632464 * get__parent_8() const { return ____parent_8; }
	inline BsonToken_t1714632464 ** get_address_of__parent_8() { return &____parent_8; }
	inline void set__parent_8(BsonToken_t1714632464 * value)
	{
		____parent_8 = value;
		Il2CppCodeGenWriteBarrier(&____parent_8, value);
	}

	inline static int32_t get_offset_of__propertyName_9() { return static_cast<int32_t>(offsetof(BsonWriter_t3358942186, ____propertyName_9)); }
	inline String_t* get__propertyName_9() const { return ____propertyName_9; }
	inline String_t** get_address_of__propertyName_9() { return &____propertyName_9; }
	inline void set__propertyName_9(String_t* value)
	{
		____propertyName_9 = value;
		Il2CppCodeGenWriteBarrier(&____propertyName_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
