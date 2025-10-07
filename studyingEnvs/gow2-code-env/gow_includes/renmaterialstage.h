#ifndef RENMATERIALSTAGE_H
#define RENMATERIALSTAGE_H

#include "structs.h"


uint renMaterialStage_Destructor_renMaterialStage(void);
uint renMaterialStage_renMaterialStage_(renMaterialStage const *,renMaterialDupContext *);
uint renMaterialStage_renMaterialStage(renMaterial *,renMaterialStageLoadParm const *);


#endif