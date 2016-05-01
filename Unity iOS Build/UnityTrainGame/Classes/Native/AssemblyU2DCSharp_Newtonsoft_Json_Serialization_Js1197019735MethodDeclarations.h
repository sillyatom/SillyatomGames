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

// Newtonsoft.Json.JsonContainerAttribute
struct JsonContainerAttribute_t4246140134;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonObjectAttribute
struct JsonObjectAttribute_t1059491480;
// Newtonsoft.Json.JsonArrayAttribute
struct JsonArrayAttribute_t2894116366;
// System.Runtime.Serialization.DataContractAttribute
struct DataContractAttribute_t2606959609;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t3625462001;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t2334200065;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3398830607;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t267368177;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_MemberSerializat1745874425.h"

// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector::.cctor()
extern "C"  void JsonTypeReflector__cctor_m1045703757 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonContainerAttribute(System.Type)
extern "C"  JsonContainerAttribute_t4246140134 * JsonTypeReflector_GetJsonContainerAttribute_m1181196189 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonObjectAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonObjectAttribute(System.Type)
extern "C"  JsonObjectAttribute_t1059491480 * JsonTypeReflector_GetJsonObjectAttribute_m1897590281 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonArrayAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonArrayAttribute(System.Type)
extern "C"  JsonArrayAttribute_t2894116366 * JsonTypeReflector_GetJsonArrayAttribute_m4217886877 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.DataContractAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetDataContractAttribute(System.Type)
extern "C"  DataContractAttribute_t2606959609 * JsonTypeReflector_GetDataContractAttribute_m3859448443 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.DataMemberAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetDataMemberAttribute(System.Reflection.MemberInfo)
extern "C"  DataMemberAttribute_t3625462001 * JsonTypeReflector_GetDataMemberAttribute_m2774782914 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.MemberSerialization Newtonsoft.Json.Serialization.JsonTypeReflector::GetObjectMemberSerialization(System.Type)
extern "C"  int32_t JsonTypeReflector_GetObjectMemberSerialization_m3310198566 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonConverterType(System.Reflection.ICustomAttributeProvider)
extern "C"  Type_t * JsonTypeReflector_GetJsonConverterType_m3579551887 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonConverterTypeFromAttribute(System.Reflection.ICustomAttributeProvider)
extern "C"  Type_t * JsonTypeReflector_GetJsonConverterTypeFromAttribute_m1704420503 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonConverter(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C"  JsonConverter_t757201947 * JsonTypeReflector_GetJsonConverter_m2583059506 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider, Type_t * ___targetConvertedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter Newtonsoft.Json.Serialization.JsonTypeReflector::GetTypeConverter(System.Type)
extern "C"  TypeConverter_t3398830607 * JsonTypeReflector_GetTypeConverter_m1748432949 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetAssociatedMetadataType(System.Type)
extern "C"  Type_t * JsonTypeReflector_GetAssociatedMetadataType_m3014405724 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetAssociateMetadataTypeFromAttribute(System.Type)
extern "C"  Type_t * JsonTypeReflector_GetAssociateMetadataTypeFromAttribute_m2509584000 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetMetadataTypeAttributeType()
extern "C"  Type_t * JsonTypeReflector_GetMetadataTypeAttributeType_m2087362945 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonTypeReflector::get_DynamicCodeGeneration()
extern "C"  bool JsonTypeReflector_get_DynamicCodeGeneration_m1078305485 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
extern "C"  ReflectionDelegateFactory_t267368177 * JsonTypeReflector_get_ReflectionDelegateFactory_m10041857 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
