#ifndef SOUND_H
#define SOUND_H

#include "type.h"
#include "gogameobject.h"

typedef UINT32 stdTList;
typedef UINT32 ClientParm__1_8295;
typedef UINT32 Pool__1_332;

typedef struct Emitter_ {
    UINT32 _uID; /* Inherited from svrClientType */
    UINT16 _uClientFlags; /* Inherited from svrClient */
    UINT16 _uContextID; /* Inherited from svrClient */
    undefined field3_0x8;
    undefined field4_0x9;
    undefined field5_0xa;
    undefined field6_0xb;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    UINT32 _uKey; /* Inherited from svrClientKey */
    undefined field12_0x14;
    undefined field13_0x15;
    undefined field14_0x16;
    undefined field15_0x17;
    goGameObject *m_pGameObject; /* Inherited from goClient */
    svrClientParm *m_pParm; /* Inherited from goClient */
    undefined field18_0x20;
    undefined field19_0x21;
    undefined field20_0x22;
    undefined field21_0x23;
    undefined field22_0x24;
    undefined field23_0x25;
    undefined field24_0x26;
    undefined field25_0x27;
    undefined field26_0x28;
    undefined field27_0x29;
    undefined field28_0x2a;
    undefined field29_0x2b;
    undefined field30_0x2c;
    undefined field31_0x2d;
    undefined field32_0x2e;
    undefined field33_0x2f;
    undefined field34_0x30;
    undefined field35_0x31;
    undefined field36_0x32;
    undefined field37_0x33;
    undefined field38_0x34;
    undefined field39_0x35;
    undefined field40_0x36;
    undefined field41_0x37;
    undefined field42_0x38;
    undefined field43_0x39;
    undefined field44_0x3a;
    undefined field45_0x3b;
    undefined field46_0x3c;
    undefined field47_0x3d;
    undefined field48_0x3e;
    undefined field49_0x3f;
    stdListNode *_pNextItem;
    stdListNode *_pPrevItem;
    undefined field52_0x48;
    undefined field53_0x49;
    undefined field54_0x4a;
    undefined field55_0x4b;
    undefined field56_0x4c;
    undefined field57_0x4d;
    undefined field58_0x4e;
    undefined field59_0x4f;
    undefined field60_0x50;
    undefined field61_0x51;
    undefined field62_0x52;
    undefined field63_0x53;
    undefined field64_0x54;
    undefined field65_0x55;
    undefined field66_0x56;
    undefined field67_0x57;
    undefined field68_0x58;
    undefined field69_0x59;
    undefined field70_0x5a;
    undefined field71_0x5b;
    undefined field72_0x5c;
    undefined field73_0x5d;
    undefined field74_0x5e;
    undefined field75_0x5f;
    INT16 fTransformID; /* Inherited from goAttachmentClient */
    INT16 fAnimationSetID; /* Inherited from goAttachmentClient */
    undefined field78_0x64;
    undefined field79_0x65;
    undefined field80_0x66;
    undefined field81_0x67;
    UINT64 fTimeStamp; /* Inherited from goAttachmentClient */
    stdTList fHandles;
    float fZonedFalloff;
    float fZonedVolume;
    float fZonedModulate;
    ClientParm__1_8295 *fSounds[4];
    undefined field88_0x94;
    undefined field89_0x95;
    undefined field90_0x96;
    undefined field91_0x97;
    undefined field92_0x98;
    undefined field93_0x99;
    undefined field94_0x9a;
    undefined field95_0x9b;
    undefined field96_0x9c;
    undefined field97_0x9d;
    undefined field98_0x9e;
    undefined field99_0x9f;
    stdSLListNode *__pNextItem; /* Inherited from stdSLListNode */
    undefined field101_0xa4;
    undefined field102_0xa5;
    undefined field103_0xa6;
    undefined field104_0xa7;
    undefined field105_0xa8;
    undefined field106_0xa9;
    undefined field107_0xaa;
    undefined field108_0xab;
    undefined field109_0xac;
    undefined field110_0xad;
    undefined field111_0xae;
    undefined field112_0xaf;
    undefined field113_0xb0;
    undefined field114_0xb1;
    undefined field115_0xb2;
    undefined field116_0xb3;
    undefined field117_0xb4;
    undefined field118_0xb5;
    undefined field119_0xb6;
    undefined field120_0xb7;
    unsigned char fType;
    unsigned char fReverbPreset;
    short unsigned int fFlags;
    float fInner;
    float fOuter;
    short int fPlaying;
    char fHandlesPlaying;
    char fPaused;
    UINT32 fCheckSum;
    Pool__1_332 *fHandlePool;
} Emitter;






// sound::SetGroupScale(int,float,int)	0017AFF0	P
// sound::EmitterParm::EmitterParm(sound::EmitterLoadParm const *,IFF::Header const *)	0017B050	P
// sound::EmitterParm::EmitterParm(float,float,uint)	0017B1B8	P
// sound::EmitterParm::EmitterParm(void)	0017B280	P
// sound::Handle::Handle(sound::ClientParm const *,uint)	0017B318	P
// sound::Handle::~Handle(void)	0017B380	P
// sound::Handle::Play(void)	0017B388	P
// sound::Handle::StopNow(void)	0017B3F8	P
// sound::Handle::Pause(void)	0017B448	P
// sound::Handle::Continue(void)	0017B490	P
// sound::Handle::UpdateHandleCB(uint,ulong)	0017B4D8	P
// sound::Emitter::Emitter(sound::EmitterParm const *,Pool *)	0017B4F0	P
// sound::Emitter::~Emitter(void)	0017B640	P
// sound::Emitter::InitAnim(void)	0017B698	P
// sound::Emitter::Connect(void)	0017B700	P
// sound::Emitter::Disconnect(void)	0017B780	P
// sound::Emitter::Reset(void)	0017B880	P
// sound::Emitter::IsPlaying(sound::ClientParm const *)	0017B8B0	P
// sound::Emitter::StopLoops(void)	0017B908	P
// sound::Emitter::Start(sound::ClientParm const *)	0017B988	P
// sound::Emitter::Start(char const *)	0017BA50	P
// sound::Emitter::Stop(void)	0017BA88	P
// sound::Emitter::Stop(sound::ClientParm const *)	0017BAE8	P
// sound::Emitter::Stop(char const *)	0017BB60	P
// sound::Emitter::StopNow(void)	0017BB98	P
// sound::Emitter::SetPlayIndex(int)	0017BC70	P
// sound::Emitter::Pause(void)	0017BC90	P
// sound::Emitter::Continue(void)	0017BCF8	P
// sound::Emitter::IsPaused(void)	0017BD58	P
// sound::Emitter::ProcessAnimationDriven(void)	0017BD68	P
// sound::Emitter::SetSinglePlay(void)	0017BEF0	P
// sound::Emitter::Process(void)	0017BF48	P
// sound::Emitter::SetFieldZoneVolume(float,float)	0017C7B0	P
// sound::Emitter::DeleteAllClients(void)	0017C7C8	P
// sound::Emitter::SetVolume(int)	0017C858	P
// sound::Emitter::SetPitchBend(int)	0017C860	P
// sound::Emitter::SetRegister(int,int)	0017C868	P
// sound::Emitter::SetEmitterType(uint)	0017C878	P
// sound::Emitter::SetVolume(int,uint)	0017C880	P
// sound::Context::ProcessServer(void)	0017C8B0	P
// sound::Listener::Listener(camera::Client *)	0017C948	P
// sound::Listener::Initialise(void)	0017C9F0	P
// sound::Listener::Update(void)	0017CA40	P
// sound::MixerSetting::HackMix(sound::Mix &)	0017CD08	P
// sound::Globals::Globals(void)	0017CD48	P
// sound::Globals::Initialise(char const *)	0017CD78	P
// sound::AcquireLPBuffer(void const *,bool)	0017CDE8	P
// sound::ReleaseLPBuffer(void)	0017CE28	P
// sound::BankParm::LoopTestCallback(uint,ulong)	0017CE70	P
// sound::BankParm::LoadCallback(uint,ulong)	0017CE80	P
// sound::BankParm::BankParm(char const *,sound::BankLoadParm const *,sound::WadContext *)	0017CF18	P
// sound::BankParm::~BankParm(void)	0017D180	P
// sound::BankParm::UpdateLoad(void)	0017D200	P
// sound::IOPVAGBankParm::IOPVAGBankParm(IFF::Header const *,sound::BankLoadParm const *)	0017D448	P
// sound::IOPVAGBankParm::~IOPVAGBankParm(void)	0017D4F0	P
// sound::IOPVAGBankParm::LoadCallback(uint,ulong)	0017D588	P
// sound::IOPVAGBankParm::Initialise(void)	0017D5B0	P
// sound::Tag::IsValid(void)	0017D5C8	P
// sound::Tag::Invalidate(void)	0017D618	P
// sound::UpdateWadLoad(void)	0017D628	P
// sound::ClientParm::ClientParm(sound::ClientTypes)	0017D650	P
// sound::Stub::Stub(uint)	0017D668	P
// sound::Stub::Stub(stdDynaString const &)	0017D6A8	P
// sound::ClientParm::IsStub(void)	0017D6F8	P
// sound::ClientParm::IsLoop(void)	0017D710	P
// sound::Stub::CheckStub(void)	0017D758	P
// sound::Context::Context(svrParm const *)	0017D878	P
// sound::Context::~Context(void)	0017DA08	P
// sound::Context::LoadClient(IFF::Header const *,svrLoadParm const *)	0017DAA8	P
// sound::Context::AllocateClient(svrClientParm const *)	0017DB00	P
// sound::Context::FreeClient(svrClient *)	0017DB48	P
// sound::Context::NotifyClientConnect(svrClient *)	0017DB90	P
// sound::Context::NotifyClientDisconnect(svrClient *)	0017DBB0	P
// sound::Context::Connect(void)	0017DBD0	P
// sound::Context::Disconnect(void)	0017DC18	P
// sound::WadContext::WadContext(svrParm const *)	0017DC70	P
// sound::WadContext::~WadContext(void)	0017DDB0	P
// sound::WadContext::LoadClient(IFF::Header const *,svrLoadParm const *)	0017DDD8	P
// sound::WadContext::GetStaticEmitter(sound::ClientParm *)	0017DF10	P
// sound::MasterContext::AllocateClient(svrClientParm const *)	0017DFC8	P
// sound::MasterContext::FreeClient(svrClient *)	0017E078	P
// sound::MasterContext::NotifyClientConnect(svrClient *)	0017E0B0	P
// sound::MasterContext::NotifyClientDisconnect(svrClient *)	0017E0D0	P
// sound::GetPlaybackMode(void)	0017E0F0	P
// sound::SetPlaybackMode(int)	0017E100	P
// sound::GetBaseReverbDepth(void)	0017E150	P
// sound::AddReverb(float,int)	0017E168	P
// sound::GetUserMixChannel(int)	0017E1C8	P
// sound::SetUserMixChannel(int,int)	0017E1E0	P
// sound::StatsCallback(uint,ulong)	0017E208	
// sound::Server::Server(svrParm const *)	0017E228	P
// sound::Server::~Server(void)	0017E5E8	P
// sound::Server::CreateMasterContext(void)	0017E630	P
// sound::Server::ProcessServer(void)	0017E770	P
// sound::PauseGameSounds(int,int)	0017ECA0	P
// sound::IsPaused(int)	0017EDB8	P
// sound::FindSound(uint)	0017EDC8	P
// sound::FindSound(char const *)	0017EE50	P
// sound::Server::PauseAllClients(void)	0017EEF8	P
// sound::Server::UnPauseAllClients(void)	0017EF00	P
// sound::SetMix(sound::Mix const &)	0017EF08	P
// goCreature::CreateSoundEmitter(goGameObject *,sound::Emitter *)	002032E0	P
// MaterialFX::StartSliceHitSound(dc::tMaterialFX const *,wadContext *,sound::Emitter *)	0023E880	P
// sound::Channel::Channel(void)	002452B8	P
// sound::Mixer::Initialise(void)	002453C8	P
// sound::Mixer::Mixer(void)	002453F8	P
// sound::PlayerInFight(void)	002454C8	
// sound::Channel::Process(void)	002455A0	P
// sound::Channel::SetFade(float,float)	00245948	P
// sound::Channel::SetFade(sound::Channel::State,float)	00245960	P
// sound::Channel::Stop(void)	00245B10	P
// sound::Channel::Start(char const *,float,bool)	00245B58	P
// sound::Mixer::Run(void)	00245D30	P
// sound::Mixer::Buffer(char const *)	00246038	P
// sound::Mixer::AutoDuck(char const *,int,float,float,float)	00246040	P
// sound::Mixer::StartFightMusic(char const *,int,float,float)	00246180	P
// sound::Mixer::Start(char const *,float,bool,bool)	002462A0	P
// sound::Mixer::Stop(float)	00246398	P
// sound::Channel::SetVolume(int,float,float)	00246428	P
// sound::Mixer::SetVolume(int,int,float)	00246448	P
// sound::Channel::SetMode(sound::Channel::Modes)	002464E8	P
// sound::Mixer::SetMode(int)	002465F8	P
// sound::Channel::SetMissing(void)	00246628	P
// sound::Channel::ProcessMissing(void)	00246640	P
// sound::Channel::ClearMissing(float)	00246738	P
// sound::Channel::RemoveWadContext(wadContext *)	00246770	P
// sound::Mixer::RemoveWadContext(wadContext *)	002468D8	P
// sound::Channel::Save(sound::Channel::SaveState *)	00246938	P
// sound::Mixer::Save(sound::Mixer::SaveState *)	00246A10	P
// sound::Channel::Restore(sound::Channel::SaveState const *)	00246AC8	P
// sound::Mixer::Restore(sound::Mixer::SaveState const *)	00246BB0	P
// sound::Mixer::GetStateData(void *)	00246D80	P
// sound::Mixer::SetStateData(void const *)	00246DA8	P
// sound::Mixer::SetMix(int,float)	00246DD0	P
// sound::Channel::SaveState::SaveState(void)	002569A8	P
// sound::Mixer::SaveState::SaveState(void)	002569D8	P
// sound::MasterContext::~MasterContext(void)	002598C0	P
// sound::UpdatePhaseBegin(uint,ulong)	00262E00	P
// sound::UpdatePhaseEnd(uint,ulong)	00262E10	P
// sound::gDebugSpheres	002B12B4	P
// sound::gTraceAllSounds	002B12B8	P
// sound::gHUDSoundZones	002B12BC	P
// sound::gTimeScalePitchShift	002B12C0	P
// sound::gPendingUpdates	002B12C4	P
// sound::gListener	002B12C8	P
// sound::gSlowMoScale	002B12CC	P
// sound::gTimeScalePitchSlew	002B12D0	P
// sound::gOverrideReverb	002B12D4	P
// sound::gGlobals	002B12D8	P
// sound::gChannelNames	002B12E0	P
// sound::gUserMixMappings	002B1320	
// sound::gLPBuffer	002B135C	P
// sound::gOwnsLPBuffer	002B1360	P
// sound::gBPLCEEaddress	002B1364	
// sound::gGetFlagsLoop	002B1368	P
// sound::gVAGBankStatus	002B136C	P
// sound::gPMTweak	002B1370	
// sound::gPlaybackMode	002B1374	
// sound::gDefaultPauseTimer	002B1378	
// sound::gReverbAccumulator	002B13B4	P
// sound::gReverbModCount	002B13B8	P
// sound::gSetAllVolumes	002B13BC	
// sound::gServer	002B13C0	P
// sound::gTimeScalePitchShift_f	002B13C4	P
// sound::gIOPCommandSubmitPhase	002B13C8	P
// sound::gIOPCommandProcessPhase	002B13CC	P
// sound::gIOPLastCommandSubmitPhase	002B13D0	P
// sound::gIOPLastCommandProcessPhase	002B13D4	P
// sound::gPauseMask	002B13D8	
// sound::gFightMusicTest	002B2834	
// sound::gMusic	002B2838	P
// sound::gChannelStateNames	002B2840	P
// sound::gPendingMixerSave	002B2860	P
// sound::Server::`vtbl'	002CB4D0	P
// sound::MasterContext::`vtbl'	002CB590	P
// sound::WadContext::`vtbl'	002CB670	P
// sound::Context::`vtbl'	002CB750	P
// sound::IOPVAGBankParm::`vtbl'	002CB830	P
// sound::BankParm::`vtbl'	002CB848	P
// sound::BankParm::gLoadingParms	0030BB70	P
// sound::ClientParm::gDummy	0030BB78	P
// sound::gMixerSaveState	00311740	P
// sound::gGroupScales	00313380	
// sound::gPauseData	00313400	
// sound::gVolumes	003134B8	
// sound::gReverbDepth	00313538	
// sound::gUserMixChannels	00313540	
// sound::gStats	00313548	







#endif