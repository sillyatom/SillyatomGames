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

// Newtonsoft.Json.Linq.JPropertyDescriptor
struct JPropertyDescriptor_t1852134917;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Newtonsoft.Json.Linq.JObject
struct JObject_t3774284064;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Linq.JPropertyDescriptor::.ctor(System.String,System.Type)
extern "C"  void JPropertyDescriptor__ctor_m1055826031 (JPropertyDescriptor_t1852134917 * __this, String_t* ___name, Type_t * ___propertyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JPropertyDescriptor::CastInstance(System.Object)
extern "C"  JObject_t3774284064 * JPropertyDescriptor_CastInstance_m2534040853 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JPropertyDescriptor::CanResetValue(System.Object)
extern "C"  bool JPropertyDescriptor_CanResetValue_m770216082 (JPropertyDescriptor_t1852134917 * __this, Il2CppObject * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JPropertyDescriptor::GetValue(System.Object)
extern "C"  Il2CppObject * JPropertyDescriptor_GetValue_m4223826598 (JPropertyDescriptor_t1852134917 * __this, Il2CppObject * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPropertyDescriptor::ResetValue(System.Object)
extern "C"  void JPropertyDescriptor_ResetValue_m928125812 (JPropertyDescriptor_t1852134917 * __this, Il2CppObject * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C"  void JPropertyDescriptor_SetValue_m4218382933 (JPropertyDescriptor_t1852134917 * __this, Il2CppObject * ___component, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C"  bool JPropertyDescriptor_ShouldSerializeValue_m3731528606 (JPropertyDescriptor_t1852134917 * __this, Il2CppObject * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Linq.JPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * JPropertyDescriptor_get_ComponentType_m1366109816 (JPropertyDescriptor_t1852134917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JPropertyDescriptor::get_IsReadOnly()
extern "C"  bool JPropertyDescriptor_get_IsReadOnly_m1571133799 (JPropertyDescriptor_t1852134917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Linq.JPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * JPropertyDescriptor_get_PropertyType_m855600784 (JPropertyDescriptor_t1852134917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JPropertyDescriptor::get_NameHashCode()
extern "C"  int32_t JPropertyDescriptor_get_NameHashCode_m394857179 (JPropertyDescriptor_t1852134917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
