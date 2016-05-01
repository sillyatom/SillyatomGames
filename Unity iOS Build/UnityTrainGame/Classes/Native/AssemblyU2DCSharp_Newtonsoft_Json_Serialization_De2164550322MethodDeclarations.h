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

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t2164550322;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1994304730;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t3639992783;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t3651158994;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty>
struct IList_1_t4007936720;
// Newtonsoft.Json.Serialization.JsonPropertyCollection
struct JsonPropertyCollection_t4151699636;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t1841444406;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// System.Func`1<System.Object>
struct Func_1_t1979887667;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t128316969;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t1632130460;
// Newtonsoft.Json.Serialization.JsonPrimitiveContract
struct JsonPrimitiveContract_t1219024426;
// Newtonsoft.Json.Serialization.JsonLinqContract
struct JsonLinqContract_t2337515923;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t3363619915;
// Newtonsoft.Json.Serialization.JsonStringContract
struct JsonStringContract_t2937851556;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t408994802;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t2334200065;
// System.Predicate`1<System.Object>
struct Predicate_1_t1408070318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js4151699636.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1841444406.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js2267638131.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_MemberSerializat1745874425.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.ctor()
extern "C"  void DefaultContractResolver__ctor_m2226229541 (DefaultContractResolver_t2164550322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.ctor(System.Boolean)
extern "C"  void DefaultContractResolver__ctor_m1094509020 (DefaultContractResolver_t2164550322 * __this, bool ___shareCache, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.cctor()
extern "C"  void DefaultContractResolver__cctor_m4106510120 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::get_Instance()
extern "C"  Il2CppObject * DefaultContractResolver_get_Instance_m3971822488 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::get_DynamicCodeGeneration()
extern "C"  bool DefaultContractResolver_get_DynamicCodeGeneration_m2334145810 (DefaultContractResolver_t2164550322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::get_DefaultMembersSearchFlags()
extern "C"  int32_t DefaultContractResolver_get_DefaultMembersSearchFlags_m3419364184 (DefaultContractResolver_t2164550322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::set_DefaultMembersSearchFlags(System.Reflection.BindingFlags)
extern "C"  void DefaultContractResolver_set_DefaultMembersSearchFlags_m3054309287 (DefaultContractResolver_t2164550322 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::get_SerializeCompilerGeneratedMembers()
extern "C"  bool DefaultContractResolver_get_SerializeCompilerGeneratedMembers_m4255795607 (DefaultContractResolver_t2164550322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::set_SerializeCompilerGeneratedMembers(System.Boolean)
extern "C"  void DefaultContractResolver_set_SerializeCompilerGeneratedMembers_m3856346150 (DefaultContractResolver_t2164550322 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.DefaultContractResolver::ResolveContract(System.Type)
extern "C"  JsonContract_t2267638131 * DefaultContractResolver_ResolveContract_m264068904 (DefaultContractResolver_t2164550322 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo> Newtonsoft.Json.Serialization.DefaultContractResolver::GetSerializableMembers(System.Type)
extern "C"  List_1_t3639992783 * DefaultContractResolver_GetSerializableMembers_m442594293 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::ShouldSerializeEntityMember(System.Reflection.MemberInfo)
extern "C"  bool DefaultContractResolver_ShouldSerializeEntityMember_m694562357 (DefaultContractResolver_t2164550322 * __this, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonObjectContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateObjectContract(System.Type)
extern "C"  JsonObjectContract_t3651158994 * DefaultContractResolver_CreateObjectContract_m980833150 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Serialization.DefaultContractResolver::GetAttributeConstructor(System.Type)
extern "C"  ConstructorInfo_t3542137334 * DefaultContractResolver_GetAttributeConstructor_m2752338419 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Serialization.DefaultContractResolver::GetParametrizedConstructor(System.Type)
extern "C"  ConstructorInfo_t3542137334 * DefaultContractResolver_GetParametrizedConstructor_m2325060875 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.DefaultContractResolver::CreateConstructorParameters(System.Reflection.ConstructorInfo,Newtonsoft.Json.Serialization.JsonPropertyCollection)
extern "C"  Il2CppObject* DefaultContractResolver_CreateConstructorParameters_m3808836759 (DefaultContractResolver_t2164550322 * __this, ConstructorInfo_t3542137334 * ___constructor, JsonPropertyCollection_t4151699636 * ___memberProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.DefaultContractResolver::CreatePropertyFromConstructorParameter(Newtonsoft.Json.Serialization.JsonProperty,System.Reflection.ParameterInfo)
extern "C"  JsonProperty_t1841444406 * DefaultContractResolver_CreatePropertyFromConstructorParameter_m4004255909 (DefaultContractResolver_t2164550322 * __this, JsonProperty_t1841444406 * ___matchingMemberProperty, ParameterInfo_t2610273829 * ___parameterInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.DefaultContractResolver::ResolveContractConverter(System.Type)
extern "C"  JsonConverter_t757201947 * DefaultContractResolver_ResolveContractConverter_m1182381512 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver::GetDefaultCreator(System.Type)
extern "C"  Func_1_t1979887667 * DefaultContractResolver_GetDefaultCreator_m2773754592 (DefaultContractResolver_t2164550322 * __this, Type_t * ___createdType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::InitializeContract(Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void DefaultContractResolver_InitializeContract_m3088838164 (DefaultContractResolver_t2164550322 * __this, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::ResolveCallbackMethods(Newtonsoft.Json.Serialization.JsonContract,System.Type)
extern "C"  void DefaultContractResolver_ResolveCallbackMethods_m606941862 (DefaultContractResolver_t2164550322 * __this, JsonContract_t2267638131 * ___contract, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::GetCallbackMethodsForType(System.Type,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&)
extern "C"  void DefaultContractResolver_GetCallbackMethodsForType_m2447904967 (DefaultContractResolver_t2164550322 * __this, Type_t * ___type, MethodInfo_t ** ___onSerializing, MethodInfo_t ** ___onSerialized, MethodInfo_t ** ___onDeserializing, MethodInfo_t ** ___onDeserialized, MethodInfo_t ** ___onError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonDictionaryContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateDictionaryContract(System.Type)
extern "C"  JsonDictionaryContract_t128316969 * DefaultContractResolver_CreateDictionaryContract_m2514124560 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonArrayContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateArrayContract(System.Type)
extern "C"  JsonArrayContract_t1632130460 * DefaultContractResolver_CreateArrayContract_m3305075332 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonPrimitiveContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreatePrimitiveContract(System.Type)
extern "C"  JsonPrimitiveContract_t1219024426 * DefaultContractResolver_CreatePrimitiveContract_m227119044 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonLinqContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateLinqContract(System.Type)
extern "C"  JsonLinqContract_t2337515923 * DefaultContractResolver_CreateLinqContract_m3088859324 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonISerializableContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateISerializableContract(System.Type)
extern "C"  JsonISerializableContract_t3363619915 * DefaultContractResolver_CreateISerializableContract_m2168635876 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonStringContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateStringContract(System.Type)
extern "C"  JsonStringContract_t2937851556 * DefaultContractResolver_CreateStringContract_m2973852506 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateContract(System.Type)
extern "C"  JsonContract_t2267638131 * DefaultContractResolver_CreateContract_m1655376124 (DefaultContractResolver_t2164550322 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::CanConvertToString(System.Type)
extern "C"  bool DefaultContractResolver_CanConvertToString_m982344671 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::IsValidCallback(System.Reflection.MethodInfo,System.Reflection.ParameterInfo[],System.Type,System.Reflection.MethodInfo,System.Type&)
extern "C"  bool DefaultContractResolver_IsValidCallback_m1424809419 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method, ParameterInfoU5BU5D_t1127461800* ___parameters, Type_t * ___attributeType, MethodInfo_t * ___currentCallback, Type_t ** ___prevAttributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver::GetClrTypeFullName(System.Type)
extern "C"  String_t* DefaultContractResolver_GetClrTypeFullName_m1162570678 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.DefaultContractResolver::CreateProperties(System.Type,Newtonsoft.Json.MemberSerialization)
extern "C"  Il2CppObject* DefaultContractResolver_CreateProperties_m1810277208 (DefaultContractResolver_t2164550322 * __this, Type_t * ___type, int32_t ___memberSerialization, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.DefaultContractResolver::CreateMemberValueProvider(System.Reflection.MemberInfo)
extern "C"  Il2CppObject * DefaultContractResolver_CreateMemberValueProvider_m1888863220 (DefaultContractResolver_t2164550322 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.DefaultContractResolver::CreateProperty(System.Reflection.MemberInfo,Newtonsoft.Json.MemberSerialization)
extern "C"  JsonProperty_t1841444406 * DefaultContractResolver_CreateProperty_m1388020866 (DefaultContractResolver_t2164550322 * __this, MemberInfo_t * ___member, int32_t ___memberSerialization, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::SetPropertySettingsFromAttributes(Newtonsoft.Json.Serialization.JsonProperty,System.Reflection.ICustomAttributeProvider,System.String,System.Type,Newtonsoft.Json.MemberSerialization,System.Boolean&,System.Boolean&)
extern "C"  void DefaultContractResolver_SetPropertySettingsFromAttributes_m875975449 (DefaultContractResolver_t2164550322 * __this, JsonProperty_t1841444406 * ___property, Il2CppObject * ___attributeProvider, String_t* ___name, Type_t * ___declaringType, int32_t ___memberSerialization, bool* ___allowNonPublicAccess, bool* ___hasExplicitAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver::CreateShouldSerializeTest(System.Reflection.MemberInfo)
extern "C"  Predicate_1_t1408070318 * DefaultContractResolver_CreateShouldSerializeTest_m464574170 (DefaultContractResolver_t2164550322 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::SetIsSpecifiedActions(Newtonsoft.Json.Serialization.JsonProperty,System.Reflection.MemberInfo,System.Boolean)
extern "C"  void DefaultContractResolver_SetIsSpecifiedActions_m2070632079 (DefaultContractResolver_t2164550322 * __this, JsonProperty_t1841444406 * ___property, MemberInfo_t * ___member, bool ___allowNonPublicAccess, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver::ResolvePropertyName(System.String)
extern "C"  String_t* DefaultContractResolver_ResolvePropertyName_m1898433744 (DefaultContractResolver_t2164550322 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<GetSerializableMembers>m__1C(System.Reflection.MemberInfo)
extern "C"  bool DefaultContractResolver_U3CGetSerializableMembersU3Em__1C_m869284076 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<GetSerializableMembers>m__1D(System.Reflection.MemberInfo)
extern "C"  bool DefaultContractResolver_U3CGetSerializableMembersU3Em__1D_m1220084013 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<CreateObjectContract>m__1E(System.Reflection.ConstructorInfo)
extern "C"  bool DefaultContractResolver_U3CCreateObjectContractU3Em__1E_m1282338507 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t3542137334 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<GetAttributeConstructor>m__1F(System.Reflection.ConstructorInfo)
extern "C"  bool DefaultContractResolver_U3CGetAttributeConstructorU3Em__1F_m3297923847 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t3542137334 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.DefaultContractResolver::<CreateProperties>m__21(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  int32_t DefaultContractResolver_U3CCreatePropertiesU3Em__21_m2996004570 (Il2CppObject * __this /* static, unused */, JsonProperty_t1841444406 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
