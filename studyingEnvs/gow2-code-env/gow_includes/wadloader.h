#ifndef WADLOADER_H
#define WADLOADER_H

#include "structs.h"


uint wadLoader_LookupIFFChunkFunc(uint);
uint wadLoader_RegisterIFFChunkFunc(uint,void (*)(IFF_Header *,char const *));
uint wadLoader_IFFProcessDataBlockAlign16(IFF_Header *,char const *);
uint wadLoader_IFFProcessDataBlockWLength(IFF_Header *,char const *);
uint wadLoader_IFFProcessDataBlock(IFF_Header *,char const *);
uint wadLoader_IFFProcessDynaString(IFF_Header *,char const *);
uint wadLoader_ReleaseTempCopy(void);
uint wadLoader_MakeTempCopy(void const *,uint);
uint wadLoader_processOneChunk_(char const *);
uint wadLoader_processOneChunk(IFF_Header *,char const *);
uint wadLoader_ProcessWadFile(char const *,wadLoader_WADLoadMode);
uint wadLoader_AbortWadProcessing(void);
uint wadLoader_PerFrameWadProcessing(void);
uint wadLoader_LoadDataIntoRingBuffer(void);
uint wadLoader_IFFActivate(IFF_Header *,char const *);
uint wadLoader_Init(void);
uint wadLoader_tempCopySize;
uint wadLoader_tempCopyBuffer;
uint wadLoader_IFFChunkFunction;
uint wadLoader_theHeader;
uint wadLoader_wadFile;
uint wadLoader_tempCopyInUse;
uint wadLoader_atomicLoad;
uint wadLoader_sizePendingLoad;
uint wadLoader_pRingBuffer;
uint wadLoader_pWadAllocationHeap;
uint wadLoader_allocateHigh;
uint wadLoader_overrideVRAMSize;
uint wadLoader_overrideHeapSize;
uint wadLoader_pauseProcessing;
uint wadLoader_loadedWadContext;
uint wadLoader_prevWadContext;
uint wadLoader_bytesTotalInFile;
uint wadLoader_bytesLeftInFile;
uint wadLoader_chunkDataLeftToRead;
uint wadLoader_chunkInPtr;
uint wadLoader_chunkStart;
uint wadLoader_loadMode;
uint wadLoader_state;


#endif