#ifndef GOSKELETON_H
#define GOSKELETON_H

#include "type.h"
#include "undefinedtype.h"
#include "vumat.h"

typedef struct fxBoneData {
    float m_fProb[32];
    unsigned char m_iIdx[32];
} fxBoneData;

typedef struct goSkeleton {
    VUMat4 _GameObjectAnimTransform;
    UINT64 fWorldJointMatriciesTimeStamp;
    struct goGameObject *_pGO;
    struct goPrototype *_pHierarchyParm;
    struct VUMat4 *_pAnimMatrixBuffer;
    BOOL *_pJointVisBuff;
    anmJoint *_pJoints;
    UINT16 _uNumJoints;
    UINT16 _uFlags;
    anmJointMatrixBuffers *_pJointMatrixBuffers;
    unsigned int _pJointEnabled[8];
    UINT16 _uNumJointEnabledWords;
    UINT16 _uJointRootID;
    anmClient *_pAnimClient;
    VUMat4 *_pWorldJointMatrix;
    VUVec4 *_pLocalRot;
    VUVec4 *_pLocalOrg;
    VUVec4 *_pLocalScale;
    VUVec4 *_pNonBakeablePivotTrans;
} goSkeleton;

#endif