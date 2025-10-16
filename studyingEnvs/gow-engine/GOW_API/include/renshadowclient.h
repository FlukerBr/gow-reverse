#ifndef RENSHADOWCLIENT_H
#define RENSHADOWCLIENT_H

#include "type.h"
#include "vuvec.h"
#include "svrclientparm.h"

typedef UINT32 stdListNode;
typedef UINT32 stdSLListNode;
typedef UINT32 renGROBJFlags;
typedef UINT32 renGROBMatList;
typedef UINT32 EEPrimInfo;
typedef UINT32 EEPrimInfo;
typedef UINT32 renModel;

typedef struct renShadowClient_ {
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
    struct goGameObject_ *m_pGameObject; /* Inherited from goClient */
    svrClientParm *m_pParm; /* Inherited from goClient */
    undefined field18_0x20;
    undefined field19_0x21;
    undefined field20_0x22;
    undefined field21_0x23;
    undefined field22_0x24;
    undefined field23_0x25;
    undefined field24_0x26;
    undefined field25_0x27;
    undefined field26_0x28;
    undefined field27_0x29;
    undefined field28_0x2a;
    undefined field29_0x2b;
    undefined field30_0x2c;
    undefined field31_0x2d;
    undefined field32_0x2e;
    undefined field33_0x2f;
    undefined field34_0x30;
    undefined field35_0x31;
    undefined field36_0x32;
    undefined field37_0x33;
    undefined field38_0x34;
    undefined field39_0x35;
    undefined field40_0x36;
    undefined field41_0x37;
    undefined field42_0x38;
    undefined field43_0x39;
    undefined field44_0x3a;
    undefined field45_0x3b;
    undefined field46_0x3c;
    undefined field47_0x3d;
    undefined field48_0x3e;
    undefined field49_0x3f;
    stdListNode *_pNextItem; /* Inherited from stdListNode */
    stdListNode *_pPrevItem; /* Inherited from stdListNode */
    undefined field52_0x48;
    undefined field53_0x49;
    undefined field54_0x4a;
    undefined field55_0x4b;
    undefined field56_0x4c;
    undefined field57_0x4d;
    undefined field58_0x4e;
    undefined field59_0x4f;
    undefined field60_0x50;
    undefined field61_0x51;
    undefined field62_0x52;
    undefined field63_0x53;
    undefined field64_0x54;
    undefined field65_0x55;
    undefined field66_0x56;
    undefined field67_0x57;
    undefined field68_0x58;
    undefined field69_0x59;
    undefined field70_0x5a;
    undefined field71_0x5b;
    undefined field72_0x5c;
    undefined field73_0x5d;
    undefined field74_0x5e;
    undefined field75_0x5f;
    INT16 fTransformID; /* Inherited from goAttachmentClient */
    INT16 fAnimationSetID; /* Inherited from goAttachmentClient */
    undefined field78_0x64;
    undefined field79_0x65;
    undefined field80_0x66;
    undefined field81_0x67;
    UINT64 fTimeStamp; /* Inherited from goAttachmentClient */
    undefined field83_0x70;
    undefined field84_0x71;
    undefined field85_0x72;
    undefined field86_0x73;
    undefined field87_0x74;
    undefined field88_0x75;
    undefined field89_0x76;
    undefined field90_0x77;
    undefined field91_0x78;
    undefined field92_0x79;
    undefined field93_0x7a;
    undefined field94_0x7b;
    undefined field95_0x7c;
    undefined field96_0x7d;
    undefined field97_0x7e;
    undefined field98_0x7f;
    undefined field99_0x80;
    undefined field100_0x81;
    undefined field101_0x82;
    undefined field102_0x83;
    undefined field103_0x84;
    undefined field104_0x85;
    undefined field105_0x86;
    undefined field106_0x87;
    undefined field107_0x88;
    undefined field108_0x89;
    undefined field109_0x8a;
    undefined field110_0x8b;
    undefined field111_0x8c;
    undefined field112_0x8d;
    undefined field113_0x8e;
    undefined field114_0x8f;
    undefined field115_0x90;
    undefined field116_0x91;
    undefined field117_0x92;
    undefined field118_0x93;
    undefined field119_0x94;
    undefined field120_0x95;
    undefined field121_0x96;
    undefined field122_0x97;
    undefined field123_0x98;
    undefined field124_0x99;
    undefined field125_0x9a;
    undefined field126_0x9b;
    undefined field127_0x9c;
    undefined field128_0x9d;
    undefined field129_0x9e;
    undefined field130_0x9f;
    stdSLListNode *__pNextItem; /* Inherited from stdSLListNode */
    undefined field132_0xa4;
    undefined field133_0xa5;
    undefined field134_0xa6;
    undefined field135_0xa7;
    undefined field136_0xa8;
    undefined field137_0xa9;
    undefined field138_0xaa;
    undefined field139_0xab;
    undefined field140_0xac;
    undefined field141_0xad;
    undefined field142_0xae;
    undefined field143_0xaf;
    VUVec4 _vTint; /* Inherited from renGROB */
    renGROBJFlags _GROBJFlags; /* Inherited from renGROB */
    renGROBMatList *_pMaterialBuffer; /* Inherited from renGROB */
    UINT32 _uLayerID; /* Inherited from renGROB */
    UINT32 _uViewID; /* Inherited from renGROB */
    undefined field149_0xdc;
    undefined field150_0xdd;
    undefined field151_0xde;
    undefined field152_0xdf;
    VUVec4 m_vClipPlane;
    EEPrimInfo m_EEPrimInfo;
    FLOAT m_vMaxShadowLength;
    renModel *m_pModel;
    UINT32 m_uFlags;
    INT32 m_iType;
    FLOAT m_fClippedShadowUpperCapDist;
    FLOAT m_fClippedShadowLowerCapDist;
    undefined field161_0x158;
    undefined field162_0x159;
    undefined field163_0x15a;
    undefined field164_0x15b;
    undefined field165_0x15c;
    undefined field166_0x15d;
    undefined field167_0x15e;
    undefined field168_0x15f;
} renShadowClient;

#endif