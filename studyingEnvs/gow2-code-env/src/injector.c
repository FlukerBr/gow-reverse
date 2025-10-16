#include "injector.h"

#define jal(fun) 0x0C000000 + (fun/4)

void RedirectCall(unsigned int call_addr, void* addr) {
    *(unsigned int*)call_addr = jal((unsigned int)addr);
}

void WriteDword(unsigned int address, unsigned int value) {
    *(unsigned int*)address = value;
}

void MakeNop(unsigned int address) {
    WriteDword(address, 0);
}