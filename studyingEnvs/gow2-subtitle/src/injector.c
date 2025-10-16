#include "injector.h"

#define jal(fun) 0x0C000000 + (fun/4)
#define j(fun) 0x08000000 + (fun/4)

void RedirectCall(uint32_t call_addr, void* addr) {
    *(uint32_t*)call_addr = jal((uint32_t)addr);
}

void WriteDword(uint32_t address, uint32_t value) {
    *(uint32_t*)address = value;
}

void MakeNop(uint32_t address) {
    WriteDword(address, 0);
}

void RedirectJump(uint32_t jump_addr, uint32_t addr) {
    *(uint32_t*)jump_addr = j((uint32_t)addr);
}