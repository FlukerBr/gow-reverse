#ifndef SVR_H
#define SVR_H

#include "stdint.h"
#include "gogameobject.h"
#include "go.h"

typedef struct
{
    uint32_t _uID;
} svrClientParm;

typedef struct _svrClientTreeNode
{
    uint32_t _uID;
    uint16_t _uClientFlags;
    uint16_t _uContextID;
    stdListNode *_pNextItem;
    stdListNode *_pPrevItem;
    uint32_t _uKey;
    stdSLListNode *__pNextItem;
    struct _goGameObject *m_pGameObject;
    svrClientParm *m_pParm;
    VUMat4 fLocalMatrix;
    int16_t fTransformID;
    int16_t fAnimationSetID;
    uint64_t fTimeStamp;
    VUMat4 fLocalToWorldMatrix;
    struct _svrClientTreeNode *_pParent;
    goServerContainerType *_pChildren;
} svrClientTreeNode;

#endif