#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t2690482951;
// System.Char[]
struct CharU5BU5D_t3416858730;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t1893523982;

#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonType556079793.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonReader_3566992734.h"
#include "mscorlib_System_DateTimeKind3550648708.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonReader
struct  BsonReader_t3203536954  : public JsonReader_t1817561742
{
public:
	// System.IO.BinaryReader Newtonsoft.Json.Bson.BsonReader::_reader
	BinaryReader_t2158806251 * ____reader_14;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext> Newtonsoft.Json.Bson.BsonReader::_stack
	List_1_t2690482951 * ____stack_15;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_byteBuffer
	ByteU5BU5D_t58506160* ____byteBuffer_16;
	// System.Char[] Newtonsoft.Json.Bson.BsonReader::_charBuffer
	CharU5BU5D_t3416858730* ____charBuffer_17;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::_currentElementType
	int8_t ____currentElementType_18;
	// Newtonsoft.Json.Bson.BsonReader/BsonReaderState Newtonsoft.Json.Bson.BsonReader::_bsonReaderState
	int32_t ____bsonReaderState_19;
	// Newtonsoft.Json.Bson.BsonReader/ContainerContext Newtonsoft.Json.Bson.BsonReader::_currentContext
	ContainerContext_t1893523982 * ____currentContext_20;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_readRootValueAsArray
	bool ____readRootValueAsArray_21;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_jsonNet35BinaryCompatibility
	bool ____jsonNet35BinaryCompatibility_22;
	// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::_dateTimeKindHandling
	int32_t ____dateTimeKindHandling_23;

public:
	inline static int32_t get_offset_of__reader_14() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____reader_14)); }
	inline BinaryReader_t2158806251 * get__reader_14() const { return ____reader_14; }
	inline BinaryReader_t2158806251 ** get_address_of__reader_14() { return &____reader_14; }
	inline void set__reader_14(BinaryReader_t2158806251 * value)
	{
		____reader_14 = value;
		Il2CppCodeGenWriteBarrier(&____reader_14, value);
	}

	inline static int32_t get_offset_of__stack_15() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____stack_15)); }
	inline List_1_t2690482951 * get__stack_15() const { return ____stack_15; }
	inline List_1_t2690482951 ** get_address_of__stack_15() { return &____stack_15; }
	inline void set__stack_15(List_1_t2690482951 * value)
	{
		____stack_15 = value;
		Il2CppCodeGenWriteBarrier(&____stack_15, value);
	}

	inline static int32_t get_offset_of__byteBuffer_16() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____byteBuffer_16)); }
	inline ByteU5BU5D_t58506160* get__byteBuffer_16() const { return ____byteBuffer_16; }
	inline ByteU5BU5D_t58506160** get_address_of__byteBuffer_16() { return &____byteBuffer_16; }
	inline void set__byteBuffer_16(ByteU5BU5D_t58506160* value)
	{
		____byteBuffer_16 = value;
		Il2CppCodeGenWriteBarrier(&____byteBuffer_16, value);
	}

	inline static int32_t get_offset_of__charBuffer_17() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____charBuffer_17)); }
	inline CharU5BU5D_t3416858730* get__charBuffer_17() const { return ____charBuffer_17; }
	inline CharU5BU5D_t3416858730** get_address_of__charBuffer_17() { return &____charBuffer_17; }
	inline void set__charBuffer_17(CharU5BU5D_t3416858730* value)
	{
		____charBuffer_17 = value;
		Il2CppCodeGenWriteBarrier(&____charBuffer_17, value);
	}

	inline static int32_t get_offset_of__currentElementType_18() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____currentElementType_18)); }
	inline int8_t get__currentElementType_18() const { return ____currentElementType_18; }
	inline int8_t* get_address_of__currentElementType_18() { return &____currentElementType_18; }
	inline void set__currentElementType_18(int8_t value)
	{
		____currentElementType_18 = value;
	}

	inline static int32_t get_offset_of__bsonReaderState_19() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____bsonReaderState_19)); }
	inline int32_t get__bsonReaderState_19() const { return ____bsonReaderState_19; }
	inline int32_t* get_address_of__bsonReaderState_19() { return &____bsonReaderState_19; }
	inline void set__bsonReaderState_19(int32_t value)
	{
		____bsonReaderState_19 = value;
	}

	inline static int32_t get_offset_of__currentContext_20() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____currentContext_20)); }
	inline ContainerContext_t1893523982 * get__currentContext_20() const { return ____currentContext_20; }
	inline ContainerContext_t1893523982 ** get_address_of__currentContext_20() { return &____currentContext_20; }
	inline void set__currentContext_20(ContainerContext_t1893523982 * value)
	{
		____currentContext_20 = value;
		Il2CppCodeGenWriteBarrier(&____currentContext_20, value);
	}

	inline static int32_t get_offset_of__readRootValueAsArray_21() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____readRootValueAsArray_21)); }
	inline bool get__readRootValueAsArray_21() const { return ____readRootValueAsArray_21; }
	inline bool* get_address_of__readRootValueAsArray_21() { return &____readRootValueAsArray_21; }
	inline void set__readRootValueAsArray_21(bool value)
	{
		____readRootValueAsArray_21 = value;
	}

	inline static int32_t get_offset_of__jsonNet35BinaryCompatibility_22() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____jsonNet35BinaryCompatibility_22)); }
	inline bool get__jsonNet35BinaryCompatibility_22() const { return ____jsonNet35BinaryCompatibility_22; }
	inline bool* get_address_of__jsonNet35BinaryCompatibility_22() { return &____jsonNet35BinaryCompatibility_22; }
	inline void set__jsonNet35BinaryCompatibility_22(bool value)
	{
		____jsonNet35BinaryCompatibility_22 = value;
	}

	inline static int32_t get_offset_of__dateTimeKindHandling_23() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954, ____dateTimeKindHandling_23)); }
	inline int32_t get__dateTimeKindHandling_23() const { return ____dateTimeKindHandling_23; }
	inline int32_t* get_address_of__dateTimeKindHandling_23() { return &____dateTimeKindHandling_23; }
	inline void set__dateTimeKindHandling_23(int32_t value)
	{
		____dateTimeKindHandling_23 = value;
	}
};

struct BsonReader_t3203536954_StaticFields
{
public:
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_seqRange1
	ByteU5BU5D_t58506160* ____seqRange1_10;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_seqRange2
	ByteU5BU5D_t58506160* ____seqRange2_11;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_seqRange3
	ByteU5BU5D_t58506160* ____seqRange3_12;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_seqRange4
	ByteU5BU5D_t58506160* ____seqRange4_13;

public:
	inline static int32_t get_offset_of__seqRange1_10() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954_StaticFields, ____seqRange1_10)); }
	inline ByteU5BU5D_t58506160* get__seqRange1_10() const { return ____seqRange1_10; }
	inline ByteU5BU5D_t58506160** get_address_of__seqRange1_10() { return &____seqRange1_10; }
	inline void set__seqRange1_10(ByteU5BU5D_t58506160* value)
	{
		____seqRange1_10 = value;
		Il2CppCodeGenWriteBarrier(&____seqRange1_10, value);
	}

	inline static int32_t get_offset_of__seqRange2_11() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954_StaticFields, ____seqRange2_11)); }
	inline ByteU5BU5D_t58506160* get__seqRange2_11() const { return ____seqRange2_11; }
	inline ByteU5BU5D_t58506160** get_address_of__seqRange2_11() { return &____seqRange2_11; }
	inline void set__seqRange2_11(ByteU5BU5D_t58506160* value)
	{
		____seqRange2_11 = value;
		Il2CppCodeGenWriteBarrier(&____seqRange2_11, value);
	}

	inline static int32_t get_offset_of__seqRange3_12() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954_StaticFields, ____seqRange3_12)); }
	inline ByteU5BU5D_t58506160* get__seqRange3_12() const { return ____seqRange3_12; }
	inline ByteU5BU5D_t58506160** get_address_of__seqRange3_12() { return &____seqRange3_12; }
	inline void set__seqRange3_12(ByteU5BU5D_t58506160* value)
	{
		____seqRange3_12 = value;
		Il2CppCodeGenWriteBarrier(&____seqRange3_12, value);
	}

	inline static int32_t get_offset_of__seqRange4_13() { return static_cast<int32_t>(offsetof(BsonReader_t3203536954_StaticFields, ____seqRange4_13)); }
	inline ByteU5BU5D_t58506160* get__seqRange4_13() const { return ____seqRange4_13; }
	inline ByteU5BU5D_t58506160** get_address_of__seqRange4_13() { return &____seqRange4_13; }
	inline void set__seqRange4_13(ByteU5BU5D_t58506160* value)
	{
		____seqRange4_13 = value;
		Il2CppCodeGenWriteBarrier(&____seqRange4_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
