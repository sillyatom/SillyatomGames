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

// Newtonsoft.Json.Serialization.ReflectionValueProvider
struct ReflectionValueProvider_t2178912048;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Serialization.ReflectionValueProvider::.ctor(System.Reflection.MemberInfo)
extern "C"  void ReflectionValueProvider__ctor_m2738932027 (ReflectionValueProvider_t2178912048 * __this, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ReflectionValueProvider::SetValue(System.Object,System.Object)
extern "C"  void ReflectionValueProvider_SetValue_m3363882870 (ReflectionValueProvider_t2178912048 * __this, Il2CppObject * ___target, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.ReflectionValueProvider::GetValue(System.Object)
extern "C"  Il2CppObject * ReflectionValueProvider_GetValue_m3607029649 (ReflectionValueProvider_t2178912048 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
