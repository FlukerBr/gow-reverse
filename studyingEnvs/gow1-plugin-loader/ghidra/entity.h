typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    int16;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    uint16;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined6;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct Entity Entity, *PEntity;

typedef struct VUMat4 VUMat4, *PVUMat4;

typedef short unsigned int UINT16;

typedef ushort short int;

typedef short int INT16;

typedef char char.conflict;

typedef struct goGameObject goGameObject, *PgoGameObject;

typedef struct sliCode sliCode, *PsliCode;

typedef float float.conflict;

typedef float.conflict FLOAT;

typedef struct DynExpr DynExpr, *PDynExpr;

typedef struct Entity__vtable Entity__vtable, *PEntity__vtable;

typedef struct VUVec4 VUVec4, *PVUVec4;

typedef unsigned int UINT32;

typedef struct svrClientParm svrClientParm, *PsvrClientParm;

typedef struct stdListNode stdListNode, *PstdListNode;

typedef long unsigned int UINT64;

typedef struct stdSLListNode stdSLListNode, *PstdSLListNode;

typedef struct svrClientTreeNode<svrCListContainer,goAttachmentLWClient> svrClientTreeNode<svrCListContainer,goAttachmentLWClient>, *PsvrClientTreeNode<svrCListContainer,goAttachmentLWClient>;

typedef struct svrCListContainer svrCListContainer, *PsvrCListContainer;

typedef struct svrCListContainer goServerContainerType;

typedef struct goResourceList goResourceList, *PgoResourceList;

typedef struct stdCList<unsigned int,stdAllocator<stdCListNodeBase> > stdCList<unsigned int,stdAllocator<stdCListNodeBase> >, *PstdCList<unsigned int,stdAllocator<stdCListNodeBase> >;

typedef struct goSkeleton goSkeleton, *PgoSkeleton;

typedef unsigned char UINT8;

typedef int int.conflict;

typedef union DynExpr__u DynExpr__u, *PDynExpr__u;

typedef struct __vtbl_ptr_type __vtbl_ptr_type, *P__vtbl_ptr_type;

typedef int.conflict INT32;

typedef struct goPrototype goPrototype, *PgoPrototype;

typedef int.conflict BOOL;

typedef struct anmJoint anmJoint, *PanmJoint;

typedef struct anmJointMatrixBuffers anmJointMatrixBuffers, *PanmJointMatrixBuffers;

typedef struct anmClient anmClient, *PanmClient;

typedef struct svrClientParmList svrClientParmList, *PsvrClientParmList;

typedef struct stdArray<anmJoint> stdArray<anmJoint>, *PstdArray<anmJoint>;

typedef unsigned int UINT;

typedef struct stdList stdList, *PstdList;

typedef struct anmClientProcessCallback anmClientProcessCallback, *PanmClientProcessCallback;

typedef struct Pool__1_332 Pool__1_332, *PPool__1_332;

typedef struct HeapZone HeapZone, *PHeapZone;

typedef struct stdArray<anmJoint>__vtable stdArray<anmJoint>__vtable, *PstdArray<anmJoint>__vtable;

typedef struct anmClientProcessCallback__vtable anmClientProcessCallback__vtable, *PanmClientProcessCallback__vtable;

typedef struct PoolDebugInfo PoolDebugInfo, *PPoolDebugInfo;

typedef char.conflict CHAR;

typedef CHAR *Ptr;

struct sliCode {
    UINT8 *codeStart;
};

struct VUVec4 {
    INT32 v[4];
};

struct VUMat4 {
    struct VUVec4 r0;
    struct VUVec4 r1;
    struct VUVec4 r2;
    struct VUVec4 r3;
};

union DynExpr__u {
    FLOAT f;
    INT32 i;
    BOOL b;
    char.conflict *s;
    void *v;
};

struct DynExpr {
    int.conflict sliOffset;
    union DynExpr__u u;
};

struct Entity {
    struct VUMat4 matrix;
    UINT16 jointID;
    UINT16 id;
    INT16 volumeID;
    UINT16 policy;
    INT16 wiID;
    UINT16 nTargets;
    UINT16 *targetArray;
    char.conflict *name;
    struct goGameObject *go;
    struct sliCode sli;
    unsigned int lastEventField[3];
    FLOAT lastTriggerTime;
    struct DynExpr m_Enabled;
    struct DynExpr m_RefractoryPeriod;
    struct DynExpr m_ResponseDelay;
    struct DynExpr m_DelayedEnable;
    struct DynExpr m_Execute;
    struct DynExpr m_DebugString;
    struct DynExpr m_MarkerID;
    struct Entity__vtable *__vtable;
    undefined field21_0xa8;
    undefined field22_0xa9;
    undefined field23_0xaa;
    undefined field24_0xab;
    undefined field25_0xac;
    undefined field26_0xad;
    undefined field27_0xae;
    undefined field28_0xaf;
};

struct stdSLListNode {
    struct stdSLListNode *_pNextItem;
};

struct stdArray<anmJoint> {
    UINT _uSize; /* Inherited from stdArrayPlacement<anmJoint> */
    struct anmJoint *_pBuffer; /* Inherited from stdArrayPlacement<anmJoint> */
    struct HeapZone *hz; /* Inherited from stdArrayPlacement<anmJoint> */
    struct stdArray<anmJoint>__vtable *__vtable; /* Inherited from stdArrayPlacement<anmJoint> */
};

struct goPrototype {
    UINT32 _uID; /* Inherited from svrClientType */
    struct svrClientParmList *_pClientParmList; /* Inherited from svrMultiClientParm */
    char.conflict _cName[24]; /* Inherited from goParmBase */
    struct stdArray<anmJoint> _joints;
    UINT32 *_pJointHashes;
    struct anmJointMatrixBuffers *_pJointMatrixBuffers;
    UINT _uJointRootID;
    UINT _uParmFlags;
};

struct stdListNode {
    struct stdListNode *_pNextItem;
    struct stdListNode *_pPrevItem;
};

struct anmJoint {
    UINT32 _uFlags;
    INT16 _sChildIdx;
    INT16 _sSiblingIdx;
    INT16 _sParentIdx;
    INT16 _sJOIndex;
    FLOAT _fMaxZ;
};

struct PoolDebugInfo {
    UINT32 breakPoint:1;
    UINT32 maxInUse:31;
    INT32 lastCur;
    UINT32 nNewPoolPtr;
    UINT32 nFreePoolPtr;
    struct Pool__1_332 *pNextPool;
    struct Pool__1_332 *pPrevPool;
};

struct Pool__1_332 {
    UINT32 uPoolConstant;
    struct HeapZone *pParentHeap;
    UINT32 blockSize;
    UINT16 byteAlignment;
    UINT16 growByBlocks;
    UINT32 *pFreeList;
    UINT32 *pChunkList;
    struct PoolDebugInfo debug;
};

struct __vtbl_ptr_type {
    short int __delta;
    short int __index;
    void *__pfn;
};

struct Entity__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type Enabled;
    struct __vtbl_ptr_type Entity;
    struct __vtbl_ptr_type InitParms;
    struct __vtbl_ptr_type StateNotify;
    struct __vtbl_ptr_type HandleEvent;
    struct __vtbl_ptr_type Activate;
};

struct stdArray<anmJoint>__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type stdArray;
};

struct goResourceList {
    struct stdSLListNode _header; /* Inherited from stdSLList */
};

struct goGameObject {
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
    struct goGameObject *m_pGameObject; /* Inherited from goClient */
    struct svrClientParm *m_pParm; /* Inherited from goClient */
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
    struct stdListNode *_pNextItem; /* Inherited from stdListNode */
    struct stdListNode *_pPrevItem; /* Inherited from stdListNode */
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
    struct stdSLListNode *_pNextItem; /* Inherited from stdSLListNode */
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
    struct svrClientTreeNode<svrCListContainer,goAttachmentLWClient> *_pParent; /* Inherited from svrClientTreeNode<svrCListContainer,goAttachmentLWClient> */
    goServerContainerType *_pChildren; /* Inherited from svrClientTreeNode<svrCListContainer,goAttachmentLWClient> */
    undefined field146_0xb8;
    undefined field147_0xb9;
    undefined field148_0xba;
    undefined field149_0xbb;
    undefined field150_0xbc;
    undefined field151_0xbd;
    undefined field152_0xbe;
    undefined field153_0xbf;
    struct goResourceList _resources[13];
    UINT32 _uType;
    UINT16 _uFlags;
    INT16 _iTimeZone;
    struct stdCList<unsigned int,stdAllocator<stdCListNodeBase> > *_pHandleList;
    unsigned int _uGroupVisFlags[1];
    struct goSkeleton *_pSkeleton;
    undefined1 *_cbFunc;
    void *_cbData;
    FLOAT _fTimeScale;
    undefined field164_0x114;
    undefined field165_0x115;
    undefined field166_0x116;
    undefined field167_0x117;
    undefined field168_0x118;
    undefined field169_0x119;
    undefined field170_0x11a;
    undefined field171_0x11b;
    undefined field172_0x11c;
    undefined field173_0x11d;
    undefined field174_0x11e;
    undefined field175_0x11f;
};

struct anmClientProcessCallback {
    struct anmClientProcessCallback__vtable *__vtable;
};

struct HeapZone {
    UINT32 uHZConstant;
    UINT32 *pFreeList;
    UINT32 *pEndFreeList;
    struct HeapZone *pNextZone;
    Ptr pStart;
    Ptr pStartUse;
    Ptr pEnd;
    UINT32 *pMasterChunkList;
    UINT32 *pMasterList;
    UINT32 uMoreMasters;
    char.conflict cName[16];
    UINT32 heapData;
};

struct anmClientProcessCallback__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type ProcessCallback;
};

struct goSkeleton {
    struct VUMat4 _GameObjectAnimTransform;
    UINT64 fWorldJointMatriciesTimeStamp;
    struct goGameObject *_pGO;
    struct goPrototype *_pHierarchyParm;
    struct VUMat4 *_pAnimMatrixBuffer;
    BOOL *_pJointVisBuff;
    struct anmJoint *_pJoints;
    UINT16 _uNumJoints;
    UINT16 _uFlags;
    struct anmJointMatrixBuffers *_pJointMatrixBuffers;
    unsigned int _pJointEnabled[8];
    UINT16 _uNumJointEnabledWords;
    UINT16 _uJointRootID;
    struct anmClient *_pAnimClient;
    struct VUMat4 *_pWorldJointMatrix;
    struct VUVec4 *_pLocalRot;
    struct VUVec4 *_pLocalOrg;
    struct VUVec4 *_pLocalScale;
    struct VUVec4 *_pNonBakeablePivotTrans;
};

struct stdList {
    struct stdListNode _header;
};

struct anmClient {
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
    struct goGameObject *m_pGameObject; /* Inherited from goClient */
    struct svrClientParm *m_pParm; /* Inherited from goClient */
    struct stdList _AnimatorList;
    UINT16 _uFlags;
    INT16 _iDefaultTimeZone;
    FLOAT _fTimeScale;
    struct anmClientProcessCallback *_pProcessCallback;
    UINT _uCurrentFrameID;
    UINT _uLastFileIdx;
};

struct svrClientParmList {
    struct stdListNode _header; /* Inherited from stdList */
    struct Pool__1_332 *pool;
};

struct svrCListContainer {
    struct stdListNode _header; /* Inherited from stdList */
};

struct svrClientTreeNode<svrCListContainer,goAttachmentLWClient> {
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
    struct goGameObject *m_pGameObject; /* Inherited from goClient */
    struct svrClientParm *m_pParm; /* Inherited from goClient */
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
    struct stdListNode *_pNextItem; /* Inherited from stdListNode */
    struct stdListNode *_pPrevItem; /* Inherited from stdListNode */
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
    struct stdSLListNode *_pNextItem; /* Inherited from stdSLListNode */
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
    struct svrClientTreeNode<svrCListContainer,goAttachmentLWClient> *_pParent;
    goServerContainerType *_pChildren;
    undefined field146_0xb8;
    undefined field147_0xb9;
    undefined field148_0xba;
    undefined field149_0xbb;
    undefined field150_0xbc;
    undefined field151_0xbd;
    undefined field152_0xbe;
    undefined field153_0xbf;
};

struct anmJointMatrixBuffers {
    UINT _uNumJoints;
    UINT _uLocalOrientMatrixBufferByteOffset;
    UINT _uNumJointOrientMatrices;
    UINT _uBindMatrixBufferByteOffset;
    UINT _uNumBindMatrices;
    UINT _uNumNonBakeablePivotTrans;
    UINT _sGameObjectAnimJoint;
    unsigned int _uPAD[1];
    UINT _uLocalOrgBufferByteOffset;
    UINT _uLocalRotBufferByteOffset;
    UINT _uLocalScaleBufferByteOffset;
    UINT _uNonBakeablePivotBufferByteOffset;
    struct VUMat4 _uLocalMatrix[1];
};

struct svrClientParm {
    UINT32 _uID; /* Inherited from svrClientType */
};

struct stdCList<unsigned int,stdAllocator<stdCListNodeBase> > {
    struct stdListNode _header; /* Inherited from stdList */
};

