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

// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t1632130460;
// System.Type
struct Type_t;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t2996753073;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::.ctor(System.Type)
extern "C"  void JsonArrayContract__ctor_m929367774 (JsonArrayContract_t1632130460 * __this, Type_t * ___underlyingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::get_CollectionItemType()
extern "C"  Type_t * JsonArrayContract_get_CollectionItemType_m1741250691 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_CollectionItemType(System.Type)
extern "C"  void JsonArrayContract_set_CollectionItemType_m2219582984 (JsonArrayContract_t1632130460 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_IsMultidimensionalArray()
extern "C"  bool JsonArrayContract_get_IsMultidimensionalArray_m2353619995 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_IsMultidimensionalArray(System.Boolean)
extern "C"  void JsonArrayContract_set_IsMultidimensionalArray_m4244145834 (JsonArrayContract_t1632130460 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedCollection Newtonsoft.Json.Serialization.JsonArrayContract::CreateWrapper(System.Object)
extern "C"  Il2CppObject * JsonArrayContract_CreateWrapper_m1607256922 (JsonArrayContract_t1632130460 * __this, Il2CppObject * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::EnsureGenericWrapperCreator()
extern "C"  void JsonArrayContract_EnsureGenericWrapperCreator_m649127051 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::IsTypeGenericCollectionInterface(System.Type)
extern "C"  bool JsonArrayContract_IsTypeGenericCollectionInterface_m518944988 (JsonArrayContract_t1632130460 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
