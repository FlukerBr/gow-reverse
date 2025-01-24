#ifndef TYPE_H
#define TYPE_H

#ifndef NULL
#define NULL	(void *)0
#endif
#define FLOAT float
#define BOOL int
#define false 0
#define true 1
#define UINT unsigned int
#define INT8 char
#define UINT8 unsigned char
#define INT16 short
#define UINT16 unsigned short
#define INT32 int
#define UINT32 unsigned int
#define INT64 long long int
#define UINT64 unsigned long long int
typedef unsigned char   undefined;

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
typedef UINT16 FLOAT16;
typedef struct __vtbl_ptr_type {
    short int __delta;
    short int __index;
    void *__pfn;
} __vtbl_ptr_type;
#endif