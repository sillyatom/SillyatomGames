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

// System.Attribute
struct Attribute_t498693649;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;
// System.Reflection.Module
struct Module_t206139610;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "mscorlib_System_Reflection_Module206139610.h"

// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m2985353781 (Attribute_t498693649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Attribute::get_TypeId()
extern "C"  Il2CppObject * Attribute_get_TypeId_m3719963938 (Attribute_t498693649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
extern "C"  void Attribute_CheckParameters_m1745623298 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C"  Attribute_t498693649 * Attribute_GetCustomAttribute_m506754809 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  Attribute_t498693649 * Attribute_GetCustomAttribute_m3786533732 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Assembly,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4076389004* Attribute_GetCustomAttributes_m2677976687 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4076389004* Attribute_GetCustomAttributes_m1159712560 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Module,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4076389004* Attribute_GetCustomAttributes_m2016570357 (Il2CppObject * __this /* static, unused */, Module_t206139610 * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4076389004* Attribute_GetCustomAttributes_m3508979185 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___type, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C"  int32_t Attribute_GetHashCode_m3717491592 (Attribute_t498693649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefaultAttribute()
extern "C"  bool Attribute_IsDefaultAttribute_m1613609686 (Attribute_t498693649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
extern "C"  bool Attribute_IsDefined_m165799938 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C"  bool Attribute_IsDefined_m3508553943 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  bool Attribute_IsDefined_m1309172166 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C"  bool Attribute_IsDefined_m3614779195 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
extern "C"  bool Attribute_Equals_m2390113828 (Attribute_t498693649 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
