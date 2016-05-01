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

// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_t90215434;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Newtonsoft.Json.JsonSerializationException::.ctor()
extern "C"  void JsonSerializationException__ctor_m4252887423 (JsonSerializationException_t90215434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
extern "C"  void JsonSerializationException__ctor_m1435327459 (JsonSerializationException_t90215434 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String,System.Exception)
extern "C"  void JsonSerializationException__ctor_m293817267 (JsonSerializationException_t90215434 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
