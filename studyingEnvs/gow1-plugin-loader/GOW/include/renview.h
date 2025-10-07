#ifndef RENVIEW_H
#define RENVIEW_H

#include "vumat.h"
#include "undefinedtype.h"
#include "stdlist.h"
#include "renviewport.h"
#include "renviewportcontext.h"
#include "renfrustum.h"

typedef struct renView {
    struct VUMat4 m_mWorldToCamera;
    struct VUMat4 m_mWorldToFrustum;
    struct VUMat4 m_mWorldToOuterFrustum;
    struct VUMat4 m_mWorldToViewport;
    struct VUMat4 m_mCameraToFrustum;
    struct VUMat4 m_mCameraToOuterFrustum;
    struct VUMat4 m_mCameraToViewport;
    struct VUMat4 m_mFrustumToViewport;
    struct VUMat4 m_mOuterFrustumToViewport;
    struct VUMat4 m_mCameraToWorld;
    struct VUMat4 m_mFrustumToCamera;
    struct VUVec4 m_vViewportClippingPlanes[2];
    struct VUVec4 m_vOuterViewportClippingPlanes[2];
    struct VUVec4 m_vFrustumToViewportScale;
    struct VUVec4 m_vOuterFrustumToViewportScale;
    struct VUVec4 m_vFrustumToViewportOffset;
    struct VUVec4 m_vFrustumToViewportScaleNoFTOI;
    struct VUVec4 m_vOuterFrustumToViewportScaleNoFTOI;
    struct VUVec4 m_vFrustumToViewportOffsetNoFTOI;
    struct stdList m_Cameras;
    struct renViewport m_Viewport;
    struct renFrustum m_Frustum;
    struct renFrustum m_OuterFrustum;
    BOOL m_bUpdatePipeline;
    BOOL m_bClipToPhysicalScreen;
    BOOL m_bIsActive;
    FLOAT m_fZRange;
    UINT32 m_uID;
    struct renViewportContext *m_pLastViewportContext;
    undefined field29_0x3b8;
    undefined field30_0x3b9;
    undefined field31_0x3ba;
    undefined field32_0x3bb;
    undefined field33_0x3bc;
    undefined field34_0x3bd;
    undefined field35_0x3be;
    undefined field36_0x3bf;
} renView;

#endif