#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameObjectRef
struct GameObjectRef_t4121474274;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SingletonManager
struct  SingletonManager_t825254210  : public ExtMonoBehaviour_t2624599193
{
public:

public:
};

struct SingletonManager_t825254210_StaticFields
{
public:
	// GameObjectRef SingletonManager::reference
	GameObjectRef_t4121474274 * ___reference_3;

public:
	inline static int32_t get_offset_of_reference_3() { return static_cast<int32_t>(offsetof(SingletonManager_t825254210_StaticFields, ___reference_3)); }
	inline GameObjectRef_t4121474274 * get_reference_3() const { return ___reference_3; }
	inline GameObjectRef_t4121474274 ** get_address_of_reference_3() { return &___reference_3; }
	inline void set_reference_3(GameObjectRef_t4121474274 * value)
	{
		___reference_3 = value;
		Il2CppCodeGenWriteBarrier(&___reference_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
