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

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3161036435;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t3639992783;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t650754953;
// System.Func`3<System.Type,System.Collections.Generic.IList`1<System.Object>,System.Object>
struct Func_3_t3823099214;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t4037084138;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t714558832;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t67735429;
// System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>
struct IList_1_t3657040683;
// <>__AnonType0`2<System.Int32,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>>
struct U3CU3E__AnonType0_2_t675844848;
// System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>
struct IGrouping_2_t2575698408;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3003598734;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3852587989.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3161036435.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"

// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsVirtual_m4052492746 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetObjectType(System.Object)
extern "C"  Type_t * ReflectionUtils_GetObjectType_m1052889583 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetTypeName(System.Type,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  String_t* ReflectionUtils_GetTypeName_m1435858548 (Il2CppObject * __this /* static, unused */, Type_t * ___t, int32_t ___assemblyFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetTypeName(System.Type,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.SerializationBinder)
extern "C"  String_t* ReflectionUtils_GetTypeName_m2297345675 (Il2CppObject * __this /* static, unused */, Type_t * ___t, int32_t ___assemblyFormat, SerializationBinder_t3161036435 * ___binder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::RemoveAssemblyDetails(System.String)
extern "C"  String_t* ReflectionUtils_RemoveAssemblyDetails_m3352817099 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsInstantiatableType(System.Type)
extern "C"  bool ReflectionUtils_IsInstantiatableType_m437710062 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m2181615766 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type,System.Boolean)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m3891627047 (Il2CppObject * __this /* static, unused */, Type_t * ___t, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type)
extern "C"  ConstructorInfo_t3542137334 * ReflectionUtils_GetDefaultConstructor_m1759291423 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type,System.Boolean)
extern "C"  ConstructorInfo_t3542137334 * ReflectionUtils_GetDefaultConstructor_m1495828862 (Il2CppObject * __this /* static, unused */, Type_t * ___t, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullable(System.Type)
extern "C"  bool ReflectionUtils_IsNullable_m2193505948 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
extern "C"  bool ReflectionUtils_IsNullableType_m640088962 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::EnsureNotNullableType(System.Type)
extern "C"  Type_t * ReflectionUtils_EnsureNotNullableType_m3375354803 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsUnitializedValue(System.Object)
extern "C"  bool ReflectionUtils_IsUnitializedValue_m3385755367 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateUnitializedValue(System.Type)
extern "C"  Il2CppObject * ReflectionUtils_CreateUnitializedValue_m1606058939 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsPropertyIndexed(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsPropertyIndexed_m1974805275 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m1837579874 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___genericInterfaceDefinition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m907478999 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___genericInterfaceDefinition, Type_t ** ___implementingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::AssignableToTypeName(System.Type,System.String,System.Type&)
extern "C"  bool ReflectionUtils_AssignableToTypeName_m3749652063 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___fullTypeName, Type_t ** ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::AssignableToTypeName(System.Type,System.String)
extern "C"  bool ReflectionUtils_AssignableToTypeName_m2678596314 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___fullTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m1885766602 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___genericClassDefinition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m2668219247 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___genericClassDefinition, Type_t ** ___implementingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinitionInternal(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinitionInternal_m571389836 (Il2CppObject * __this /* static, unused */, Type_t * ___currentType, Type_t * ___genericClassDefinition, Type_t ** ___implementingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetCollectionItemType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetCollectionItemType_m2672508994 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryKeyValueTypes(System.Type,System.Type&,System.Type&)
extern "C"  void ReflectionUtils_GetDictionaryKeyValueTypes_m1361820184 (Il2CppObject * __this /* static, unused */, Type_t * ___dictionaryType, Type_t ** ___keyType, Type_t ** ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryValueType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetDictionaryValueType_m890456078 (Il2CppObject * __this /* static, unused */, Type_t * ___dictionaryType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryKeyType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetDictionaryKeyType_m1016342816 (Il2CppObject * __this /* static, unused */, Type_t * ___dictionaryType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
extern "C"  Type_t * ReflectionUtils_GetMemberUnderlyingType_m2208268337 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.MemberInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m2795771328 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m925551525 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo,System.Object)
extern "C"  Il2CppObject * ReflectionUtils_GetMemberValue_m2642429908 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C"  void ReflectionUtils_SetMemberValue_m738515179 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, Il2CppObject * ___target, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
extern "C"  bool ReflectionUtils_CanReadMemberValue_m697335974 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanSetMemberValue(System.Reflection.MemberInfo,System.Boolean,System.Boolean)
extern "C"  bool ReflectionUtils_CanSetMemberValue_m46089833 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, bool ___nonPublic, bool ___canSetReadOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFieldsAndProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  List_1_t3639992783 * ReflectionUtils_GetFieldsAndProperties_m3424261769 (Il2CppObject * __this /* static, unused */, Type_t * ___type, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsOverridenGenericMember(System.Reflection.MemberInfo,System.Reflection.BindingFlags)
extern "C"  bool ReflectionUtils_IsOverridenGenericMember_m1085028257 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetNameAndAssessmblyName(System.Type)
extern "C"  String_t* ReflectionUtils_GetNameAndAssessmblyName_m3815925327 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::MakeGenericType(System.Type,System.Type[])
extern "C"  Type_t * ReflectionUtils_MakeGenericType_m4192478737 (Il2CppObject * __this /* static, unused */, Type_t * ___genericTypeDefinition, TypeU5BU5D_t3431720054* ___innerTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateGeneric(System.Type,System.Type,System.Object[])
extern "C"  Il2CppObject * ReflectionUtils_CreateGeneric_m1616286028 (Il2CppObject * __this /* static, unused */, Type_t * ___genericTypeDefinition, Type_t * ___innerType, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateGeneric(System.Type,System.Collections.Generic.IList`1<System.Type>,System.Object[])
extern "C"  Il2CppObject * ReflectionUtils_CreateGeneric_m952862189 (Il2CppObject * __this /* static, unused */, Type_t * ___genericTypeDefinition, Il2CppObject* ___innerTypes, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateGeneric(System.Type,System.Collections.Generic.IList`1<System.Type>,System.Func`3<System.Type,System.Collections.Generic.IList`1<System.Object>,System.Object>,System.Object[])
extern "C"  Il2CppObject * ReflectionUtils_CreateGeneric_m3903140063 (Il2CppObject * __this /* static, unused */, Type_t * ___genericTypeDefinition, Il2CppObject* ___innerTypes, Func_3_t3823099214 * ___instanceCreator, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsCompatibleValue(System.Object,System.Type)
extern "C"  bool ReflectionUtils_IsCompatibleValue_m2629950564 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateInstance(System.Type,System.Object[])
extern "C"  Il2CppObject * ReflectionUtils_CreateInstance_m2555227011 (Il2CppObject * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SplitFullyQualifiedTypeName(System.String,System.String&,System.String&)
extern "C"  void ReflectionUtils_SplitFullyQualifiedTypeName_m2376734293 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName, String_t** ___typeName, String_t** ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.ReflectionUtils::GetAssemblyDelimiterIndex(System.String)
extern "C"  Nullable_1_t1438485399  ReflectionUtils_GetAssemblyDelimiterIndex_m905170288 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberInfoFromType(System.Type,System.Reflection.MemberInfo)
extern "C"  MemberInfo_t * ReflectionUtils_GetMemberInfoFromType_m225072048 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFields(System.Type,System.Reflection.BindingFlags)
extern "C"  Il2CppObject* ReflectionUtils_GetFields_m2113888898 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateFields(System.Collections.Generic.IList`1<System.Reflection.MemberInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateFields_m2207215002 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___initialFields, Type_t * ___targetType, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  Il2CppObject* ReflectionUtils_GetProperties_m2166755899 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.BindingFlags Newtonsoft.Json.Utilities.ReflectionUtils::RemoveFlag(System.Reflection.BindingFlags,System.Reflection.BindingFlags)
extern "C"  int32_t ReflectionUtils_RemoveFlag_m3325226855 (Il2CppObject * __this /* static, unused */, int32_t ___bindingAttr, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateProperties(System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateProperties_m954813957 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___initialProperties, Type_t * ___targetType, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::<GetFieldsAndProperties>m__41(System.Reflection.MemberInfo)
extern "C"  String_t* ReflectionUtils_U3CGetFieldsAndPropertiesU3Em__41_m3018147798 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>__AnonType0`2<System.Int32,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>> Newtonsoft.Json.Utilities.ReflectionUtils::<GetFieldsAndProperties>m__42(System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>)
extern "C"  U3CU3E__AnonType0_2_t675844848 * ReflectionUtils_U3CGetFieldsAndPropertiesU3Em__42_m2688226790 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___g, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::<CreateGeneric>m__44(System.Type,System.Collections.Generic.IList`1<System.Object>)
extern "C"  Il2CppObject * ReflectionUtils_U3CCreateGenericU3Em__44_m2515076851 (Il2CppObject * __this /* static, unused */, Type_t * ___t, Il2CppObject* ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::<GetMemberInfoFromType>m__45(System.Reflection.ParameterInfo)
extern "C"  Type_t * ReflectionUtils_U3CGetMemberInfoFromTypeU3Em__45_m2175382557 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::<GetChildPrivateFields>m__46(System.Reflection.FieldInfo)
extern "C"  bool ReflectionUtils_U3CGetChildPrivateFieldsU3Em__46_m3251665617 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
