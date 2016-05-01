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

// Newtonsoft.Json.JsonConverterAttribute
struct JsonConverterAttribute_t3372878503;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Newtonsoft.Json.JsonConverterAttribute::.ctor(System.Type)
extern "C"  void JsonConverterAttribute__ctor_m3522878775 (JsonConverterAttribute_t3372878503 * __this, Type_t * ___converterType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.JsonConverterAttribute::get_ConverterType()
extern "C"  Type_t * JsonConverterAttribute_get_ConverterType_m2656934871 (JsonConverterAttribute_t3372878503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.JsonConverterAttribute::CreateJsonConverterInstance(System.Type)
extern "C"  JsonConverter_t757201947 * JsonConverterAttribute_CreateJsonConverterInstance_m158206104 (Il2CppObject * __this /* static, unused */, Type_t * ___converterType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
