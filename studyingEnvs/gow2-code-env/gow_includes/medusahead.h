#ifndef MEDUSAHEAD_H
#define MEDUSAHEAD_H

#include "structs.h"


uint MedusaHead_SCR_MedusaHeadBomb(goScript *);
uint MedusaHead_SCR_MedusaHeadNuke(goScript *);
uint MedusaHead_SCR_MedusaHeadChrgEvts(goScript *);
uint MedusaHead_SCR_MedusaHeadChrgEvtsDestructor(goScript *);
uint MedusaHead_SCR_MedusaHeadEvts(goScript *);
uint MedusaHead_SCR_MedusaHeadFlash(goScript *);
uint MedusaHead_SCR_MedusaHeadBeam(goScript *);
uint MedusaHead_SCR_MedusaHeadBeamDestructor(goScript *);
uint MedusaHead_SCR_MedusaHeadShow(goScript *);
uint MedusaHead_SCR_MedusaHeadShowDestructor(goScript *);
uint MedusaHead_SCR_MedusaHeadUpdate(goScript *);
uint MedusaHead_SCR_MedusaHeadUpdateDestructor(goScript *);
uint MedusaHead_PlayOutOfMagicSound(void);
uint MedusaHead_DoFlash(void);
uint MedusaHead_DoBeam(void);
uint MedusaHead_GetMedusaHeadContext(void);
uint MedusaHead_AreResourcesAllocated(void);
uint MedusaHead_FreeResources(void);
uint MedusaHead_SetUnloadPending(int);
uint MedusaHead_GetHeadGO(void);
uint MedusaHead_DisconnectBeamEffect(goCreature *);
uint MedusaHead_ConnectBeamEffect(goCreature *);
uint MedusaHead_FlashEffect(VUMat4);
uint MedusaHead_Init(goCreature *);
uint MedusaHead_sm_fChargeTime;
uint MedusaHead_sm_fFlashDropBackOffset;
uint MedusaHead_sm_fFlashConeAngleCos;
uint MedusaHead_sm_fDropBackOffset;
uint MedusaHead_sm_fConeAngleCos;
uint MedusaHead_sm_hEffects;
uint MedusaHead_sm_iShowRefCnt;
uint MedusaHead_sm_iBeamRefCnt;
uint MedusaHead_sm_iChargeEvtsRefCnt;
uint MedusaHead_sm_iUpdateRefCnt;
uint MedusaHead_sm_bUnloadPending;


#endif