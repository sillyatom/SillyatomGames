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

// Newtonsoft.Json.Schema.ValidationEventArgs
struct ValidationEventArgs_t1948980208;
// Newtonsoft.Json.Schema.JsonSchemaException
struct JsonSchemaException_t1081788280;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem1081788280.h"

// System.Void Newtonsoft.Json.Schema.ValidationEventArgs::.ctor(Newtonsoft.Json.Schema.JsonSchemaException)
extern "C"  void ValidationEventArgs__ctor_m727474055 (ValidationEventArgs_t1948980208 * __this, JsonSchemaException_t1081788280 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaException Newtonsoft.Json.Schema.ValidationEventArgs::get_Exception()
extern "C"  JsonSchemaException_t1081788280 * ValidationEventArgs_get_Exception_m3409740938 (ValidationEventArgs_t1948980208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.ValidationEventArgs::get_Message()
extern "C"  String_t* ValidationEventArgs_get_Message_m710533966 (ValidationEventArgs_t1948980208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
