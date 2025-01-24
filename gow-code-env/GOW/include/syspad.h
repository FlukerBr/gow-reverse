#ifndef SYSPAD_H
#define SYSPAD_H

#include "type.h"

typedef enum EPadType {
    kNone=0,
    kDigital=1,
    kJoystick=2,
    kMouse=3,
    kNeGcon=4,
    kAnalogue=5,
    kDualShock=6,
    kDualShock2=7,
    kMaxPadType=8
} EPadType;

typedef struct ControlStick {
    float fDampedX;
    float fDampedY;
    float fAngle;
    float fDistance;
    float fNormalisedX;
    float fNormalisedY;
    float fCorrectedX;
    float fCorrectedY;
} ControlStick;

typedef struct sysPad {
    int fPort;
    int fSlot;
    enum EPadType fType;
    float fActuatorGain;
    unsigned char fAnalogue[22];
    undefined field5_0x26;
    undefined field6_0x27;
    unsigned int fDigital;
    unsigned int fPreviousDigital;
    UINT32 fCurrentCheatCode;
    UINT32 fCheatCodeFound;
    struct ControlStick fSticks[2];
    int fSocket;
    int fState;
    int fPrevRumble;
    int fProfileSize;
    unsigned char fProfile[4];
    int fVibProfileSize;
    unsigned char fVibProfile[1];
    undefined field19_0x91;
    undefined field20_0x92;
    undefined field21_0x93;
    undefined field22_0x94;
    undefined field23_0x95;
    undefined field24_0x96;
    undefined field25_0x97;
    undefined field26_0x98;
    undefined field27_0x99;
    undefined field28_0x9a;
    undefined field29_0x9b;
    undefined field30_0x9c;
    undefined field31_0x9d;
    undefined field32_0x9e;
    undefined field33_0x9f;
    undefined field34_0xa0;
    undefined field35_0xa1;
    undefined field36_0xa2;
    undefined field37_0xa3;
    undefined field38_0xa4;
    undefined field39_0xa5;
    undefined field40_0xa6;
    undefined field41_0xa7;
    undefined field42_0xa8;
    undefined field43_0xa9;
    undefined field44_0xaa;
    undefined field45_0xab;
    undefined field46_0xac;
    undefined field47_0xad;
    undefined field48_0xae;
    undefined field49_0xaf;
    undefined field50_0xb0;
    undefined field51_0xb1;
    undefined field52_0xb2;
    undefined field53_0xb3;
    undefined field54_0xb4;
    undefined field55_0xb5;
    undefined field56_0xb6;
    undefined field57_0xb7;
    undefined field58_0xb8;
    undefined field59_0xb9;
    undefined field60_0xba;
    undefined field61_0xbb;
    undefined field62_0xbc;
    undefined field63_0xbd;
    undefined field64_0xbe;
    undefined field65_0xbf;
    uint16 fDMABuffer[16];
} sysPad;

extern sysPad sysPad_gRawPads;

#endif