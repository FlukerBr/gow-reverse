#ifndef SYSPAD_H
#define SYSPAD_H

#include "structs.h"


uint sysPad_ControlStick_Process(sysPad *,uint,uint);
uint sysPad_ControlStick_ControlStick(void);
uint sysPad_Process(bool);
uint sysPad_Read(bool);
uint sysPad_Reset(void);
uint sysPad_Initialise_(int,int);
uint sysPad_Shutdown(void);
uint sysPad_Initialise(void);
uint sysPad_CheckCheatCode(uint);
uint sysPad_UpdateCheatCode(void);
uint sysPad_Set(uint,uchar);
uint sysPad_Clear(void);
uint sysPad_ReadPads(bool);
uint sysPad_sysPad(void);
uint sysPad_gRawPads;
uint sysPad_gDeadZone;
uint sysPad_gPreviousDigitalAll;
uint sysPad_gDigitalAll;


#endif