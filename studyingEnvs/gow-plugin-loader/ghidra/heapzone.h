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
typedef struct HeapZone HeapZone, *PHeapZone;

typedef unsigned int UINT32;

typedef char char.conflict;

typedef char.conflict CHAR;

typedef CHAR *Ptr;

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

