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
typedef struct sysFile sysFile, *PsysFile;

typedef int int.conflict;

typedef struct sysFile__vtable sysFile__vtable, *PsysFile__vtable;

typedef struct __vtbl_ptr_type __vtbl_ptr_type, *P__vtbl_ptr_type;

typedef ushort short int;

struct sysFile {
    int.conflict fHandle;
    unsigned int fFlags;
    int.conflict fLength;
    int.conflict fPosition;
    struct sysFile__vtable *__vtable;
};

struct __vtbl_ptr_type {
    short int __delta;
    short int __index;
    void *__pfn;
};

struct sysFile__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type sysFile;
    struct __vtbl_ptr_type Close;
    struct __vtbl_ptr_type Read;
    struct __vtbl_ptr_type IsReadDone;
};

