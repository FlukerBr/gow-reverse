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
typedef struct Pending Pending, *PPending;

typedef int int.conflict;

typedef float float.conflict;

typedef float.conflict FLOAT;

struct Pending {
    int.conflict msgID;
    int.conflict menuID;
    int.conflict pickupID;
    FLOAT seconds;
    int.conflict msgMeterBarGrow;
    int.conflict healthMeterValue;
    int.conflict magicMeterValue;
};

