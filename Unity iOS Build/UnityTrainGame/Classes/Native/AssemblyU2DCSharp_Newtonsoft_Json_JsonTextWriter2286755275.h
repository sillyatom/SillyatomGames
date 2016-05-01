#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1689927879;
// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t1606947748;

#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonTextWriter
struct  JsonTextWriter_t2286755275  : public JsonWriter_t1972966974
{
public:
	// System.IO.TextWriter Newtonsoft.Json.JsonTextWriter::_writer
	TextWriter_t1689927879 * ____writer_6;
	// Newtonsoft.Json.Utilities.Base64Encoder Newtonsoft.Json.JsonTextWriter::_base64Encoder
	Base64Encoder_t1606947748 * ____base64Encoder_7;
	// System.Char Newtonsoft.Json.JsonTextWriter::_indentChar
	uint16_t ____indentChar_8;
	// System.Int32 Newtonsoft.Json.JsonTextWriter::_indentation
	int32_t ____indentation_9;
	// System.Char Newtonsoft.Json.JsonTextWriter::_quoteChar
	uint16_t ____quoteChar_10;
	// System.Boolean Newtonsoft.Json.JsonTextWriter::_quoteName
	bool ____quoteName_11;

public:
	inline static int32_t get_offset_of__writer_6() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____writer_6)); }
	inline TextWriter_t1689927879 * get__writer_6() const { return ____writer_6; }
	inline TextWriter_t1689927879 ** get_address_of__writer_6() { return &____writer_6; }
	inline void set__writer_6(TextWriter_t1689927879 * value)
	{
		____writer_6 = value;
		Il2CppCodeGenWriteBarrier(&____writer_6, value);
	}

	inline static int32_t get_offset_of__base64Encoder_7() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____base64Encoder_7)); }
	inline Base64Encoder_t1606947748 * get__base64Encoder_7() const { return ____base64Encoder_7; }
	inline Base64Encoder_t1606947748 ** get_address_of__base64Encoder_7() { return &____base64Encoder_7; }
	inline void set__base64Encoder_7(Base64Encoder_t1606947748 * value)
	{
		____base64Encoder_7 = value;
		Il2CppCodeGenWriteBarrier(&____base64Encoder_7, value);
	}

	inline static int32_t get_offset_of__indentChar_8() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____indentChar_8)); }
	inline uint16_t get__indentChar_8() const { return ____indentChar_8; }
	inline uint16_t* get_address_of__indentChar_8() { return &____indentChar_8; }
	inline void set__indentChar_8(uint16_t value)
	{
		____indentChar_8 = value;
	}

	inline static int32_t get_offset_of__indentation_9() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____indentation_9)); }
	inline int32_t get__indentation_9() const { return ____indentation_9; }
	inline int32_t* get_address_of__indentation_9() { return &____indentation_9; }
	inline void set__indentation_9(int32_t value)
	{
		____indentation_9 = value;
	}

	inline static int32_t get_offset_of__quoteChar_10() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____quoteChar_10)); }
	inline uint16_t get__quoteChar_10() const { return ____quoteChar_10; }
	inline uint16_t* get_address_of__quoteChar_10() { return &____quoteChar_10; }
	inline void set__quoteChar_10(uint16_t value)
	{
		____quoteChar_10 = value;
	}

	inline static int32_t get_offset_of__quoteName_11() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____quoteName_11)); }
	inline bool get__quoteName_11() const { return ____quoteName_11; }
	inline bool* get_address_of__quoteName_11() { return &____quoteName_11; }
	inline void set__quoteName_11(bool value)
	{
		____quoteName_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
