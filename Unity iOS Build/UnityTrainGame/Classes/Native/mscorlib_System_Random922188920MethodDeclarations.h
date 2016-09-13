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

// System.Random
struct Random_t922188920;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m2490522898 (Random_t922188920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor(System.Int32)
extern "C"  void Random__ctor_m4002613091 (Random_t922188920 * __this, int32_t ___Seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::Sample()
extern "C"  double Random_Sample_m3542077785 (Random_t922188920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next()
extern "C"  int32_t Random_Next_m2107657609 (Random_t922188920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32,System.Int32)
extern "C"  int32_t Random_Next_m1579033021 (Random_t922188920 * __this, int32_t ___minValue, int32_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::NextBytes(System.Byte[])
extern "C"  void Random_NextBytes_m3527347937 (Random_t922188920 * __this, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::NextDouble()
extern "C"  double Random_NextDouble_m194244307 (Random_t922188920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
