#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNameEntry
struct XmlNameEntry_t3218765880;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t886430410;

#include "System_Xml_System_Xml_XmlNode3592213601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttribute
struct  XmlAttribute_t2022155821  : public XmlNode_t3592213601
{
public:
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t3218765880 * ___name_6;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_7;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t3253021914 * ___lastLinkedChild_8;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	Il2CppObject * ___schemaInfo_9;

public:
	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(XmlAttribute_t2022155821, ___name_6)); }
	inline XmlNameEntry_t3218765880 * get_name_6() const { return ___name_6; }
	inline XmlNameEntry_t3218765880 ** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(XmlNameEntry_t3218765880 * value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier(&___name_6, value);
	}

	inline static int32_t get_offset_of_isDefault_7() { return static_cast<int32_t>(offsetof(XmlAttribute_t2022155821, ___isDefault_7)); }
	inline bool get_isDefault_7() const { return ___isDefault_7; }
	inline bool* get_address_of_isDefault_7() { return &___isDefault_7; }
	inline void set_isDefault_7(bool value)
	{
		___isDefault_7 = value;
	}

	inline static int32_t get_offset_of_lastLinkedChild_8() { return static_cast<int32_t>(offsetof(XmlAttribute_t2022155821, ___lastLinkedChild_8)); }
	inline XmlLinkedNode_t3253021914 * get_lastLinkedChild_8() const { return ___lastLinkedChild_8; }
	inline XmlLinkedNode_t3253021914 ** get_address_of_lastLinkedChild_8() { return &___lastLinkedChild_8; }
	inline void set_lastLinkedChild_8(XmlLinkedNode_t3253021914 * value)
	{
		___lastLinkedChild_8 = value;
		Il2CppCodeGenWriteBarrier(&___lastLinkedChild_8, value);
	}

	inline static int32_t get_offset_of_schemaInfo_9() { return static_cast<int32_t>(offsetof(XmlAttribute_t2022155821, ___schemaInfo_9)); }
	inline Il2CppObject * get_schemaInfo_9() const { return ___schemaInfo_9; }
	inline Il2CppObject ** get_address_of_schemaInfo_9() { return &___schemaInfo_9; }
	inline void set_schemaInfo_9(Il2CppObject * value)
	{
		___schemaInfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___schemaInfo_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
