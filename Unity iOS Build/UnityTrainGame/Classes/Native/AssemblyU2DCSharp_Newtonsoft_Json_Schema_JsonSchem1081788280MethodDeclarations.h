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

// Newtonsoft.Json.Schema.JsonSchemaException
struct JsonSchemaException_t1081788280;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaException::.ctor()
extern "C"  void JsonSchemaException__ctor_m2578772301 (JsonSchemaException_t1081788280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::.ctor(System.String)
extern "C"  void JsonSchemaException__ctor_m1538388693 (JsonSchemaException_t1081788280 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::.ctor(System.String,System.Exception)
extern "C"  void JsonSchemaException__ctor_m3829741313 (JsonSchemaException_t1081788280 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
extern "C"  void JsonSchemaException__ctor_m4028718369 (JsonSchemaException_t1081788280 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, int32_t ___lineNumber, int32_t ___linePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Schema.JsonSchemaException::get_LineNumber()
extern "C"  int32_t JsonSchemaException_get_LineNumber_m1519167307 (JsonSchemaException_t1081788280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::set_LineNumber(System.Int32)
extern "C"  void JsonSchemaException_set_LineNumber_m372201602 (JsonSchemaException_t1081788280 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Schema.JsonSchemaException::get_LinePosition()
extern "C"  int32_t JsonSchemaException_get_LinePosition_m1405493483 (JsonSchemaException_t1081788280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::set_LinePosition(System.Int32)
extern "C"  void JsonSchemaException_set_LinePosition_m1997267106 (JsonSchemaException_t1081788280 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
