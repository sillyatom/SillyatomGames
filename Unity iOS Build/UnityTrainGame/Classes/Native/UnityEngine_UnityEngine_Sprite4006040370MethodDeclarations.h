﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_SpriteMeshType2246008089.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
extern "C"  Sprite_t4006040370 * Sprite_Create_m278903054 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___texture, Rect_t1525428817  ___rect, Vector2_t3525329788  ___pivot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)
extern "C"  Sprite_t4006040370 * Sprite_INTERNAL_CALL_Create_m1601644917 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___texture, Rect_t1525428817 * ___rect, Vector2_t3525329788 * ___pivot, float ___pixelsPerUnit, uint32_t ___extrude, int32_t ___meshType, Vector4_t3525329790 * ___border, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C"  Rect_t1525428817  Sprite_get_rect_m132626493 (Sprite_t4006040370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C"  void Sprite_INTERNAL_get_rect_m853825042 (Sprite_t4006040370 * __this, Rect_t1525428817 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C"  float Sprite_get_pixelsPerUnit_m2438708453 (Sprite_t4006040370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C"  Texture2D_t2509538522 * Sprite_get_texture_m1481489947 (Sprite_t4006040370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C"  Rect_t1525428817  Sprite_get_textureRect_m3946160520 (Sprite_t4006040370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
extern "C"  void Sprite_INTERNAL_get_textureRect_m1939414807 (Sprite_t4006040370 * __this, Rect_t1525428817 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C"  Vector4_t3525329790  Sprite_get_border_m1562752938 (Sprite_t4006040370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
extern "C"  void Sprite_INTERNAL_get_border_m855941073 (Sprite_t4006040370 * __this, Vector4_t3525329790 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
