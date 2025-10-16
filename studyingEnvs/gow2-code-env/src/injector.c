#include "injector.h"

#define jal(fun) 0x0C000000 + (fun/4)
#define j(fun) 0x08000000 + (fun/4)

void RedirectCall(unsigned int call_addr, void* addr) {
    *(unsigned int*)call_addr = jal((UINT32)addr);
}

void WriteDword(UINT32 address, UINT32 value) {
    *(UINT32*)address = value;
}

void MakeNop(UINT32 address) {
    WriteDword(address, 0);
}

void RedirectJump(unsigned int jump_addr, UINT32 addr) {
    *(unsigned int*)jump_addr = j((UINT32)addr);
}