#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Schema.JsonSchemaNodeCollection
struct JsonSchemaNodeCollection_t3364623707;
// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Schema.JsonSchemaNode,Newtonsoft.Json.Schema.JsonSchemaModel>
struct Dictionary_2_t3411554927;
// Newtonsoft.Json.Schema.JsonSchemaNode
struct JsonSchemaNode_t2256819293;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchemaModelBuilder
struct  JsonSchemaModelBuilder_t1662421389  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Schema.JsonSchemaNodeCollection Newtonsoft.Json.Schema.JsonSchemaModelBuilder::_nodes
	JsonSchemaNodeCollection_t3364623707 * ____nodes_0;
	// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Schema.JsonSchemaNode,Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.Schema.JsonSchemaModelBuilder::_nodeModels
	Dictionary_2_t3411554927 * ____nodeModels_1;
	// Newtonsoft.Json.Schema.JsonSchemaNode Newtonsoft.Json.Schema.JsonSchemaModelBuilder::_node
	JsonSchemaNode_t2256819293 * ____node_2;

public:
	inline static int32_t get_offset_of__nodes_0() { return static_cast<int32_t>(offsetof(JsonSchemaModelBuilder_t1662421389, ____nodes_0)); }
	inline JsonSchemaNodeCollection_t3364623707 * get__nodes_0() const { return ____nodes_0; }
	inline JsonSchemaNodeCollection_t3364623707 ** get_address_of__nodes_0() { return &____nodes_0; }
	inline void set__nodes_0(JsonSchemaNodeCollection_t3364623707 * value)
	{
		____nodes_0 = value;
		Il2CppCodeGenWriteBarrier(&____nodes_0, value);
	}

	inline static int32_t get_offset_of__nodeModels_1() { return static_cast<int32_t>(offsetof(JsonSchemaModelBuilder_t1662421389, ____nodeModels_1)); }
	inline Dictionary_2_t3411554927 * get__nodeModels_1() const { return ____nodeModels_1; }
	inline Dictionary_2_t3411554927 ** get_address_of__nodeModels_1() { return &____nodeModels_1; }
	inline void set__nodeModels_1(Dictionary_2_t3411554927 * value)
	{
		____nodeModels_1 = value;
		Il2CppCodeGenWriteBarrier(&____nodeModels_1, value);
	}

	inline static int32_t get_offset_of__node_2() { return static_cast<int32_t>(offsetof(JsonSchemaModelBuilder_t1662421389, ____node_2)); }
	inline JsonSchemaNode_t2256819293 * get__node_2() const { return ____node_2; }
	inline JsonSchemaNode_t2256819293 ** get_address_of__node_2() { return &____node_2; }
	inline void set__node_2(JsonSchemaNode_t2256819293 * value)
	{
		____node_2 = value;
		Il2CppCodeGenWriteBarrier(&____node_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
