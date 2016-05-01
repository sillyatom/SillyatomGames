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

// Newtonsoft.Json.Converters.IsoDateTimeConverter
struct IsoDateTimeConverter_t2102903448;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_DateTimeStyles3832294611.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::.ctor()
extern "C"  void IsoDateTimeConverter__ctor_m2999897029 (IsoDateTimeConverter_t2102903448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeStyles Newtonsoft.Json.Converters.IsoDateTimeConverter::get_DateTimeStyles()
extern "C"  int32_t IsoDateTimeConverter_get_DateTimeStyles_m4125279195 (IsoDateTimeConverter_t2102903448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::set_DateTimeStyles(System.Globalization.DateTimeStyles)
extern "C"  void IsoDateTimeConverter_set_DateTimeStyles_m3524457904 (IsoDateTimeConverter_t2102903448 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.IsoDateTimeConverter::get_DateTimeFormat()
extern "C"  String_t* IsoDateTimeConverter_get_DateTimeFormat_m942918871 (IsoDateTimeConverter_t2102903448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::set_DateTimeFormat(System.String)
extern "C"  void IsoDateTimeConverter_set_DateTimeFormat_m476084276 (IsoDateTimeConverter_t2102903448 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Newtonsoft.Json.Converters.IsoDateTimeConverter::get_Culture()
extern "C"  CultureInfo_t3603717042 * IsoDateTimeConverter_get_Culture_m2613577109 (IsoDateTimeConverter_t2102903448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::set_Culture(System.Globalization.CultureInfo)
extern "C"  void IsoDateTimeConverter_set_Culture_m56879780 (IsoDateTimeConverter_t2102903448 * __this, CultureInfo_t3603717042 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void IsoDateTimeConverter_WriteJson_m1202714223 (IsoDateTimeConverter_t2102903448 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.IsoDateTimeConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * IsoDateTimeConverter_ReadJson_m956802062 (IsoDateTimeConverter_t2102903448 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
