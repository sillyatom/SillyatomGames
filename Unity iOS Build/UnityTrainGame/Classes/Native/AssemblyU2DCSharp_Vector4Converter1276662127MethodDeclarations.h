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

// Vector4Converter
struct Vector4Converter_t1276662127;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "mscorlib_System_Type2779229935.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"

// System.Void Vector4Converter::.ctor()
extern "C"  void Vector4Converter__ctor_m3755999756 (Vector4Converter_t1276662127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vector4Converter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void Vector4Converter_WriteJson_m905876936 (Vector4Converter_t1276662127 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vector4Converter::CanConvert(System.Type)
extern "C"  bool Vector4Converter_CanConvert_m3695854826 (Vector4Converter_t1276662127 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Vector4Converter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * Vector4Converter_ReadJson_m2611328459 (Vector4Converter_t1276662127 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vector4Converter::get_CanRead()
extern "C"  bool Vector4Converter_get_CanRead_m1021444499 (Vector4Converter_t1276662127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
