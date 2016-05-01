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

// Newtonsoft.Json.Serialization.JsonSerializerInternalBase
struct JsonSerializerInternalBase_t1092275265;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct BidirectionalDictionary_2_t2587161411;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1967233988;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Exception1967233988.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js2267638131.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalBase__ctor_m270309585 (JsonSerializerInternalBase_t1092275265 * __this, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.Serialization.JsonSerializerInternalBase::get_Serializer()
extern "C"  JsonSerializer_t4019458909 * JsonSerializerInternalBase_get_Serializer_m3359244333 (JsonSerializerInternalBase_t1092275265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase::set_Serializer(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalBase_set_Serializer_m2116923300 (JsonSerializerInternalBase_t1092275265 * __this, JsonSerializer_t4019458909 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalBase::get_DefaultReferenceMappings()
extern "C"  BidirectionalDictionary_2_t2587161411 * JsonSerializerInternalBase_get_DefaultReferenceMappings_m2016463219 (JsonSerializerInternalBase_t1092275265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.ErrorContext Newtonsoft.Json.Serialization.JsonSerializerInternalBase::GetErrorContext(System.Object,System.Object,System.Exception)
extern "C"  ErrorContext_t957583840 * JsonSerializerInternalBase_GetErrorContext_m19753964 (JsonSerializerInternalBase_t1092275265 * __this, Il2CppObject * ___currentObject, Il2CppObject * ___member, Exception_t1967233988 * ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase::ClearErrorContext()
extern "C"  void JsonSerializerInternalBase_ClearErrorContext_m1251934386 (JsonSerializerInternalBase_t1092275265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalBase::IsErrorHandled(System.Object,Newtonsoft.Json.Serialization.JsonContract,System.Object,System.Exception)
extern "C"  bool JsonSerializerInternalBase_IsErrorHandled_m1948851277 (JsonSerializerInternalBase_t1092275265 * __this, Il2CppObject * ___currentObject, JsonContract_t2267638131 * ___contract, Il2CppObject * ___keyValue, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
