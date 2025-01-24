#ifndef SUBTRACKDATA_H
#define SUBTRACKDATA_H

#include "structs.h"


uint SubTrackData_Update(goCreature *);
uint SubTrackData_Popup(goCreature *);
uint SubTrackData_Destructor_SubTrackData(void);
uint SubTrackData_SubTrackData(dc_tActionSubTrack const *);


#endif