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

// Newtonsoft.Json.Serialization.DefaultReferenceResolver
struct DefaultReferenceResolver_t258914185;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct BidirectionalDictionary_2_t2587161411;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Serialization.DefaultReferenceResolver::.ctor()
extern "C"  void DefaultReferenceResolver__ctor_m2046477720 (DefaultReferenceResolver_t258914185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> Newtonsoft.Json.Serialization.DefaultReferenceResolver::GetMappings(System.Object)
extern "C"  BidirectionalDictionary_2_t2587161411 * DefaultReferenceResolver_GetMappings_m1562190554 (DefaultReferenceResolver_t258914185 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.DefaultReferenceResolver::ResolveReference(System.Object,System.String)
extern "C"  Il2CppObject * DefaultReferenceResolver_ResolveReference_m2170076464 (DefaultReferenceResolver_t258914185 * __this, Il2CppObject * ___context, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.DefaultReferenceResolver::GetReference(System.Object,System.Object)
extern "C"  String_t* DefaultReferenceResolver_GetReference_m1363752446 (DefaultReferenceResolver_t258914185 * __this, Il2CppObject * ___context, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultReferenceResolver::AddReference(System.Object,System.String,System.Object)
extern "C"  void DefaultReferenceResolver_AddReference_m1624546184 (DefaultReferenceResolver_t258914185 * __this, Il2CppObject * ___context, String_t* ___reference, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultReferenceResolver::IsReferenced(System.Object,System.Object)
extern "C"  bool DefaultReferenceResolver_IsReferenced_m3448180639 (DefaultReferenceResolver_t258914185 * __this, Il2CppObject * ___context, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
