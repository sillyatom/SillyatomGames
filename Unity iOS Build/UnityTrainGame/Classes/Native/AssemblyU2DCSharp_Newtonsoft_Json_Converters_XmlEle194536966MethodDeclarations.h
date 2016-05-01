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

// Newtonsoft.Json.Converters.XmlElementWrapper
struct XmlElementWrapper_t194536966;
// System.Xml.XmlElement
struct XmlElement_t3562928333;
// Newtonsoft.Json.Converters.IXmlNode
struct IXmlNode_t314115688;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlElement3562928333.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Converters.XmlElementWrapper::.ctor(System.Xml.XmlElement)
extern "C"  void XmlElementWrapper__ctor_m3912127236 (XmlElementWrapper_t194536966 * __this, XmlElement_t3562928333 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.XmlElementWrapper::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode)
extern "C"  void XmlElementWrapper_SetAttributeNode_m595180559 (XmlElementWrapper_t194536966 * __this, Il2CppObject * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.XmlElementWrapper::GetPrefixOfNamespace(System.String)
extern "C"  String_t* XmlElementWrapper_GetPrefixOfNamespace_m1027796466 (XmlElementWrapper_t194536966 * __this, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
