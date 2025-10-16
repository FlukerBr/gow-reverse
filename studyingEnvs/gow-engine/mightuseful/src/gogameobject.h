#ifndef GOGAMEOBJECT_H
#define GOGAMEOBJECT_H

#include "stdint.h"
#include "vu.h"
#include "std.h"
#include "svr.h"
#include "go.h"

#define UNKNOWN_TYPE uint32_t
#define Emitter UNKNOWN_TYPE
#define renModel UNKNOWN_TYPE
#define renShadowClient UNKNOWN_TYPE
#define goCreatureController UNKNOWN_TYPE
#define goHandle UNKNOWN_TYPE
#define wadContext UNKNOWN_TYPE
#define tMoveSystem UNKNOWN_TYPE
#define tFightSystem UNKNOWN_TYPE
#define Cshield UNKNOWN_TYPE
#define tCreature UNKNOWN_TYPE

typedef struct _goGameObject
{
    uint32_t _uID;
    uint16_t _uClientFlags;
    uint16_t _uContextID;
    stdListNode *_pNextItem;
    stdListNode *_pPrevItem;
    uint32_t _uKey;
    stdSLListNode __pNextItem;
    struct _goGameObject *m_pGameObject;
    svrClientParm *m_pParm;
    VUMat4 fLocalMatrix;
    uint16_t fTransformID;
    uint16_t fAnimationSetID;
    uint64_t fTimeStamp;
    VUMat4 fLocalToWorldMatrix;
    svrClientTreeNode* _pParent;
    goServerContainerType* _pChildren;
    goResourceList _resources[13];
    uint32_t _uType;
    uint16_t _uFlags;
    int16_t _iTimeZone;
    stdCList *_pHandleList;
    uint32_t _uGroupVisFlags[1];
    UNKNOWN_TYPE *_pSkeleton;
    UNKNOWN_TYPE * _cbFunc;
    UNKNOWN_TYPE * _cbData;
    float _fTimeScale;
} goGameObject;

#endif