#include "register.h"

GPR gp_registers;
FPR fp_registers;

void saveRegisters()
{
    asm("move %0, $v0\n" : "=r" (gp_registers.v0) : );
//     asm("move %0, $v1\n" : "=r" (gp_registers.v1) : );
//     asm("move %0, $a0\n" : "=r" (gp_registers.a0) : );
//     asm("move %0, $a1\n" : "=r" (gp_registers.a1) : );
//     asm("move %0, $a2\n" : "=r" (gp_registers.a2) : );
//     asm("move %0, $a3\n" : "=r" (gp_registers.a3) : );
//     asm("move %0, $t0\n" : "=r" (gp_registers.t0) : );
//     asm("move %0, $t1\n" : "=r" (gp_registers.t1) : );
//     asm("move %0, $t2\n" : "=r" (gp_registers.t2) : );
//     asm("move %0, $t3\n" : "=r" (gp_registers.t3) : );
//     asm("move %0, $t4\n" : "=r" (gp_registers.t4) : );
//     asm("move %0, $t5\n" : "=r" (gp_registers.t5) : );
//     asm("move %0, $t6\n" : "=r" (gp_registers.t6) : );
//     asm("move %0, $t7\n" : "=r" (gp_registers.t7) : );
//     asm("move %0, $s0\n" : "=r" (gp_registers.s0) : );
//     asm("move %0, $s1\n" : "=r" (gp_registers.s1) : );
//     asm("move %0, $s2\n" : "=r" (gp_registers.s2) : );
//     asm("move %0, $s3\n" : "=r" (gp_registers.s3) : );
//     asm("move %0, $s4\n" : "=r" (gp_registers.s4) : );
//     asm("move %0, $s5\n" : "=r" (gp_registers.s5) : );
//     asm("move %0, $s6\n" : "=r" (gp_registers.s6) : );
//     asm("move %0, $s7\n" : "=r" (gp_registers.s7) : );
//     asm("move %0, $t8\n" : "=r" (gp_registers.t8) : );
//     asm("move %0, $t9\n" : "=r" (gp_registers.t9) : );
//     asm("move %0, $k0\n" : "=r" (gp_registers.k0) : );
//     asm("move %0, $k1\n" : "=r" (gp_registers.k1) : );
// 
//     asm("move %0, $f00\n" : "=f" (fp_registers.f0) : );
//     asm("move %0, $f01\n" : "=f" (fp_registers.f1) : );
//     asm("move %0, $f02\n" : "=f" (fp_registers.f2) : );
//     asm("move %0, $f03\n" : "=f" (fp_registers.f3) : );
//     asm("move %0, $f04\n" : "=f" (fp_registers.f4) : );
//     asm("move %0, $f05\n" : "=f" (fp_registers.f5) : );
//     asm("move %0, $f06\n" : "=f" (fp_registers.f6) : );
//     asm("move %0, $f07\n" : "=f" (fp_registers.f7) : );
//     asm("move %0, $f08\n" : "=f" (fp_registers.f8) : );
//     asm("move %0, $f09\n" : "=f" (fp_registers.f9) : );
//     asm("move %0, $f10\n" : "=f" (fp_registers.f10) : );
//     asm("move %0, $f11\n" : "=f" (fp_registers.f11) : );
//     asm("move %0, $f12\n" : "=f" (fp_registers.f12) : );
//     asm("move %0, $f13\n" : "=f" (fp_registers.f13) : );
//     asm("move %0, $f14\n" : "=f" (fp_registers.f14) : );
//     asm("move %0, $f15\n" : "=f" (fp_registers.f15) : );
//     asm("move %0, $f16\n" : "=f" (fp_registers.f16) : );
//     asm("move %0, $f17\n" : "=f" (fp_registers.f17) : );
//     asm("move %0, $f18\n" : "=f" (fp_registers.f18) : );
//     asm("move %0, $f19\n" : "=f" (fp_registers.f19) : );
//     asm("move %0, $f20\n" : "=f" (fp_registers.f20) : );
//     asm("move %0, $f21\n" : "=f" (fp_registers.f21) : );
//     asm("move %0, $f22\n" : "=f" (fp_registers.f22) : );
//     asm("move %0, $f23\n" : "=f" (fp_registers.f23) : );
//     asm("move %0, $f24\n" : "=f" (fp_registers.f24) : );
//     asm("move %0, $f25\n" : "=f" (fp_registers.f25) : );
//     asm("move %0, $f26\n" : "=f" (fp_registers.f26) : );
//     asm("move %0, $f27\n" : "=f" (fp_registers.f27) : );
//     asm("move %0, $f28\n" : "=f" (fp_registers.f28) : );
//     asm("move %0, $f29\n" : "=f" (fp_registers.f29) : );
//     asm("move %0, $f30\n" : "=f" (fp_registers.f30) : );
//     asm("move %0, $f31\n" : "=f" (fp_registers.f31) : );

};