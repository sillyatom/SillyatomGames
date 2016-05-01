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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "System_Xml_System_Xml_XmlDateTimeSerializationMode167003369.h"
#include "mscorlib_System_DateTimeKind3550648708.h"

// System.String Newtonsoft.Json.Utilities.DateTimeUtils::GetLocalOffset(System.DateTime)
extern "C"  String_t* DateTimeUtils_GetLocalOffset_m970198813 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDateTimeSerializationMode Newtonsoft.Json.Utilities.DateTimeUtils::ToSerializationMode(System.DateTimeKind)
extern "C"  int32_t DateTimeUtils_ToSerializationMode_m1293127748 (Il2CppObject * __this /* static, unused */, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
