#ifndef MEDUSAEYEATTACKDATA_H
#define MEDUSAEYEATTACKDATA_H

#include "structs.h"


uint MedusaEyeAttackData_Update(goCreature *);
uint MedusaEyeAttackData_Destructor_MedusaEyeAttackData(void);
uint MedusaEyeAttackData_MedusaEyeAttackData(goCreature *,dc_tActionMedusaEyeAttack const *);
uint MedusaEyeAttackData___dl(void *);
uint MedusaEyeAttackData_Allocate(wadContext *);
uint MedusaEyeAttackData_sm_MedusaEyeAttackDataMultiPool;


#endif