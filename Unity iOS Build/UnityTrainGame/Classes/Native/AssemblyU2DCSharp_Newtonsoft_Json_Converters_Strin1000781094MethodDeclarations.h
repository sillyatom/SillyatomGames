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

// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_t1000781094;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Type
struct Type_t;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>
struct BidirectionalDictionary_2_t2718543893;
// System.String
struct String_t;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t2225818298;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"
#include "AssemblyU2DCSharp_System_Runtime_Serialization_Enu2225818298.h"

// System.Void Newtonsoft.Json.Converters.StringEnumConverter::.ctor()
extern "C"  void StringEnumConverter__ctor_m2012221811 (StringEnumConverter_t1000781094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::get_CamelCaseText()
extern "C"  bool StringEnumConverter_get_CamelCaseText_m2928640775 (StringEnumConverter_t1000781094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::set_CamelCaseText(System.Boolean)
extern "C"  void StringEnumConverter_set_CamelCaseText_m861618302 (StringEnumConverter_t1000781094 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void StringEnumConverter_WriteJson_m1726638081 (StringEnumConverter_t1000781094 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.StringEnumConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * StringEnumConverter_ReadJson_m2865608882 (StringEnumConverter_t1000781094 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String> Newtonsoft.Json.Converters.StringEnumConverter::GetEnumNameMap(System.Type)
extern "C"  BidirectionalDictionary_2_t2718543893 * StringEnumConverter_GetEnumNameMap_m2731751909 (StringEnumConverter_t1000781094 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::CanConvert(System.Type)
extern "C"  bool StringEnumConverter_CanConvert_m378992977 (StringEnumConverter_t1000781094 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.StringEnumConverter::<GetEnumNameMap>m__2(System.Runtime.Serialization.EnumMemberAttribute)
extern "C"  String_t* StringEnumConverter_U3CGetEnumNameMapU3Em__2_m2915613107 (Il2CppObject * __this /* static, unused */, EnumMemberAttribute_t2225818298 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
