#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "System_System_ComponentModel_PropertyDescriptor3995075053.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JPropertyDescriptor
struct  JPropertyDescriptor_t1852134917  : public PropertyDescriptor_t3995075053
{
public:
	// System.Type Newtonsoft.Json.Linq.JPropertyDescriptor::_propertyType
	Type_t * ____propertyType_2;

public:
	inline static int32_t get_offset_of__propertyType_2() { return static_cast<int32_t>(offsetof(JPropertyDescriptor_t1852134917, ____propertyType_2)); }
	inline Type_t * get__propertyType_2() const { return ____propertyType_2; }
	inline Type_t ** get_address_of__propertyType_2() { return &____propertyType_2; }
	inline void set__propertyType_2(Type_t * value)
	{
		____propertyType_2 = value;
		Il2CppCodeGenWriteBarrier(&____propertyType_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
