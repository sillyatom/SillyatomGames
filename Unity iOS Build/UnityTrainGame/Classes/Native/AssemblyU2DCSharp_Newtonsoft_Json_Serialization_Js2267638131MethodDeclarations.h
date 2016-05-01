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

// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Func`1<System.Object>
struct Func_1_t1979887667;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonConverter757201947.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Err957583840.h"

// System.Void Newtonsoft.Json.Serialization.JsonContract::.ctor(System.Type)
extern "C"  void JsonContract__ctor_m4039967819 (JsonContract_t2267638131 * __this, Type_t * ___underlyingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonContract::get_UnderlyingType()
extern "C"  Type_t * JsonContract_get_UnderlyingType_m3658291120 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_UnderlyingType(System.Type)
extern "C"  void JsonContract_set_UnderlyingType_m2946684975 (JsonContract_t2267638131 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonContract::get_CreatedType()
extern "C"  Type_t * JsonContract_get_CreatedType_m2498430347 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_CreatedType(System.Type)
extern "C"  void JsonContract_set_CreatedType_m4138012776 (JsonContract_t2267638131 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonContract::get_IsReference()
extern "C"  Nullable_1_t3097043249  JsonContract_get_IsReference_m2821103611 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_IsReference(System.Nullable`1<System.Boolean>)
extern "C"  void JsonContract_set_IsReference_m108471416 (JsonContract_t2267638131 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::get_Converter()
extern "C"  JsonConverter_t757201947 * JsonContract_get_Converter_m3717981107 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_Converter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonContract_set_Converter_m157083264 (JsonContract_t2267638131 * __this, JsonConverter_t757201947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::get_InternalConverter()
extern "C"  JsonConverter_t757201947 * JsonContract_get_InternalConverter_m3640126134 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_InternalConverter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonContract_set_InternalConverter_m3598229085 (JsonContract_t2267638131 * __this, JsonConverter_t757201947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnDeserialized()
extern "C"  MethodInfo_t * JsonContract_get_OnDeserialized_m1426340749 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnDeserialized(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnDeserialized_m2885004996 (JsonContract_t2267638131 * __this, MethodInfo_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnDeserializing()
extern "C"  MethodInfo_t * JsonContract_get_OnDeserializing_m1270942806 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnDeserializing(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnDeserializing_m3344284345 (JsonContract_t2267638131 * __this, MethodInfo_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnSerialized()
extern "C"  MethodInfo_t * JsonContract_get_OnSerialized_m1758592588 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnSerialized(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnSerialized_m1247164291 (JsonContract_t2267638131 * __this, MethodInfo_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnSerializing()
extern "C"  MethodInfo_t * JsonContract_get_OnSerializing_m2980815223 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnSerializing(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnSerializing_m4110830042 (JsonContract_t2267638131 * __this, MethodInfo_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonContract::get_DefaultCreator()
extern "C"  Func_1_t1979887667 * JsonContract_get_DefaultCreator_m2576429215 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_DefaultCreator(System.Func`1<System.Object>)
extern "C"  void JsonContract_set_DefaultCreator_m1002277718 (JsonContract_t2267638131 * __this, Func_1_t1979887667 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonContract::get_DefaultCreatorNonPublic()
extern "C"  bool JsonContract_get_DefaultCreatorNonPublic_m1567047642 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_DefaultCreatorNonPublic(System.Boolean)
extern "C"  void JsonContract_set_DefaultCreatorNonPublic_m3860789777 (JsonContract_t2267638131 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnError()
extern "C"  MethodInfo_t * JsonContract_get_OnError_m798785506 (JsonContract_t2267638131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnError(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnError_m4251449925 (JsonContract_t2267638131 * __this, MethodInfo_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnSerializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnSerializing_m429490670 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnSerialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnSerialized_m762361103 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnDeserializing_m1381943919 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnDeserialized_m1485822062 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnError(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void JsonContract_InvokeOnError_m4200927753 (JsonContract_t2267638131 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, ErrorContext_t957583840 * ___errorContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
