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

// Newtonsoft.Json.Serialization.DefaultSerializationBinder
struct DefaultSerializationBinder_t2071761170;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_De4116944666.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Serialization.DefaultSerializationBinder::.ctor()
extern "C"  void DefaultSerializationBinder__ctor_m1656508655 (DefaultSerializationBinder_t2071761170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultSerializationBinder::.cctor()
extern "C"  void DefaultSerializationBinder__cctor_m3625031838 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.DefaultSerializationBinder::GetTypeFromTypeNameKey(Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey)
extern "C"  Type_t * DefaultSerializationBinder_GetTypeFromTypeNameKey_m2222586008 (Il2CppObject * __this /* static, unused */, TypeNameKey_t4116944666  ___typeNameKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.DefaultSerializationBinder::BindToType(System.String,System.String)
extern "C"  Type_t * DefaultSerializationBinder_BindToType_m1908004253 (DefaultSerializationBinder_t2071761170 * __this, String_t* ___assemblyName, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
