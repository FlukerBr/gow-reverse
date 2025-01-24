#ifndef INJECTOR_H
#define INJECTOR_H

#include "type.h"

void RedirectCall(unsigned int call_addr, void* addr);

void WriteDword(UINT32 address, UINT32 value);

void MakeNop(UINT32 address);

void RedirectJump(unsigned int jump_addr, UINT32 addr);

#endif