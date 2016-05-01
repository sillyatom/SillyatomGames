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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_De4116944666.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::.ctor(System.String,System.String)
extern "C"  void TypeNameKey__ctor_m172538234 (TypeNameKey_t4116944666 * __this, String_t* ___assemblyName, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::GetHashCode()
extern "C"  int32_t TypeNameKey_GetHashCode_m2544152741 (TypeNameKey_t4116944666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(System.Object)
extern "C"  bool TypeNameKey_Equals_m2245811073 (TypeNameKey_t4116944666 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey)
extern "C"  bool TypeNameKey_Equals_m1092246044 (TypeNameKey_t4116944666 * __this, TypeNameKey_t4116944666  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TypeNameKey_t4116944666;
struct TypeNameKey_t4116944666_marshaled_pinvoke;

extern "C" void TypeNameKey_t4116944666_marshal_pinvoke(const TypeNameKey_t4116944666& unmarshaled, TypeNameKey_t4116944666_marshaled_pinvoke& marshaled);
extern "C" void TypeNameKey_t4116944666_marshal_pinvoke_back(const TypeNameKey_t4116944666_marshaled_pinvoke& marshaled, TypeNameKey_t4116944666& unmarshaled);
extern "C" void TypeNameKey_t4116944666_marshal_pinvoke_cleanup(TypeNameKey_t4116944666_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TypeNameKey_t4116944666;
struct TypeNameKey_t4116944666_marshaled_com;

extern "C" void TypeNameKey_t4116944666_marshal_com(const TypeNameKey_t4116944666& unmarshaled, TypeNameKey_t4116944666_marshaled_com& marshaled);
extern "C" void TypeNameKey_t4116944666_marshal_com_back(const TypeNameKey_t4116944666_marshaled_com& marshaled, TypeNameKey_t4116944666& unmarshaled);
extern "C" void TypeNameKey_t4116944666_marshal_com_cleanup(TypeNameKey_t4116944666_marshaled_com& marshaled);
