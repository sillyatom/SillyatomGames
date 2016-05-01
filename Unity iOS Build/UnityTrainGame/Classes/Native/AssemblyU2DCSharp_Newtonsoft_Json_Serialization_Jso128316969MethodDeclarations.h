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

// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t128316969;
// System.Type
struct Type_t;
// System.Func`2<System.String,System.String>
struct Func_2_t917545008;
// Newtonsoft.Json.Utilities.IWrappedDictionary
struct IWrappedDictionary_t890148009;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Serialization.JsonDictionaryContract::.ctor(System.Type)
extern "C"  void JsonDictionaryContract__ctor_m1272093761 (JsonDictionaryContract_t128316969 * __this, Type_t * ___underlyingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.String,System.String> Newtonsoft.Json.Serialization.JsonDictionaryContract::get_PropertyNameResolver()
extern "C"  Func_2_t917545008 * JsonDictionaryContract_get_PropertyNameResolver_m2923453863 (JsonDictionaryContract_t128316969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonDictionaryContract::set_PropertyNameResolver(System.Func`2<System.String,System.String>)
extern "C"  void JsonDictionaryContract_set_PropertyNameResolver_m3107956766 (JsonDictionaryContract_t128316969 * __this, Func_2_t917545008 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonDictionaryContract::get_DictionaryKeyType()
extern "C"  Type_t * JsonDictionaryContract_get_DictionaryKeyType_m1722715158 (JsonDictionaryContract_t128316969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonDictionaryContract::set_DictionaryKeyType(System.Type)
extern "C"  void JsonDictionaryContract_set_DictionaryKeyType_m2196824573 (JsonDictionaryContract_t128316969 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonDictionaryContract::get_DictionaryValueType()
extern "C"  Type_t * JsonDictionaryContract_get_DictionaryValueType_m2515407528 (JsonDictionaryContract_t128316969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonDictionaryContract::set_DictionaryValueType(System.Type)
extern "C"  void JsonDictionaryContract_set_DictionaryValueType_m1462058411 (JsonDictionaryContract_t128316969 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedDictionary Newtonsoft.Json.Serialization.JsonDictionaryContract::CreateWrapper(System.Object)
extern "C"  Il2CppObject * JsonDictionaryContract_CreateWrapper_m1792102425 (JsonDictionaryContract_t128316969 * __this, Il2CppObject * ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonDictionaryContract::IsTypeGenericDictionaryInterface(System.Type)
extern "C"  bool JsonDictionaryContract_IsTypeGenericDictionaryInterface_m229838505 (JsonDictionaryContract_t128316969 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
