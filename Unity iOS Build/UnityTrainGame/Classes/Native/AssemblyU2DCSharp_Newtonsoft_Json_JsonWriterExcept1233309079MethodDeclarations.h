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

// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_t1233309079;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Newtonsoft.Json.JsonWriterException::.ctor()
extern "C"  void JsonWriterException__ctor_m2991951596 (JsonWriterException_t1233309079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriterException::.ctor(System.String)
extern "C"  void JsonWriterException__ctor_m2490937238 (JsonWriterException_t1233309079 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriterException::.ctor(System.String,System.Exception)
extern "C"  void JsonWriterException__ctor_m3830019168 (JsonWriterException_t1233309079 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
