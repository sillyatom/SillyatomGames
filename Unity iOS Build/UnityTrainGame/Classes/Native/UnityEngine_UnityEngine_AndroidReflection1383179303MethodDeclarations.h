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

// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.AndroidReflection::.cctor()
extern "C"  void AndroidReflection__cctor_m1416718190 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
extern "C"  bool AndroidReflection_IsPrimitive_m2208855481 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
extern "C"  bool AndroidReflection_IsAssignableFrom_m4117338608 (Il2CppObject * __this /* static, unused */, Type_t * ___t, Type_t * ___from, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidReflection::GetStaticMethodID(System.String,System.String,System.String)
extern "C"  IntPtr_t AndroidReflection_GetStaticMethodID_m842671816 (Il2CppObject * __this /* static, unused */, String_t* ___clazz, String_t* ___methodName, String_t* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidReflection::GetMethodMember(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidReflection_GetMethodMember_m2966799924 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass, String_t* ___methodName, String_t* ___signature, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
