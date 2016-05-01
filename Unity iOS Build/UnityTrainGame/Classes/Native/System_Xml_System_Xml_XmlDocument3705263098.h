#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.String
struct String_t;
// System.Xml.XmlImplementation
struct XmlImplementation_t3180216657;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3408046266;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t886430410;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1687630483;

#include "System_Xml_System_Xml_XmlNode3592213601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t3705263098  : public XmlNode_t3592213601
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_7;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_8;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t3232213908 * ___nameTable_9;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_10;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t3180216657 * ___implementation_11;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_12;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t2502213349 * ___resolver_13;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t3875263730 * ___idTable_14;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t3408046266 * ___nameCache_15;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t3253021914 * ___lastLinkedChild_16;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	Il2CppObject * ___schemaInfo_17;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t1687630483 * ___NodeChanged_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t1687630483 * ___NodeChanging_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t1687630483 * ___NodeInserted_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t1687630483 * ___NodeInserting_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t1687630483 * ___NodeRemoved_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t1687630483 * ___NodeRemoving_24;

public:
	inline static int32_t get_offset_of_optimal_create_element_7() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___optimal_create_element_7)); }
	inline bool get_optimal_create_element_7() const { return ___optimal_create_element_7; }
	inline bool* get_address_of_optimal_create_element_7() { return &___optimal_create_element_7; }
	inline void set_optimal_create_element_7(bool value)
	{
		___optimal_create_element_7 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_8() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___optimal_create_attribute_8)); }
	inline bool get_optimal_create_attribute_8() const { return ___optimal_create_attribute_8; }
	inline bool* get_address_of_optimal_create_attribute_8() { return &___optimal_create_attribute_8; }
	inline void set_optimal_create_attribute_8(bool value)
	{
		___optimal_create_attribute_8 = value;
	}

	inline static int32_t get_offset_of_nameTable_9() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___nameTable_9)); }
	inline XmlNameTable_t3232213908 * get_nameTable_9() const { return ___nameTable_9; }
	inline XmlNameTable_t3232213908 ** get_address_of_nameTable_9() { return &___nameTable_9; }
	inline void set_nameTable_9(XmlNameTable_t3232213908 * value)
	{
		___nameTable_9 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_9, value);
	}

	inline static int32_t get_offset_of_baseURI_10() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___baseURI_10)); }
	inline String_t* get_baseURI_10() const { return ___baseURI_10; }
	inline String_t** get_address_of_baseURI_10() { return &___baseURI_10; }
	inline void set_baseURI_10(String_t* value)
	{
		___baseURI_10 = value;
		Il2CppCodeGenWriteBarrier(&___baseURI_10, value);
	}

	inline static int32_t get_offset_of_implementation_11() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___implementation_11)); }
	inline XmlImplementation_t3180216657 * get_implementation_11() const { return ___implementation_11; }
	inline XmlImplementation_t3180216657 ** get_address_of_implementation_11() { return &___implementation_11; }
	inline void set_implementation_11(XmlImplementation_t3180216657 * value)
	{
		___implementation_11 = value;
		Il2CppCodeGenWriteBarrier(&___implementation_11, value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_12() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___preserveWhitespace_12)); }
	inline bool get_preserveWhitespace_12() const { return ___preserveWhitespace_12; }
	inline bool* get_address_of_preserveWhitespace_12() { return &___preserveWhitespace_12; }
	inline void set_preserveWhitespace_12(bool value)
	{
		___preserveWhitespace_12 = value;
	}

	inline static int32_t get_offset_of_resolver_13() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___resolver_13)); }
	inline XmlResolver_t2502213349 * get_resolver_13() const { return ___resolver_13; }
	inline XmlResolver_t2502213349 ** get_address_of_resolver_13() { return &___resolver_13; }
	inline void set_resolver_13(XmlResolver_t2502213349 * value)
	{
		___resolver_13 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_13, value);
	}

	inline static int32_t get_offset_of_idTable_14() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___idTable_14)); }
	inline Hashtable_t3875263730 * get_idTable_14() const { return ___idTable_14; }
	inline Hashtable_t3875263730 ** get_address_of_idTable_14() { return &___idTable_14; }
	inline void set_idTable_14(Hashtable_t3875263730 * value)
	{
		___idTable_14 = value;
		Il2CppCodeGenWriteBarrier(&___idTable_14, value);
	}

	inline static int32_t get_offset_of_nameCache_15() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___nameCache_15)); }
	inline XmlNameEntryCache_t3408046266 * get_nameCache_15() const { return ___nameCache_15; }
	inline XmlNameEntryCache_t3408046266 ** get_address_of_nameCache_15() { return &___nameCache_15; }
	inline void set_nameCache_15(XmlNameEntryCache_t3408046266 * value)
	{
		___nameCache_15 = value;
		Il2CppCodeGenWriteBarrier(&___nameCache_15, value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_16() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___lastLinkedChild_16)); }
	inline XmlLinkedNode_t3253021914 * get_lastLinkedChild_16() const { return ___lastLinkedChild_16; }
	inline XmlLinkedNode_t3253021914 ** get_address_of_lastLinkedChild_16() { return &___lastLinkedChild_16; }
	inline void set_lastLinkedChild_16(XmlLinkedNode_t3253021914 * value)
	{
		___lastLinkedChild_16 = value;
		Il2CppCodeGenWriteBarrier(&___lastLinkedChild_16, value);
	}

	inline static int32_t get_offset_of_schemaInfo_17() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___schemaInfo_17)); }
	inline Il2CppObject * get_schemaInfo_17() const { return ___schemaInfo_17; }
	inline Il2CppObject ** get_address_of_schemaInfo_17() { return &___schemaInfo_17; }
	inline void set_schemaInfo_17(Il2CppObject * value)
	{
		___schemaInfo_17 = value;
		Il2CppCodeGenWriteBarrier(&___schemaInfo_17, value);
	}

	inline static int32_t get_offset_of_loadMode_18() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___loadMode_18)); }
	inline bool get_loadMode_18() const { return ___loadMode_18; }
	inline bool* get_address_of_loadMode_18() { return &___loadMode_18; }
	inline void set_loadMode_18(bool value)
	{
		___loadMode_18 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_19() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___NodeChanged_19)); }
	inline XmlNodeChangedEventHandler_t1687630483 * get_NodeChanged_19() const { return ___NodeChanged_19; }
	inline XmlNodeChangedEventHandler_t1687630483 ** get_address_of_NodeChanged_19() { return &___NodeChanged_19; }
	inline void set_NodeChanged_19(XmlNodeChangedEventHandler_t1687630483 * value)
	{
		___NodeChanged_19 = value;
		Il2CppCodeGenWriteBarrier(&___NodeChanged_19, value);
	}

	inline static int32_t get_offset_of_NodeChanging_20() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___NodeChanging_20)); }
	inline XmlNodeChangedEventHandler_t1687630483 * get_NodeChanging_20() const { return ___NodeChanging_20; }
	inline XmlNodeChangedEventHandler_t1687630483 ** get_address_of_NodeChanging_20() { return &___NodeChanging_20; }
	inline void set_NodeChanging_20(XmlNodeChangedEventHandler_t1687630483 * value)
	{
		___NodeChanging_20 = value;
		Il2CppCodeGenWriteBarrier(&___NodeChanging_20, value);
	}

	inline static int32_t get_offset_of_NodeInserted_21() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___NodeInserted_21)); }
	inline XmlNodeChangedEventHandler_t1687630483 * get_NodeInserted_21() const { return ___NodeInserted_21; }
	inline XmlNodeChangedEventHandler_t1687630483 ** get_address_of_NodeInserted_21() { return &___NodeInserted_21; }
	inline void set_NodeInserted_21(XmlNodeChangedEventHandler_t1687630483 * value)
	{
		___NodeInserted_21 = value;
		Il2CppCodeGenWriteBarrier(&___NodeInserted_21, value);
	}

	inline static int32_t get_offset_of_NodeInserting_22() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___NodeInserting_22)); }
	inline XmlNodeChangedEventHandler_t1687630483 * get_NodeInserting_22() const { return ___NodeInserting_22; }
	inline XmlNodeChangedEventHandler_t1687630483 ** get_address_of_NodeInserting_22() { return &___NodeInserting_22; }
	inline void set_NodeInserting_22(XmlNodeChangedEventHandler_t1687630483 * value)
	{
		___NodeInserting_22 = value;
		Il2CppCodeGenWriteBarrier(&___NodeInserting_22, value);
	}

	inline static int32_t get_offset_of_NodeRemoved_23() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___NodeRemoved_23)); }
	inline XmlNodeChangedEventHandler_t1687630483 * get_NodeRemoved_23() const { return ___NodeRemoved_23; }
	inline XmlNodeChangedEventHandler_t1687630483 ** get_address_of_NodeRemoved_23() { return &___NodeRemoved_23; }
	inline void set_NodeRemoved_23(XmlNodeChangedEventHandler_t1687630483 * value)
	{
		___NodeRemoved_23 = value;
		Il2CppCodeGenWriteBarrier(&___NodeRemoved_23, value);
	}

	inline static int32_t get_offset_of_NodeRemoving_24() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098, ___NodeRemoving_24)); }
	inline XmlNodeChangedEventHandler_t1687630483 * get_NodeRemoving_24() const { return ___NodeRemoving_24; }
	inline XmlNodeChangedEventHandler_t1687630483 ** get_address_of_NodeRemoving_24() { return &___NodeRemoving_24; }
	inline void set_NodeRemoving_24(XmlNodeChangedEventHandler_t1687630483 * value)
	{
		___NodeRemoving_24 = value;
		Il2CppCodeGenWriteBarrier(&___NodeRemoving_24, value);
	}
};

struct XmlDocument_t3705263098_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t3431720054* ___optimal_create_types_6;

public:
	inline static int32_t get_offset_of_optimal_create_types_6() { return static_cast<int32_t>(offsetof(XmlDocument_t3705263098_StaticFields, ___optimal_create_types_6)); }
	inline TypeU5BU5D_t3431720054* get_optimal_create_types_6() const { return ___optimal_create_types_6; }
	inline TypeU5BU5D_t3431720054** get_address_of_optimal_create_types_6() { return &___optimal_create_types_6; }
	inline void set_optimal_create_types_6(TypeU5BU5D_t3431720054* value)
	{
		___optimal_create_types_6 = value;
		Il2CppCodeGenWriteBarrier(&___optimal_create_types_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
