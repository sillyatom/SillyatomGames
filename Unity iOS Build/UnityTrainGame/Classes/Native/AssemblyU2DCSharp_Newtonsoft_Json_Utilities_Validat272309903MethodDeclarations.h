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
// System.Type
struct Type_t;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNullOrEmpty(System.String,System.String)
extern "C"  void ValidationUtils_ArgumentNotNullOrEmpty_m3456818809 (Il2CppObject * __this /* static, unused */, String_t* ___value, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNullOrEmptyOrWhitespace(System.String,System.String)
extern "C"  void ValidationUtils_ArgumentNotNullOrEmptyOrWhitespace_m4218096537 (Il2CppObject * __this /* static, unused */, String_t* ___value, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentTypeIsEnum(System.Type,System.String)
extern "C"  void ValidationUtils_ArgumentTypeIsEnum_m2165017083 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNullOrEmpty(System.Collections.ICollection,System.String)
extern "C"  void ValidationUtils_ArgumentNotNullOrEmpty_m2466750098 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___collection, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNullOrEmpty(System.Collections.ICollection,System.String,System.String)
extern "C"  void ValidationUtils_ArgumentNotNullOrEmpty_m4126596942 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___collection, String_t* ___parameterName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
extern "C"  void ValidationUtils_ArgumentNotNull_m3978868425 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNegative(System.Int32,System.String)
extern "C"  void ValidationUtils_ArgumentNotNegative_m2390009570 (Il2CppObject * __this /* static, unused */, int32_t ___value, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNegative(System.Int32,System.String,System.String)
extern "C"  void ValidationUtils_ArgumentNotNegative_m3733396382 (Il2CppObject * __this /* static, unused */, int32_t ___value, String_t* ___parameterName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotZero(System.Int32,System.String)
extern "C"  void ValidationUtils_ArgumentNotZero_m3744949845 (Il2CppObject * __this /* static, unused */, int32_t ___value, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotZero(System.Int32,System.String,System.String)
extern "C"  void ValidationUtils_ArgumentNotZero_m3315619281 (Il2CppObject * __this /* static, unused */, int32_t ___value, String_t* ___parameterName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentIsPositive(System.Int32,System.String,System.String)
extern "C"  void ValidationUtils_ArgumentIsPositive_m3214239009 (Il2CppObject * __this /* static, unused */, int32_t ___value, String_t* ___parameterName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ObjectNotDisposed(System.Boolean,System.Type)
extern "C"  void ValidationUtils_ObjectNotDisposed_m1242768045 (Il2CppObject * __this /* static, unused */, bool ___disposed, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentConditionTrue(System.Boolean,System.String,System.String)
extern "C"  void ValidationUtils_ArgumentConditionTrue_m3530257957 (Il2CppObject * __this /* static, unused */, bool ___condition, String_t* ___parameterName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
