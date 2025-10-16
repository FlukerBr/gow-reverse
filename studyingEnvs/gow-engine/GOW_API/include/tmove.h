#ifndef TMOVE_H
#define TMOVE_H

#include "type.h"
#include "dcdefinitions.h"

typedef struct tMove__1_5844_ {
    struct FLOAT16_ m_PlaybackSpeed;
    struct FLOAT16_ m_TweenTime;
    UINT8 m_Flags;
    UINT8 m_PhysicsMode;
    undefined field4_0x6;
    undefined field5_0x7;
    UINT32 m_AnimName;
    UINT32 m_MoveName;
    struct tBranch_ **m_BranchList;
    struct tCollision_ **m_CollisionList;
    struct tActionBase_ **m_ActionList;
} tMove__1_5844;

#endif