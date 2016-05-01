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

// ResultVO
struct ResultVO_t4023821238;
// System.Collections.Generic.List`1<Card>
struct List_1_t799051817;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t3403145775;
// Card
struct Card_t2092848;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ResultVO::.ctor()
extern "C"  void ResultVO__ctor_m4171753381 (ResultVO_t4023821238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ResultVO::get_count()
extern "C"  int32_t ResultVO_get_count_m4041281531 (ResultVO_t4023821238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResultVO::set_count(System.Int32)
extern "C"  void ResultVO_set_count_m1140128806 (ResultVO_t4023821238 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ResultVO::get_startIndex()
extern "C"  int32_t ResultVO_get_startIndex_m2764329926 (ResultVO_t4023821238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResultVO::set_startIndex(System.Int32)
extern "C"  void ResultVO_set_startIndex_m2397683965 (ResultVO_t4023821238 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ResultVO::get_hasMatch()
extern "C"  bool ResultVO_get_hasMatch_m20929191 (ResultVO_t4023821238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> ResultVO::get_cards()
extern "C"  List_1_t799051817 * ResultVO_get_cards_m1913580282 (ResultVO_t4023821238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResultVO::set_cards(System.Collections.Generic.List`1<Card>)
extern "C"  void ResultVO_set_cards_m3628560153 (ResultVO_t4023821238 * __this, List_1_t799051817 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> ResultVO::get_winningCards()
extern "C"  Dictionary_2_t3403145775 * ResultVO_get_winningCards_m2091815133 (ResultVO_t4023821238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResultVO::set_winningCards(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>)
extern "C"  void ResultVO_set_winningCards_m625555250 (ResultVO_t4023821238 * __this, Dictionary_2_t3403145775 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card ResultVO::GetCardWithValueType(System.String)
extern "C"  Card_t2092848 * ResultVO_GetCardWithValueType_m3773938007 (ResultVO_t4023821238 * __this, String_t* ___cardValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
