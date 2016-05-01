#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.String
struct String_t;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Uri
struct Uri_t2776692961;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_WriteState761362101.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Formatting1733320232.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonToken326031476.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_DateTimeOffset3712260035.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Nullable_1_gen3871963234.h"
#include "mscorlib_System_Nullable_1_gen1438485494.h"
#include "mscorlib_System_Nullable_1_gen3871963329.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "mscorlib_System_Nullable_1_gen3420554522.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen1438485341.h"
#include "mscorlib_System_Nullable_1_gen3871963176.h"
#include "mscorlib_System_Nullable_1_gen1369777311.h"
#include "mscorlib_System_Nullable_1_gen1369764433.h"
#include "mscorlib_System_Nullable_1_gen1446416676.h"
#include "mscorlib_System_Nullable_1_gen279627866.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_Nullable_1_gen2303330647.h"
#include "mscorlib_System_Nullable_1_gen1369909202.h"
#include "mscorlib_System_Nullable_1_gen3649900800.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m2022574027 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::.cctor()
extern "C"  void JsonWriter__cctor_m2088156482 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::System.IDisposable.Dispose()
extern "C"  void JsonWriter_System_IDisposable_Dispose_m195110068 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonWriter::get_CloseOutput()
extern "C"  bool JsonWriter_get_CloseOutput_m2512288357 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_CloseOutput(System.Boolean)
extern "C"  void JsonWriter_set_CloseOutput_m3210063196 (JsonWriter_t1972966974 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonWriter::get_Top()
extern "C"  int32_t JsonWriter_get_Top_m75893639 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.WriteState Newtonsoft.Json.JsonWriter::get_WriteState()
extern "C"  int32_t JsonWriter_get_WriteState_m1774636522 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::get_Formatting()
extern "C"  int32_t JsonWriter_get_Formatting_m636140554 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_Formatting(Newtonsoft.Json.Formatting)
extern "C"  void JsonWriter_set_Formatting_m1798497025 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Push(Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JsonWriter_Push_m1104926333 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonWriter::Pop()
extern "C"  int32_t JsonWriter_Pop_m3959503593 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonWriter::Peek()
extern "C"  int32_t JsonWriter_Peek_m2476028581 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Close()
extern "C"  void JsonWriter_Close_m3733433569 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartObject()
extern "C"  void JsonWriter_WriteStartObject_m3251858555 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndObject()
extern "C"  void JsonWriter_WriteEndObject_m2641277492 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartArray()
extern "C"  void JsonWriter_WriteStartArray_m1307197887 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndArray()
extern "C"  void JsonWriter_WriteEndArray_m3781353702 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartConstructor(System.String)
extern "C"  void JsonWriter_WriteStartConstructor_m168503202 (JsonWriter_t1972966974 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndConstructor()
extern "C"  void JsonWriter_WriteEndConstructor_m4022163783 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String)
extern "C"  void JsonWriter_WritePropertyName_m2518733658 (JsonWriter_t1972966974 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd()
extern "C"  void JsonWriter_WriteEnd_m1700740501 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader)
extern "C"  void JsonWriter_WriteToken_m1251197267 (JsonWriter_t1972966974 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Int32)
extern "C"  void JsonWriter_WriteToken_m458840676 (JsonWriter_t1972966974 * __this, JsonReader_t1817561742 * ___reader, int32_t ___initialDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteConstructorDate(Newtonsoft.Json.JsonReader)
extern "C"  void JsonWriter_WriteConstructorDate_m2708788834 (JsonWriter_t1972966974 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonWriter::IsEndToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonWriter_IsEndToken_m454918497 (JsonWriter_t1972966974 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonWriter::IsStartToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonWriter_IsStartToken_m2529066600 (JsonWriter_t1972966974 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JsonWriter_WriteEnd_m2973420891 (JsonWriter_t1972966974 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoCompleteAll()
extern "C"  void JsonWriter_AutoCompleteAll_m3228057890 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonWriter::GetTypeForCloseToken(Newtonsoft.Json.JsonToken)
extern "C"  int32_t JsonWriter_GetTypeForCloseToken_m206822898 (JsonWriter_t1972966974 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonWriter::GetCloseTokenForType(Newtonsoft.Json.Linq.JTokenType)
extern "C"  int32_t JsonWriter_GetCloseTokenForType_m1390517268 (JsonWriter_t1972966974 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoCompleteClose(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_AutoCompleteClose_m926568989 (JsonWriter_t1972966974 * __this, int32_t ___tokenBeingClosed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_WriteEnd_m4219985857 (JsonWriter_t1972966974 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteIndent()
extern "C"  void JsonWriter_WriteIndent_m1765851540 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValueDelimiter()
extern "C"  void JsonWriter_WriteValueDelimiter_m38595326 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteIndentSpace()
extern "C"  void JsonWriter_WriteIndentSpace_m334924724 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoComplete(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_AutoComplete_m1699166389 (JsonWriter_t1972966974 * __this, int32_t ___tokenBeingWritten, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteNull()
extern "C"  void JsonWriter_WriteNull_m1447778671 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteUndefined()
extern "C"  void JsonWriter_WriteUndefined_m2876722698 (JsonWriter_t1972966974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteRaw(System.String)
extern "C"  void JsonWriter_WriteRaw_m1394575520 (JsonWriter_t1972966974 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteRawValue(System.String)
extern "C"  void JsonWriter_WriteRawValue_m191707281 (JsonWriter_t1972966974 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String)
extern "C"  void JsonWriter_WriteValue_m2678318711 (JsonWriter_t1972966974 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32)
extern "C"  void JsonWriter_WriteValue_m1457138492 (JsonWriter_t1972966974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32)
extern "C"  void JsonWriter_WriteValue_m3218847855 (JsonWriter_t1972966974 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64)
extern "C"  void JsonWriter_WriteValue_m1457141437 (JsonWriter_t1972966974 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64)
extern "C"  void JsonWriter_WriteValue_m3218850800 (JsonWriter_t1972966974 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single)
extern "C"  void JsonWriter_WriteValue_m2359642400 (JsonWriter_t1972966974 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double)
extern "C"  void JsonWriter_WriteValue_m2110079671 (JsonWriter_t1972966974 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean)
extern "C"  void JsonWriter_WriteValue_m1634557090 (JsonWriter_t1972966974 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16)
extern "C"  void JsonWriter_WriteValue_m1457136694 (JsonWriter_t1972966974 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16)
extern "C"  void JsonWriter_WriteValue_m3218846057 (JsonWriter_t1972966974 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char)
extern "C"  void JsonWriter_WriteValue_m3089309586 (JsonWriter_t1972966974 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte)
extern "C"  void JsonWriter_WriteValue_m3088910368 (JsonWriter_t1972966974 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte)
extern "C"  void JsonWriter_WriteValue_m1703008079 (JsonWriter_t1972966974 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal)
extern "C"  void JsonWriter_WriteValue_m194026137 (JsonWriter_t1972966974 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime)
extern "C"  void JsonWriter_WriteValue_m1108866157 (JsonWriter_t1972966974 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTimeOffset)
extern "C"  void JsonWriter_WriteValue_m2573629210 (JsonWriter_t1972966974 * __this, DateTimeOffset_t3712260035  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid)
extern "C"  void JsonWriter_WriteValue_m3093398207 (JsonWriter_t1972966974 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan)
extern "C"  void JsonWriter_WriteValue_m1393661905 (JsonWriter_t1972966974 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int32>)
extern "C"  void JsonWriter_WriteValue_m2740159107 (JsonWriter_t1972966974 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt32>)
extern "C"  void JsonWriter_WriteValue_m4189816314 (JsonWriter_t1972966974 * __this, Nullable_1_t3871963234  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int64>)
extern "C"  void JsonWriter_WriteValue_m2740250402 (JsonWriter_t1972966974 * __this, Nullable_1_t1438485494  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt64>)
extern "C"  void JsonWriter_WriteValue_m4189907609 (JsonWriter_t1972966974 * __this, Nullable_1_t3871963329  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Single>)
extern "C"  void JsonWriter_WriteValue_m3324250985 (JsonWriter_t1972966974 * __this, Nullable_1_t3844246929  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Double>)
extern "C"  void JsonWriter_WriteValue_m4177740978 (JsonWriter_t1972966974 * __this, Nullable_1_t3420554522  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Boolean>)
extern "C"  void JsonWriter_WriteValue_m3525560093 (JsonWriter_t1972966974 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int16>)
extern "C"  void JsonWriter_WriteValue_m2740103369 (JsonWriter_t1972966974 * __this, Nullable_1_t1438485341  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt16>)
extern "C"  void JsonWriter_WriteValue_m4189760576 (JsonWriter_t1972966974 * __this, Nullable_1_t3871963176  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Char>)
extern "C"  void JsonWriter_WriteValue_m2127328375 (JsonWriter_t1972966974 * __this, Nullable_1_t1369777311  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Byte>)
extern "C"  void JsonWriter_WriteValue_m2114952617 (JsonWriter_t1972966974 * __this, Nullable_1_t1369764433  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.SByte>)
extern "C"  void JsonWriter_WriteValue_m1772181712 (JsonWriter_t1972966974 * __this, Nullable_1_t1446416676  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Decimal>)
extern "C"  void JsonWriter_WriteValue_m1818773510 (JsonWriter_t1972966974 * __this, Nullable_1_t279627866  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.DateTime>)
extern "C"  void JsonWriter_WriteValue_m3081939068 (JsonWriter_t1972966974 * __this, Nullable_1_t3225071844  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.DateTimeOffset>)
extern "C"  void JsonWriter_WriteValue_m2516318127 (JsonWriter_t1972966974 * __this, Nullable_1_t2303330647  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Guid>)
extern "C"  void JsonWriter_WriteValue_m2254075626 (JsonWriter_t1972966974 * __this, Nullable_1_t1369909202  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.TimeSpan>)
extern "C"  void JsonWriter_WriteValue_m3320672664 (JsonWriter_t1972966974 * __this, Nullable_1_t3649900800  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[])
extern "C"  void JsonWriter_WriteValue_m620513086 (JsonWriter_t1972966974 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri)
extern "C"  void JsonWriter_WriteValue_m515843166 (JsonWriter_t1972966974 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Object)
extern "C"  void JsonWriter_WriteValue_m2900429065 (JsonWriter_t1972966974 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteComment(System.String)
extern "C"  void JsonWriter_WriteComment_m3790328329 (JsonWriter_t1972966974 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteWhitespace(System.String)
extern "C"  void JsonWriter_WriteWhitespace_m1110984573 (JsonWriter_t1972966974 * __this, String_t* ___ws, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Dispose(System.Boolean)
extern "C"  void JsonWriter_Dispose_m1436878015 (JsonWriter_t1972966974 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
