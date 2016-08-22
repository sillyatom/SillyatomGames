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

// ExecutionOrderManager
struct ExecutionOrderManager_t3968579479;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ExecutionOrderManager::.ctor()
extern "C"  void ExecutionOrderManager__ctor_m3664436148 (ExecutionOrderManager_t3968579479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExecutionOrderManager::Init(System.String)
extern "C"  void ExecutionOrderManager_Init_m4122699490 (ExecutionOrderManager_t3968579479 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExecutionOrderManager::OnDataReceived(System.Boolean,System.String)
extern "C"  void ExecutionOrderManager_OnDataReceived_m285443949 (ExecutionOrderManager_t3968579479 * __this, bool ___success, String_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
