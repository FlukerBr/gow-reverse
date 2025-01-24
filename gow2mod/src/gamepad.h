#ifndef GAMEPAD_H
#define GAMEPAD_H

#include "stdint.h"
#include "list.h"

typedef struct
{
    uint8_t L2 : 1;
    uint8_t R2 : 1;
    uint8_t L1 : 1;
    uint8_t R1 : 1;
    uint8_t triangle : 1;
    uint8_t circle : 1;
    uint8_t X : 1;
    uint8_t square : 1;
    uint8_t select : 1;
    uint8_t L3 : 1;
    uint8_t R3 : 1;
    uint8_t start : 1;
    uint8_t UP : 1;
    uint8_t RIGHT : 1;
    uint8_t DOWN : 1;
    uint8_t LEFT : 1;
} Gpad;

extern Gpad (*ReadPad)(uint32_t);

void listenGamepad();

#endif