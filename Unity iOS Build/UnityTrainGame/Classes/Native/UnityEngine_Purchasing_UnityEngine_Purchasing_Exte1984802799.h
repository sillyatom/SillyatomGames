#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1655822261;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.ProductDescription
struct  ProductDescription_t1984802799  : public Il2CppObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::<metadata>k__BackingField
	ProductMetadata_t1655822261 * ___U3CmetadataU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<transactionId>k__BackingField
	String_t* ___U3CtransactionIdU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDescription_t1984802799, ___U3CstoreSpecificIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_0() const { return ___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return &___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstoreSpecificIdU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDescription_t1984802799, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_t1655822261 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_t1655822261 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_t1655822261 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmetadataU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDescription_t1984802799, ___U3CreceiptU3Ek__BackingField_2)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_2() const { return ___U3CreceiptU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_2() { return &___U3CreceiptU3Ek__BackingField_2; }
	inline void set_U3CreceiptU3Ek__BackingField_2(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CreceiptU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CtransactionIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDescription_t1984802799, ___U3CtransactionIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIdU3Ek__BackingField_3() const { return ___U3CtransactionIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIdU3Ek__BackingField_3() { return &___U3CtransactionIdU3Ek__BackingField_3; }
	inline void set_U3CtransactionIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtransactionIdU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
