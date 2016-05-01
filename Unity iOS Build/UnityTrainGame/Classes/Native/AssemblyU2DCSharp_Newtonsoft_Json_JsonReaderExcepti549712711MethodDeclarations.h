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

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t549712711;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Newtonsoft.Json.JsonReaderException::.ctor()
extern "C"  void JsonReaderException__ctor_m67882812 (JsonReaderException_t549712711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String)
extern "C"  void JsonReaderException__ctor_m1111060806 (JsonReaderException_t549712711 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String,System.Exception)
extern "C"  void JsonReaderException__ctor_m2387495088 (JsonReaderException_t549712711 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
extern "C"  void JsonReaderException__ctor_m1097966096 (JsonReaderException_t549712711 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, int32_t ___lineNumber, int32_t ___linePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonReaderException::get_LineNumber()
extern "C"  int32_t JsonReaderException_get_LineNumber_m3306891232 (JsonReaderException_t549712711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::set_LineNumber(System.Int32)
extern "C"  void JsonReaderException_set_LineNumber_m2794313203 (JsonReaderException_t549712711 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonReaderException::get_LinePosition()
extern "C"  int32_t JsonReaderException_get_LinePosition_m1421267008 (JsonReaderException_t549712711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::set_LinePosition(System.Int32)
extern "C"  void JsonReaderException_set_LinePosition_m1774241235 (JsonReaderException_t549712711 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
