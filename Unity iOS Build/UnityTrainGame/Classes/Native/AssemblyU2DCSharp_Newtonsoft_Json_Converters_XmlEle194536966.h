#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlElement
struct XmlElement_t3562928333;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Converters_XmlNo3886750706.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.XmlElementWrapper
struct  XmlElementWrapper_t194536966  : public XmlNodeWrapper_t3886750706
{
public:
	// System.Xml.XmlElement Newtonsoft.Json.Converters.XmlElementWrapper::_element
	XmlElement_t3562928333 * ____element_1;

public:
	inline static int32_t get_offset_of__element_1() { return static_cast<int32_t>(offsetof(XmlElementWrapper_t194536966, ____element_1)); }
	inline XmlElement_t3562928333 * get__element_1() const { return ____element_1; }
	inline XmlElement_t3562928333 ** get_address_of__element_1() { return &____element_1; }
	inline void set__element_1(XmlElement_t3562928333 * value)
	{
		____element_1 = value;
		Il2CppCodeGenWriteBarrier(&____element_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
