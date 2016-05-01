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

// Newtonsoft.Json.Converters.XmlNodeConverter
struct XmlNodeConverter_t2302997311;
// System.String
struct String_t;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.Converters.IXmlNode
struct IXmlNode_t314115688;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1861067185;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Type
struct Type_t;
// Newtonsoft.Json.Converters.IXmlDocument
struct IXmlDocument_t2884133505;
// Newtonsoft.Json.Converters.IXmlElement
struct IXmlElement_t3875231814;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Converters.IXmlNode>
struct IEnumerable_1_t3186270044;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "System_Xml_System_Xml_XmlNamespaceManager1861067185.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::.ctor()
extern "C"  void XmlNodeConverter__ctor_m2472052734 (XmlNodeConverter_t2302997311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::get_DeserializeRootElementName()
extern "C"  String_t* XmlNodeConverter_get_DeserializeRootElementName_m3879429810 (XmlNodeConverter_t2302997311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_DeserializeRootElementName(System.String)
extern "C"  void XmlNodeConverter_set_DeserializeRootElementName_m3092863801 (XmlNodeConverter_t2302997311 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_WriteArrayAttribute()
extern "C"  bool XmlNodeConverter_get_WriteArrayAttribute_m219780457 (XmlNodeConverter_t2302997311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_WriteArrayAttribute(System.Boolean)
extern "C"  void XmlNodeConverter_set_WriteArrayAttribute_m3395668344 (XmlNodeConverter_t2302997311 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_OmitRootObject()
extern "C"  bool XmlNodeConverter_get_OmitRootObject_m2975710981 (XmlNodeConverter_t2302997311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_OmitRootObject(System.Boolean)
extern "C"  void XmlNodeConverter_set_OmitRootObject_m67667556 (XmlNodeConverter_t2302997311 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void XmlNodeConverter_WriteJson_m1812059286 (XmlNodeConverter_t2302997311 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeConverter::WrapXml(System.Object)
extern "C"  Il2CppObject * XmlNodeConverter_WrapXml_m617411182 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::PushParentNamespaces(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
extern "C"  void XmlNodeConverter_PushParentNamespaces_m4021842777 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ResolveFullName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
extern "C"  String_t* XmlNodeConverter_ResolveFullName_m1021095068 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::GetPropertyName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
extern "C"  String_t* XmlNodeConverter_GetPropertyName_m3829159244 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsArray(Newtonsoft.Json.Converters.IXmlNode)
extern "C"  bool XmlNodeConverter_IsArray_m415743613 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeGroupedNodes(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
extern "C"  void XmlNodeConverter_SerializeGroupedNodes_m1980391103 (XmlNodeConverter_t2302997311 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, bool ___writePropertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeNode(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
extern "C"  void XmlNodeConverter_SerializeNode_m257388430 (XmlNodeConverter_t2302997311 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___node, XmlNamespaceManager_t1861067185 * ___manager, bool ___writePropertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.XmlNodeConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * XmlNodeConverter_ReadJson_m2881845767 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeValue(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,System.String,Newtonsoft.Json.Converters.IXmlNode)
extern "C"  void XmlNodeConverter_DeserializeValue_m1006350864 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, XmlNamespaceManager_t1861067185 * ___manager, String_t* ___propertyName, Il2CppObject * ___currentNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager)
extern "C"  void XmlNodeConverter_ReadElement_m2786917570 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, Il2CppObject * ___currentNode, String_t* ___propertyName, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadArrayElements(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.String,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
extern "C"  void XmlNodeConverter_ReadArrayElements_m1210940686 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, String_t* ___propertyName, Il2CppObject * ___currentNode, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddJsonArrayAttribute(Newtonsoft.Json.Converters.IXmlElement,Newtonsoft.Json.Converters.IXmlDocument)
extern "C"  void XmlNodeConverter_AddJsonArrayAttribute_m923763997 (XmlNodeConverter_t2302997311 * __this, Il2CppObject * ___element, Il2CppObject * ___document, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Newtonsoft.Json.Converters.XmlNodeConverter::ReadAttributeElements(Newtonsoft.Json.JsonReader,System.Xml.XmlNamespaceManager)
extern "C"  Dictionary_2_t2606186806 * XmlNodeConverter_ReadAttributeElements_m1677748620 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateInstruction(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String)
extern "C"  void XmlNodeConverter_CreateInstruction_m3462000285 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, Il2CppObject * ___currentNode, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(System.String,Newtonsoft.Json.Converters.IXmlDocument,System.String,System.Xml.XmlNamespaceManager)
extern "C"  Il2CppObject * XmlNodeConverter_CreateElement_m2527549609 (XmlNodeConverter_t2302997311 * __this, String_t* ___elementName, Il2CppObject * ___document, String_t* ___elementPrefix, XmlNamespaceManager_t1861067185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeNode(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,Newtonsoft.Json.Converters.IXmlNode)
extern "C"  void XmlNodeConverter_DeserializeNode_m911498479 (XmlNodeConverter_t2302997311 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___document, XmlNamespaceManager_t1861067185 * ___manager, Il2CppObject * ___currentNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsNamespaceAttribute(System.String,System.String&)
extern "C"  bool XmlNodeConverter_IsNamespaceAttribute_m3991903787 (XmlNodeConverter_t2302997311 * __this, String_t* ___attributeName, String_t** ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeConverter::ValueAttributes(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Converters.IXmlNode>)
extern "C"  Il2CppObject* XmlNodeConverter_ValueAttributes_m2742225691 (XmlNodeConverter_t2302997311 * __this, Il2CppObject* ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::CanConvert(System.Type)
extern "C"  bool XmlNodeConverter_CanConvert_m178606020 (XmlNodeConverter_t2302997311 * __this, Type_t * ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<IsArray>m__5(Newtonsoft.Json.Converters.IXmlNode)
extern "C"  bool XmlNodeConverter_U3CIsArrayU3Em__5_m4879609 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<ValueAttributes>m__9(Newtonsoft.Json.Converters.IXmlNode)
extern "C"  bool XmlNodeConverter_U3CValueAttributesU3Em__9_m1449517454 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
