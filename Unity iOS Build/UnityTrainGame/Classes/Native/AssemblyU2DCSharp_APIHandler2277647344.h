#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<API>
struct List_1_t797023987;
// APIHandler
struct APIHandler_t2277647344;
// System.Action`2<System.Int32,NetworkResponse>
struct Action_2_t2455300638;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// APIHandler
struct  APIHandler_t2277647344  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<API> APIHandler::_apis
	List_1_t797023987 * ____apis_0;
	// System.Int32 APIHandler::_runningId
	int32_t ____runningId_2;
	// System.Action`2<System.Int32,NetworkResponse> APIHandler::OnAPISuccess
	Action_2_t2455300638 * ___OnAPISuccess_3;

public:
	inline static int32_t get_offset_of__apis_0() { return static_cast<int32_t>(offsetof(APIHandler_t2277647344, ____apis_0)); }
	inline List_1_t797023987 * get__apis_0() const { return ____apis_0; }
	inline List_1_t797023987 ** get_address_of__apis_0() { return &____apis_0; }
	inline void set__apis_0(List_1_t797023987 * value)
	{
		____apis_0 = value;
		Il2CppCodeGenWriteBarrier(&____apis_0, value);
	}

	inline static int32_t get_offset_of__runningId_2() { return static_cast<int32_t>(offsetof(APIHandler_t2277647344, ____runningId_2)); }
	inline int32_t get__runningId_2() const { return ____runningId_2; }
	inline int32_t* get_address_of__runningId_2() { return &____runningId_2; }
	inline void set__runningId_2(int32_t value)
	{
		____runningId_2 = value;
	}

	inline static int32_t get_offset_of_OnAPISuccess_3() { return static_cast<int32_t>(offsetof(APIHandler_t2277647344, ___OnAPISuccess_3)); }
	inline Action_2_t2455300638 * get_OnAPISuccess_3() const { return ___OnAPISuccess_3; }
	inline Action_2_t2455300638 ** get_address_of_OnAPISuccess_3() { return &___OnAPISuccess_3; }
	inline void set_OnAPISuccess_3(Action_2_t2455300638 * value)
	{
		___OnAPISuccess_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAPISuccess_3, value);
	}
};

struct APIHandler_t2277647344_StaticFields
{
public:
	// APIHandler APIHandler::instance
	APIHandler_t2277647344 * ___instance_1;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(APIHandler_t2277647344_StaticFields, ___instance_1)); }
	inline APIHandler_t2277647344 * get_instance_1() const { return ___instance_1; }
	inline APIHandler_t2277647344 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(APIHandler_t2277647344 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
