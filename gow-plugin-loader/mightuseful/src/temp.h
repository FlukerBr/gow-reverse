#ifndef TEMP_H
#define TEMP_H

#include "stdint.h"
#include "vu.h"

typedef struct _tColor
{
    float m_R;
    float m_G;
    float m_B;
    float m_A;
} tColor;

typedef struct _tStage
{
    tColor m_TrailTint;
    float m_DamageMult;
    uint8_t m_Flags;
} tStage;

typedef struct _tWeapon
{
    tStage * m_StageList;
} tWeapon;

typedef struct _tCollisionBox
{
    VUVec4 m_vSize;
    VUVec4 m_VOffset;
    float m_fTopOffsetY;
} tCollisionBox;

typedef struct _tPhysicalDamping
{
    float m_fPhysicalDirDamping;
    float m_fPhysicalDirMult;
    float m_fPhysicalPosDamping;
    float m_fPhysicalDirDampingMult;
    uint32_t m_iFlags;
} tPhysicalDamping;

typedef struct _tSoldierNavCaps
{
    uint32_t m_uCapabilityFlags;
} tSoldierNavCaps;

typedef struct _tCreatureControls
{
    VUVec4 m_vWorld;
    VUVec4 m_vCamera;
    VUVec4 m_vFacing;
    int32_t m_iJumpHack;
    uint32_t m_uControlFlags;
} tCreatureControls;

typedef struct _tValidityDisk
{
    VUMat4 m_mLWMatrix;
    uint32_t m_iDiskOccupiedBits[4];
    uint32_t m_iDiskInvalidBits[4];
    uint32_t m_iDiskPropInvalidBits[4];
    uint32_t m_iLastFullUpdateFrame;
    _vtbl_ptr_type *vf15754;
} tValidityDisk;

#endif