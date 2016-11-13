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

// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t3535523695;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"

// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_Raycast_m683685528 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, RaycastHit2D_t4063908774 * ___raycastHit6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_Raycast_m3956067819 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579 * ___origin0, Vector2_t2243707579 * ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, RaycastHit2D_t4063908774 * ___raycastHit6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m1220041042 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m122312471 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m3913913442 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m2560154475 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m2303387255 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  Collider2D_t646061738 * Physics2D_OverlapCircle_m2103889365 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___point0, float ___radius1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircle(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C"  Collider2D_t646061738 * Physics2D_INTERNAL_CALL_OverlapCircle_m510281598 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579 * ___point0, float ___radius1, int32_t ___layerMask2, float ___minDepth3, float ___maxDepth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  Collider2DU5BU5D_t3535523695* Physics2D_OverlapCircleAll_m3232836672 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___point0, float ___radius1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C"  Collider2DU5BU5D_t3535523695* Physics2D_INTERNAL_CALL_OverlapCircleAll_m3054339757 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579 * ___point0, float ___radius1, int32_t ___layerMask2, float ___minDepth3, float ___maxDepth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::.cctor()
extern "C"  void Physics2D__cctor_m3532647019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;