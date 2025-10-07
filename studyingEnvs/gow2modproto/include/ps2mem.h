#pragma once

#define LOWORD(l)           ((uint16_t)((*(uint32_t*)(&l)) & 0xffff))
#define HIWORD(l)           ((uint16_t)(((*(uint32_t*)(&l)) >> 16) & 0xffff))

void redirectCall(unsigned int addr, void* func);
// void redirectJump(unsigned int addr, void* func);
// void makeNOP(unsigned int address);
