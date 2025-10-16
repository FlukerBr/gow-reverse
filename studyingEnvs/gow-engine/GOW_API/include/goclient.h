#ifndef GOCLIENT_H
#define GOCLIENT_H

#include "type.h"
#include "gogameobject.h"

typedef struct goClient_ {
    UINT32 _uID; /* Inherited from svrClientType */
    UINT16 _uClientFlags; /* Inherited from svrClient */
    UINT16 _uContextID; /* Inherited from svrClient */
    undefined field3_0x8;
    undefined field4_0x9;
    undefined field5_0xa;
    undefined field6_0xb;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    UINT32 _uKey; /* Inherited from svrClientKey */
    undefined field12_0x14;
    undefined field13_0x15;
    undefined field14_0x16;
    undefined field15_0x17;
    goGameObject *m_pGameObject;
    svrClientParm *m_pParm;
} goClient;

#endif



