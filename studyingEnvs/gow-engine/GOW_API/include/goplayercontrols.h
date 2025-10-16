#ifndef GOPLAYERCONTROLS_H
#define GOPLAYERCONTROLS_H

#include "type.h"
#include "vuvec.h"
#include "vtbl.h"


typedef __vtbl_ptr_type  goPlayerControls__vtable;
typedef UINT32 sysControlSystemParm;

typedef struct goPlayerControls_ {
    sysPad *fPad;
    sysControlSystemParm *fParm;
    FLOAT *fCurrentControlValues;
    FLOAT *fPreviousControlValues;
    UINT64 fCurrentDigitalState;
    UINT64 fPreviousDigitalState;
    goPlayerControls__vtable *__vtable;
    undefined field7_0x24;
    undefined field8_0x25;
    undefined field9_0x26;
    undefined field10_0x27;
    undefined field11_0x28;
    undefined field12_0x29;
    undefined field13_0x2a;
    undefined field14_0x2b;
    undefined field15_0x2c;
    undefined field16_0x2d;
    undefined field17_0x2e;
    undefined field18_0x2f;
    VUMat4 m_mCameraTransform;
    VUMat4 m_mControlTransform;
    VUVec4 m_vNormalisedControls;
    VUVec4 m_vSurfaceNormal;
    VUVec4 m_vSurfacePos;
    VUVec4 m_vSurfaceRelativeControls[2];
    VUVec4 m_vUpRelativeControls[2];
    INT32 m_iControlTransformTween;
    FLOAT m_fPreviousControlAngle;
    undefined field28_0x128;
    undefined field29_0x129;
    undefined field30_0x12a;
    undefined field31_0x12b;
    undefined field32_0x12c;
    undefined field33_0x12d;
    undefined field34_0x12e;
    undefined field35_0x12f;
} goPlayerControls;

extern void goPlayerControls_Initialise(goPlayerControls);
extern void goPlayerControls_goPlayerControls(goPlayerControls, sysPad *);
extern void goPlayerControls_Destructor_goPlayerControls(goPlayerControls);
extern void goPlayerControls_PrepareForWarp(goPlayerControls);
extern void goPlayerControls_StartControlTween(goPlayerControls, float,VUMat4 const *);
extern void goPlayerControls_CalcControlMatrix(goPlayerControls, VUVec4,VUMat4 *);
extern void goPlayerControls_Process(goPlayerControls);

extern UINT32 goPlayerControls_vtbl;


#endif