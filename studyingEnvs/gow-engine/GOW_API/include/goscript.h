#ifndef GOSCRIPT_H
#define GOSCRIPT_H

#include "type.h"
#include "gogameobject.h"

typedef UINT32 goScriptContainerType; 
typedef UINT32 anmClient; 

typedef struct goScript_ {
    UINT32 _uID;
    UINT16 _uClientFlags;
    UINT16 _uContextID;
    undefined field3_0x8;
    undefined field4_0x9;
    undefined field5_0xa;
    undefined field6_0xb;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    UINT32 _uKey;
    undefined field12_0x14;
    undefined field13_0x15;
    undefined field14_0x16;
    undefined field15_0x17;
    goGameObject *m_pGameObject;
    svrClientParm *m_pParm;
    svrClientTreeNode *_pParent;
    goScriptContainerType *_pChildren;
    UINT16 _uSlice;
    INT16 _sWait;
    UINT16 _uFlags;
    UINT16 _jointID;
    undefined field24_0x30;
    undefined field25_0x31;
    undefined field26_0x32;
    undefined field27_0x33;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    undefined field32_0x38;
    undefined field33_0x39;
    undefined field34_0x3a;
    undefined field35_0x3b;
    undefined field36_0x3c;
    undefined field37_0x3d;
    undefined field38_0x3e;
    undefined field39_0x3f;
    stdListNode *_pNextItem;
    stdListNode *_pPrevItem;
    undefined field42_0x48;
    undefined field43_0x49;
    undefined field44_0x4a;
    undefined field45_0x4b;
    BOOL _bEnabled;
    void *_pLocalMem;
    void *_parmData;
    UINT _parmDataSize;
    UINT _parmMapSize;
    anmClient *_pAnimClient;
    unsigned int _uUserParms[7];
} goScript;

#endif