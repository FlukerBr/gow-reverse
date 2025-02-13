#ifndef SOUND_H
#define SOUND_H

#include "structs.h"


uint sound_UpdatePhaseEnd(uint,ulong);
uint sound_UpdatePhaseBegin(uint,ulong);
uint sound_MasterContext_Destructor_MasterContext(void);
uint sound_Mixer_SetMix(int,float);
uint sound_Mixer_SetStateData(void const *);
uint sound_Mixer_GetStateData(void *);
uint sound_Mixer_Restore(sound_Mixer_SaveState const *);
uint sound_Channel_Restore(sound_Channel_SaveState const *);
uint sound_Mixer_Save(sound_Mixer_SaveState *);
uint sound_Channel_Save(sound_Channel_SaveState *);
uint sound_Mixer_RemoveWadContext(wadContext *);
uint sound_Channel_RemoveWadContext(wadContext *);
uint sound_Channel_ClearMissing(float);
uint sound_Channel_ProcessMissing(void);
uint sound_Channel_SetMissing(void);
uint sound_Mixer_SetMode(int);
uint sound_Channel_SetMode(sound_Channel_Modes);
uint sound_Mixer_SetVolume(int,int,float);
uint sound_Channel_SetVolume(int,float,float);
uint sound_Mixer_Stop(float);
uint sound_Mixer_Start(char const *,float,bool,bool,bool);
uint sound_Mixer_StartFightMusic(char const *,int,float,float);
uint sound_Mixer_AutoDuck(char const *,int,float,float,float);
uint sound_Mixer_Buffer(char const *);
uint sound_Mixer_Run(void);
uint sound_Channel_ClearBuffering(void);
uint sound_Channel_IsBuffered(void);
uint sound_Channel_BufferCallback(uint,ulong);
uint sound_Channel_Buffer(char const *);
uint sound_Channel_StartFromBuffered(float,bool);
uint sound_Channel_Start(char const *,float,bool);
uint sound_Channel_Stop(void);
uint sound_Channel_SetFade_(sound_Channel_State,float);
uint sound_Channel_SetFade(float,float);
uint sound_Channel_Process(void);
uint sound_Channel_GetTime(void);
uint sound_Channel_GetPosition(void);
uint sound_PlayerInFight(void);
uint sound_Mixer_Mixer(void);
uint sound_Mixer_Initialise(void);
uint sound_Channel_Channel(void);
uint sound_GroupModScript_Reset(void);
uint sound_GroupModScript_StopGroupMod(goScript *);
uint sound_GroupModScript_Initialise(void);
uint sound_GroupModScript_StartGroupMod(goScript *);
uint sound_GroupModScript_Run(goScript *);
uint sound_GroupModScript_Destructor_GroupModScript(void);
uint sound_GroupModScript_GroupModScript(goScript *);
uint sound_SetMix(sound_Mix const *);
uint sound_Server_UnPauseAllClients(void);
uint sound_Server_PauseAllClients(void);
uint sound_FindSound_(char const *);
uint sound_FindSound(uint);
uint sound_IsPaused(int);
uint sound_PauseGameSounds(int,int);
uint sound_Server_ProcessServer(void);
uint sound_Server_CreateMasterContext(void);
uint sound_Server_Destructor_Server(void);
uint sound_Server_Server(svrParm const *);
uint sound_StatsCallback(uint,ulong);
uint sound_SetUserMixChannel(int,int);
uint sound_GetUserMixChannel(int);
uint sound_AddReverb(float,int);
uint sound_GetBaseReverbDepth(void);
uint sound_SetPlaybackMode(int);
uint sound_GetPlaybackMode(void);
uint sound_MasterContext_NotifyClientDisconnect(svrClient *);
uint sound_MasterContext_NotifyClientConnect(svrClient *);
uint sound_MasterContext_FreeClient(svrClient *);
uint sound_MasterContext_AllocateClient(svrClientParm const *);
uint sound_WadContext_GetStaticEmitter(sound_ClientParm *);
uint sound_WadContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint sound_WadContext_Destructor_WadContext(void);
uint sound_WadContext_WadContext(svrParm const *);
uint sound_Context_Disconnect(void);
uint sound_Context_Connect(void);
uint sound_Context_NotifyClientDisconnect(svrClient *);
uint sound_Context_NotifyClientConnect(svrClient *);
uint sound_Context_FreeClient(svrClient *);
uint sound_Context_AllocateClient(svrClientParm const *);
uint sound_Context_LoadClient(IFF_Header const *,svrLoadParm const *);
uint sound_Context_Destructor_Context(void);
uint sound_Context_Context(svrParm const *);
uint sound_Stub_CheckStub(void);
uint sound_ClientParm_IsLoop(void);
uint sound_ClientParm_IsStub(void);
uint sound_Stub_Stub(stdDynaString const *);
uint sound_ClientParm_ClientParm(sound_ClientTypes);
uint sound_UpdateWadLoad(void);
uint sound_Tag_Invalidate(void);
uint sound_Tag_IsValid(void);
uint sound_IOPVAGBankParm_LoadCallback(uint,ulong);
uint sound_IOPVAGBankParm_Destructor_IOPVAGBankParm(void);
uint sound_IOPVAGBankParm_IOPVAGBankParm(IFF_Header const *,sound_BankLoadParm const *);
uint sound_BankParm_UpdateLoad(void);
uint sound_BankParm_Destructor_BankParm(void);
uint sound_BankParm_BankParm(char const *,sound_BankLoadParm const *,sound_WadContext *);
uint sound_BankParm_LoadCallback(uint,ulong);
uint sound_BankParm_LoopTestCallback(uint,ulong);
uint sound_ReleaseLPBuffer(void);
uint sound_AcquireLPBuffer(void const *,bool);
uint sound_Globals_Initialise(char const *);
uint sound_Globals_Globals(void);
uint sound_MixerSetting_HackMix(sound_Mix *);
uint sound_Listener_Update(void);
uint sound_Listener_Initialise(void);
uint sound_Listener_Listener(camera_Client *);
uint sound_Context_ProcessServer(void);
uint sound_Emitter_SetVolume_(int,uint);
uint sound_Emitter_SetEmitterType(uint);
uint sound_Emitter_SetRegister(int,int);
uint sound_Emitter_SetPitchBend(int);
uint sound_Emitter_SetVolume(int);
uint sound_Emitter_DeleteAllClients(void);
uint sound_Emitter_SetFieldZoneVolume(float,float);
uint sound_Emitter_Process(void);
uint sound_Emitter_ClearRetry(void);
uint sound_Emitter_SetSinglePlay(void);
uint sound_Emitter_ProcessCurve(VUVec4,float);
uint sound_Emitter_ProcessAnimationDriven(void);
uint sound_Emitter_IsPaused(void);
uint sound_Emitter_Continue(void);
uint sound_Emitter_Pause(void);
uint sound_Emitter_SetPlayIndex(int);
uint sound_Emitter_StopNow(void);
uint sound_Emitter_Stop__(char const *);
uint sound_Emitter_Stop_(sound_ClientParm const *);
uint sound_Emitter_Stop(void);
uint sound_Emitter_Start_(char const *);
uint sound_Emitter_Start(sound_ClientParm const *);
uint sound_Emitter_StopLoops(void);
uint sound_Emitter_IsPlaying(sound_ClientParm const *);
uint sound_Emitter_GetHandle(sound_ClientParm const *);
uint sound_Emitter_Reset(void);
uint sound_Emitter_Disconnect(void);
uint sound_Emitter_Connect(void);
uint sound_Emitter_InitAnim(void);
uint sound_Emitter_Destructor_Emitter(void);
uint sound_Emitter_Emitter(sound_EmitterParm const *,Pool *);
uint sound_Handle_UpdateHandleCB(uint,ulong);
uint sound_Handle_Continue(void);
uint sound_Handle_Pause(void);
uint sound_Handle_StopNow(void);
uint sound_Handle_Play(void);
uint sound_Handle_Destructor_Handle(void);
uint sound_Handle_Handle(sound_ClientParm const *,uint);
uint sound_EmitterParm_EmitterParm__(void);
uint sound_EmitterParm_EmitterParm_(float,float,uint);
uint sound_EmitterParm_EmitterParm(sound_EmitterLoadParm const *,IFF_Header const *);
uint sound_SetGroupScale(int,float,int);
uint sound_gStats;
uint sound_gUserMixChannels;
uint sound_gReverbDepth;
uint sound_gVolumes;
uint sound_gPauseData;
uint sound_gGroupScales;
uint sound_ClientParm_gDummy;
uint sound_BankParm_gLoadingParms;
uint sound_BankParm_vtbl;
uint sound_IOPVAGBankParm_vtbl;
uint sound_Context_vtbl;
uint sound_WadContext_vtbl;
uint sound_MasterContext_vtbl;
uint sound_Server_vtbl;
uint sound_gChannelStateNames;
uint sound_gMusic;
uint sound_gFightMusicTest;
uint sound_gGroupModScript;
uint sound_gCurrentActionGroupModScript;
uint sound_gPauseMask;
uint sound_gIOPLastCommandProcessPhase;
uint sound_gIOPLastCommandSubmitPhase;
uint sound_gIOPCommandProcessPhase;
uint sound_gIOPCommandSubmitPhase;
uint sound_gTimeScalePitchShift_f;
uint sound_gServer;
uint sound_gSetAllVolumes;
uint sound_gReverbModCount;
uint sound_gReverbAccumulator;
uint sound_gDefaultPauseTimer;
uint sound_gPlaybackMode;
uint sound_gPMTweak;
uint sound_gGetFlagsLoop;
uint sound_gBPLCEEaddress;
uint sound_gOwnsLPBuffer;
uint sound_gLPBuffer;
uint sound_gUserMixMappings;
uint sound_gChannelNames;
uint sound_gGlobals;
uint sound_gOverrideReverb;
uint sound_gTimeScalePitchSlew;
uint sound_gSlowMoScale;
uint sound_gListener;
uint sound_gPendingUpdates;
uint sound_gTimeScalePitchShift;
uint sound_gHUDSoundZones;
uint sound_gTraceAllSounds;
uint sound_gDebugSpheres;


#endif