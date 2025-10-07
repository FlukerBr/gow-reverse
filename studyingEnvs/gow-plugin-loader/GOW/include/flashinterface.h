#ifndef FLASHINTERFACE_H
#define FLASHINTERFACE_H

#include "type.h"
#include "renflashclient.h"
#include "renview.h"

typedef UINT32 FlashInterface__vtable;

typedef struct F_Stack__unnamed_ {
    UINT16 type;
    UINT16 data;
} F_Stack__unnamed_;

typedef struct F_Stack {
    struct F_Stack__unnamed_ stack[256];
    unsigned char stackPool[2048];
    int stackTop;
    int stackData;
} F_Stack;

typedef struct F_ObjectInstance__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type F_ObjectInstance;
    struct __vtbl_ptr_type IsSpriteInstance;
} F_ObjectInstance__vtable;

typedef struct F_ObjectInstance {
    struct F_ObjectInstance *parent;
    struct F_ObjectInstance__vtable *__vtable;
} F_ObjectInstance;

typedef struct F_ActionInstance {
    UINT8 *actions;
    F_ObjectInstance *objectInstance;
    struct F_ActionInstance *next;
} F_ActionInstance;

typedef struct F_Object {
    UINT16 type;
    UINT16 index;
}F_Object;

typedef struct F_Material {
    UINT32 color;
    UINT32 texture;
} F_Material;

typedef struct F_Shape {
    struct F_Material *matArray;
    UINT16 partNumber;
    UINT16 nMaterials;
} F_Shape;

typedef struct F_Font {
    F_Shape *triStripGlyphArray;
    F_Shape *texturedGlyphArray;
    INT16 *advanceArray;
    UINT16 *codeArray;
    UINT32 nGlyphs;
    FLOAT textureThreshold;
    UINT16 nameID;
    UINT16 ascent;
    UINT16 descent;
    UINT16 leading;
    UINT16 flags;
    undefined field11_0x22;
    undefined field12_0x23;
}F_Font;

typedef struct F_Matrix {
    INT32 a;
    INT32 b;
    INT32 c;
    INT32 d;
    INT16 tx;
    INT16 ty;
} F_Matrix;

typedef struct F_Text {
    UINT8 *data;
    F_Matrix matrix;
    UINT32 nBytes;
}F_Text;

typedef struct F_FrameCell {
    UINT16 frameNumber;
    UINT16 objectID;
    UINT16 matrixID;
    UINT16 cxformID;
    UINT16 nameID;
}F_FrameCell;

typedef struct F_Layer {
    F_FrameCell *cellArray;
    UINT16 depth;
    UINT16 nCells;
} F_Layer;

typedef struct F_ActionScript {
    UINT8 *actions;
    UINT32 nActionBytes;
}F_ActionScript;

typedef struct F_FrameActionLabel {
    F_ActionScript *actionArray;
    UINT16 frameNumber;
    UINT16 nActions;
    UINT16 labelID;
    undefined field4_0xa;
    undefined field5_0xb;
} F_FrameActionLabel;

typedef struct F_Sprite {
    F_Layer *layerArray;
    F_FrameActionLabel *actionLabelArray;
    UINT16 nFrames;
    UINT16 nLayers;
    UINT16 nActionLabels;
    INT16 xMin;
    INT16 yMin;
    INT16 xMax;
    INT16 yMax;
    undefined field9_0x16;
    undefined field10_0x17;
}F_Sprite;

typedef struct F_ButtonAction {
    UINT8 *actions;
    UINT32 nActionBytes;
    UINT32 gpButton;
    UINT16 flags;
    undefined field4_0xe;
    undefined field5_0xf;
} F_ButtonAction;

typedef struct F_Button {
    F_Sprite *sprite;
    F_ButtonAction *actionArray;
    UINT16 nActions;
    undefined field3_0xa;
    undefined field4_0xb;
}F_Button;


typedef struct F_Cxform {
    INT16 mulr;
    INT16 mulg;
    INT16 mulb;
    INT16 mula;
} F_Cxform;

typedef union F_EditTextInstance__value {
    char *s;
    FLOAT f;
    int i;
    BOOL b;
} F_EditTextInstance__value;

typedef struct F_LayerInstance {
    struct F_ObjectInstance *instance;
    struct F_FrameCell *curFrameCell;
} F_LayerInstance;

typedef struct F_SpriteInstance__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type F_SpriteInstance;
    struct __vtbl_ptr_type IsSpriteInstance;
} F_SpriteInstance__vtable;

typedef struct F_Dictionary {
    struct NameValue **hashTable;
} F_Dictionary;

typedef struct F_SpriteInstance {
    struct F_ObjectInstance *parent; /* Inherited from F_ObjectInstance */
    struct F_SpriteInstance__vtable *__vtable; /* Inherited from F_ObjectInstance */
    char *name;
    BOOL playing;
    UINT32 curFrame;
    UINT32 nextFrame;
    UINT32 request;
    F_Sprite *sprite;
    struct F_MovieInstance *movieInstance;
    F_Dictionary dictionary;
    F_LayerInstance *layerInstanceArray;
    UINT dropShadowColor;
    FLOAT dropShadowOffset;
    BOOL visible;
    FLOAT xPos;
    FLOAT yPos;
    FLOAT xScale;
    FLOAT yScale;
    FLOAT width;
    FLOAT height;
    FLOAT alpha;
    FLOAT rotation;
    undefined1 *spriteCB;
    void *cbData;
} F_SpriteInstance;

union TextItem__u {
    F_Shape *shape;
    F_SpriteInstance *si;
};

typedef struct TextItem {
    union TextItem__u u;
    INT16 x;
    INT16 style;
} TextItem;

typedef struct F_EditTextInstance__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type F_EditTextInstance;
    struct __vtbl_ptr_type IsSpriteInstance;
} F_EditTextInstance__vtable;

typedef struct F_EditText {
    UINT16 variableID;
    UINT16 initTextID;
    UINT16 fontID;
    UINT16 fontHeight;
    UINT32 color;
    UINT16 maxLength;
    UINT16 leftMargin;
    UINT16 rightMargin;
    UINT16 indent;
    UINT16 leading;
    INT16 xMin;
    INT16 yMin;
    UINT16 width;
    UINT16 height;
    UINT8 align;
    UINT8 flags;
} F_EditText;

typedef struct F_Movie {
    UINT32 _uID;
    F_Object *objectArray;
    F_Shape *shapeArray;
    F_Font *fontArray;
    F_Text *textArray;
    F_EditText *editTextArray;
    F_Button *buttonArray;
    F_Sprite *spriteArray;
    F_Sprite *rootSprite;
    F_Matrix *matrixArray;
    F_Cxform *cxformArray;
    char *nameArray;
    UINT16 version;
    UINT16 frameRate;
    UINT16 width;
    UINT16 height;
    UINT32 nObjects;
    UINT32 nShapes;
    UINT32 nFonts;
    UINT32 nTexts;
    UINT32 nEditTexts;
    UINT32 nButtons;
    UINT32 nSprites;
    UINT16 nMatrices;
    UINT16 nCxforms;
    UINT16 nameArraySize;
    undefined field26_0x5a;
    undefined field27_0x5b;
} F_Movie;

typedef struct F_MovieInstance {
    VUMat4 mat1;
    VUMat4 matrix;
    VUMat4 fullScreenMatrix;
    F_Cxform cxform;
    F_Stack stack;
    F_Movie *movie;
    F_SpriteInstance *spriteInstance;
    F_ActionInstance *firstActionInstance;
    F_ActionInstance *lastActionInstance;
    F_VarCmdHandler *vchList;
    renModel *model;
    renView *view;
    renViewportContext *viewportContext;
    UINT32 startMS;
    BOOL pausing;
    BOOL looping;
    BOOL repeatFrame;
    BOOL simKeyEvent;
    INT32 lastFlashFrame;
    INT32 nGameFrames;
    INT32 firstGameFrame;
    UINT32 lastPrimaryDown;
    UINT32 lastSecondaryDown;
    UINT32 primaryPress;
    UINT32 primaryRelease;
    UINT32 secondaryPress;
    UINT32 secondaryRelease;
    F_Cxform curCxform;
    F_SpriteInstance *curSI;
    UINT32 renderQuality;
    undefined field30_0xd38;
    undefined field31_0xd39;
    undefined field32_0xd3a;
    undefined field33_0xd3b;
    undefined field34_0xd3c;
    undefined field35_0xd3d;
    undefined field36_0xd3e;
    undefined field37_0xd3f;
} F_MovieInstance;

typedef struct F_EditTextInstance {
    F_ObjectInstance *parent;
    F_EditTextInstance__vtable *__vtable;
    F_MovieInstance *movieInstance;
    TextItem *itemArray;
    union F_EditTextInstance__value value;
    UINT16 nMacros;
    UINT16 nShapes;
    UINT16 nSprites;
    UINT16 rendered:1;
    UINT16 isString:1;
    undefined field10_0x1b;
} F_EditTextInstance;

typedef union fvEntry__setFunc____pfn_or_delta2 {
    undefined1 *__pfn;
    short int __delta2;
} fvEntry__setFunc____pfn_or_delta2;

typedef struct fvEntry__setFunc {
    short int __delta;
    short int __index;
    union fvEntry__setFunc____pfn_or_delta2 __pfn_or_delta2;
} fvEntry__setFunc;

typedef struct fvEntry {
    char *name;
    int type;
    void *value;
    BOOL readOnly;
    struct fvEntry__setFunc setFunc;
} fvEntry;

typedef enum GOD_STATE {
    GOD_OFF=0,
    GOD_NORMAL=1,
    GOD_GLOW=2,
    GOD_FLASH=3
} GOD_STATE;

typedef struct F_ButtonInstance__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type F_ButtonInstance;
    struct __vtbl_ptr_type IsSpriteInstance;
} F_ButtonInstance__vtable;

typedef struct F_ButtonInstance {
    struct F_ObjectInstance *parent; /* Inherited from F_ObjectInstance */
    struct F_ButtonInstance__vtable *__vtable; /* Inherited from F_ObjectInstance */
    struct F_Sprite *sprite;
    struct F_LayerInstance *layerInstanceArray;
} F_ButtonInstance;

typedef struct F_TextInstance__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type F_TextInstance;
    struct __vtbl_ptr_type IsSpriteInstance;
} F_TextInstance__vtable;

typedef struct F_TextInstance {
    struct F_ObjectInstance *parent; /* Inherited from F_ObjectInstance */
    struct F_TextInstance__vtable *__vtable; /* Inherited from F_ObjectInstance */
    struct F_MovieInstance *movieInstance;
} F_TextInstance;

typedef struct FlashInterface {
    char *prefix;
    int prefixLen;
    int lastCmdID;
    struct F_VarCmdHandler *next;
    struct FlashInterface__vtable *__vtable;
    int HealthMeter_Value;
    int MagicMeter_Value;
    int SubWeaponMeter_Value;
    int EnemyMeter_Value1;
    int EnemyMeter_Value2;
    int EnemyMeter_Value3;
    int EnemyState_Value1;
    int EnemyState_Value2;
    int EnemyState_Value3;
    int GodMeter_Value;
    int Timer_Value;
    int Timer_Seconds;
    char *Commend_Value;
    char *TestString_Value;
    int HitCounter_Value;
    int Combo_Amount;
    char *Combo_Message;
    int HealthMeter_Level;
    int MagicMeter_Level;
    int SubWeaponMeter_Level;
    int MeterBarGrow;
    int HealthShard_Count;
    int MagicShard_Count;
    int SirenPiece_Count;
    char *ZoneReport_Title;
    char *MessageTemplate_Line1;
    char *MessageTemplate_Line2;
    char *MessageTemplate_Line3;
    char *MessageTemplate_Line4;
    char *MessageTemplate_Line5;
    int MessageTemplate_Style;
    char *MenuTemplate_Line1;
    char *MenuTemplate_Line2;
    char *MenuTemplate_Line3;
    char *MenuTemplate_Menu1;
    char *MenuTemplate_Menu2;
    char *MenuTemplate_Menu3;
    char *MenuTemplate_Menu4;
    char *MenuTemplate_Menu5;
    int MemoryCard_CardSlot;
    char *MemoryCard_Name1;
    char *MemoryCard_Name2;
    char *MemoryCard_Name3;
    char *MemoryCard_Name4;
    char *MemoryCard_Date1;
    char *MemoryCard_Date2;
    char *MemoryCard_Date3;
    char *MemoryCard_Date4;
    char *MemoryCard_PlayTime1;
    char *MemoryCard_PlayTime2;
    char *MemoryCard_PlayTime3;
    char *MemoryCard_PlayTime4;
    char *BonusName1;
    char *BonusName2;
    char *BonusName3;
    char *BonusName4;
    char *BonusName5;
    char *BonusName6;
    char *BonusName7;
    char *BonusName8;
    int BonusLocked1;
    int BonusLocked2;
    int BonusLocked3;
    int BonusLocked4;
    int BonusLocked5;
    int BonusLocked6;
    int BonusLocked7;
    int BonusLocked8;
    char *BonusDesc1;
    char *BonusDesc2;
    char *BonusDesc3;
    char *MoveName1;
    char *MoveName2;
    char *MoveName3;
    char *MoveName4;
    char *MoveName5;
    char *MoveName6;
    char *MoveName7;
    char *MoveName8;
    char *MoveButtons1;
    char *MoveButtons2;
    char *MoveButtons3;
    char *MoveButtons4;
    char *MoveButtons5;
    char *MoveButtons6;
    char *MoveButtons7;
    char *MoveButtons8;
    char *MoveDesc1;
    char *MoveDesc2;
    char *MoveDesc3;
    int ShellStartState;
    int Costumes_Unlocked;
    int HardMode_Unlocked;
    char *GameVersion;
    int SpecialLevel;
    int Cheat;
    int Demo;
    int Language;
    int EnableButtons;
    int Difficulty_Level;
    int Costume_Choice;
    int PowerUp_FirstTime;
    int Zone_Choice;
    int Earth_Status;
    int Ice_Status;
    int Lightning_Status;
    int Wind_Status;
    int Bone_Status;
    int Hammer_Status;
    int Medusa_Status;
    int Olympus_Status;
    int Hermes_Status;
    int PowerOrb_Count;
    int EarthOrb_Count;
    int IceOrb_Count;
    int LightningOrb_Count;
    int WindOrb_Count;
    int BoneOrb_Count;
    int HammerOrb_Count;
    int MedusaOrb_Count;
    int OlympusOrb_Count;
    int BladesOrb_Count;
    int PowerOrb_Capacity;
    int EarthOrb_Capacity;
    int IceOrb_Capacity;
    int LightningOrb_Capacity;
    int WindOrb_Capacity;
    int BoneOrb_Capacity;
    int HammerOrb_Capacity;
    int MedusaOrb_Capacity;
    int OlympusOrb_Capacity;
    int BladesOrb_Capacity;
    int Earth_Level;
    int Ice_Level;
    int Lightning_Level;
    int Wind_Level;
    int Bone_Level;
    int Hammer_Level;
    int Medusa_Level;
    int Olympus_Level;
    int Blades_Level;
    int SubWeapon_Choice;
    int Relic_Choice;
    int MessageTemplate_Event;
    int MenuTemplate_Event;
    int InterfaceStyle_Event;
    int MeterBar_Event;
    int HealthMeter_Event;
    int MagicMeter_Event;
    int SubWeaponMeter_Event;
    int PowerOrb_Event;
    int HitCounter_Event;
    int PickUp_Event;
    int PickUpInfo_Event;
    int EnemyMeter_Event1;
    int EnemyMeter_Event2;
    int EnemyMeter_Event3;
    int EnemyState_Event1;
    int EnemyState_Event2;
    int EnemyState_Event3;
    int GodMeter_Event;
    int Timer_Event;
    int Commend_Event;
    int TestString_Event;
    int PauseMenu_Event;
    int PSMMenu_Event;
    int DeadMenu_Event;
    int FailedMenu_Event;
    int ZoneReport_Event;
    int SaveGame_Event;
    int DiscRemoved_Event;
    int PadRemoved_Event;
    int MemoryCard_Event;
    int Menu_Choice;
    int Done;
    int PauseDone;
    int PSMDone;
    int ShellPhase;
    int DropShadowColor;
    FLOAT DropShadowOffset;
    int MusicVolume;
    int SoundVolume;
    int Vibration;
    int WideScreen;
    int ProgressiveScan;
    int DeFlicker;
    int SoundMode;
    char *Sound1;
    char *Sound2;
    char *Sound3;
    char *Sound4;
    int Stat_TotalSeconds;
    int Stat_PlayerDeaths;
    int Stat_PlayerSaves;
    int Stat_PowerOrbs;
    int Stat_HealthOrbs;
    int Stat_MagicOrbs;
    int Stat_SubWeaponOrbs;
    int Stat_TotalChests;
    int Stat_BreakablesBroken;
    int Stat_MaxHitCounter;
    int Stat_EnemySpawns;
    int Stat_EnemyKills;
    int Stat_CSKills;
    int Stat_MiniGameWins;
    int Stat_DeathDecaps;
    int Stat_StoneShatters;
    int Stat_AirShatters;
    char *Tmp_Name1;
    char *Tmp_Name2;
    char *Tmp_Name3;
    char *Tmp_Name4;
    char *Tmp_Name5;
    char *Tmp_Name6;
    char *Tmp_Name7;
    char *Tmp_Name8;
    char *Tmp_Name9;
    char *Tmp_Name10;
    char *Tmp_Name11;
    int nWads;
    int midWad;
    int wadScrollDir;
    int wadScrollStart;
    FLOAT wadScrollTime;
    char wadName[150][20];
    fvEntry fvTable[233];
    wadContext *sgImgWC;
    renTexture *sgImgTexture;
    F_Shape *sgImgShape[4];
    int firstMove;
    int midMove;
    int moveScrollDir;
    int moveScrollStart;
    int nMoves;
    int nNormalMoves;
    int nAresMoves;
    char **altFirstMsgStartLine;
    char **lockedHeaderStartLine;
    char **lockedMoveStartLine;
    int nAltFirstMsgLines;
    int nLockedHeaderLines;
    int nLockedMoveLines;
    BOOL moveScrollRefresh;
    FLOAT moveScrollTime;
    int nBonuses;
    int midBonus;
    int bonusScrollDir;
    int bonusScrollStart;
    BOOL bonusScrollRefresh;
    FLOAT bonusScrollTime;
    char *bonusCode;
    UINT bonusSemoMovie;
    char *bonusMpeg;
    char *bonusLevel;
    BOOL bonusSelected;
    BOOL bonusPlayingMpeg;
    int curMsgID;
    int curMenuID;
    int curPickUpInfo;
    int msgPage;
    int nMsgPages;
    FLOAT msgSeconds;
    FLOAT msgTimeSoFar;
    FLOAT commendTimeLeft;
    renTexture *msgTexture;
    F_Shape *genericPickupShape;
    int msgMeterBarGrow;
    int meterBarGrowMsgID;
    renFlashClient *flashClient[3];
    Emitter *soundEmitter;
    F_SpriteInstance *promptButton;
    int curPromptButton;
    int curPickUp;
    int interfaceStyle;
    BOOL firstTimeMsgHack;
    BOOL meterBarShowing;
    BOOL magicMeterGlowing;
    int enemyMeterShowing[3];
    int enemyStateShowing[3];
    enum GOD_STATE godState;
    BOOL timerState;
    int hitCounterState;
    BOOL doVibration;
    BOOL hack_enemyMeterOff;
} FlashInterface;

extern void FlashInterface_SF_Sound(FlashInterface *,fvEntry *);
extern void FlashInterface_SF_Volume(FlashInterface *,fvEntry *);
extern void FlashInterface_SF_Vibration(FlashInterface *,fvEntry *);
extern void FlashInterface_SF_WideScreen(FlashInterface *,fvEntry *);
extern void FlashInterface_SF_ProgressiveScan(FlashInterface *,fvEntry *);
extern void FlashInterface_SF_DeFlicker(FlashInterface *,fvEntry *);
extern void FlashInterface_SF_SoundMode(FlashInterface *,fvEntry *);
extern void FlashInterface_SF_DropShadowColor(FlashInterface *,fvEntry *);
extern void FlashInterface_SF_DropShadowOffset(FlashInterface *,fvEntry *);
extern void FlashInterface_SF_Zone_Choice(FlashInterface *,fvEntry *);
extern void FlashInterface_SetZoneVars(FlashInterface *,int);
extern void FlashInterface_SetMusicVolume(FlashInterface *,int);
extern void FlashInterface_SetSoundVolume(FlashInterface *,int);
extern void FlashInterface_SetVibration(FlashInterface *,int);
extern void FlashInterface_SetWideScreen(FlashInterface *,int);
extern void FlashInterface_SetProgressiveScan(FlashInterface *,int);
extern void FlashInterface_SetDeFlicker(FlashInterface *,int);
extern void FlashInterface_SetSoundMode(FlashInterface *,int);
extern void FlashInterface_Hash(FlashInterface *,char *);
extern void FlashInterface_HashFind(FlashInterface *,char *);
extern void FlashInterface_HashFindAvailable(FlashInterface *,char *);
// extern void FlashInterface *,FlashInterface_AddVar(int,char *,int,void *,void (FlashInterface_*)(FlashInterface *,FlashInterface_fvEntry *));
extern void FlashInterface_FlashInterface(FlashInterface *);
extern void FlashInterface_Destructor_FlashInterface(FlashInterface *);
extern void FlashInterface_OneTimeSetup(FlashInterface *);
extern void FlashInterface_ResetVars(FlashInterface *);
extern void FlashInterface_FindDynamicShapes(FlashInterface *,renFlashClient *);
extern void FlashInterface_GrabTexture(FlashInterface *,F_Shape *);
extern void FlashInterface_ReplaceTexture(FlashInterface *,F_Shape *,renTexture *);
extern void FlashInterface_MemoryCardImageWadContext(FlashInterface *,wadContext *);
extern void FlashInterface_MemoryCardSetImages(FlashInterface *,int *);
extern void FlashInterface_MemoryCardClearImages(FlashInterface *);
extern void FlashInterface_FindMemoryCardImages(FlashInterface *,char *);
extern void FlashInterface_AddClient(FlashInterface *,char *);
extern void FlashInterface_RemoveClient(FlashInterface *,char *);
extern void FlashInterface_ClientCount(FlashInterface *);
extern void FlashInterface_LookupVariable(FlashInterface *,char *);
extern void FlashInterface_GetVariable(FlashInterface *,char *,int ,void *);
extern void FlashInterface_SetVariable(FlashInterface *,char *,int,void *);
extern void FlashInterface_PlaySound(FlashInterface *,int,char *);
extern void FlashInterface_ResetSettableStrings(FlashInterface *);
extern void FlashInterface_Command(FlashInterface *,char *,char *,int);
extern void FlashInterface_SetCamera(FlashInterface *,char *);
extern void FlashInterface_CommandResult(FlashInterface *,int);
extern void FlashInterface_SimKeyEvent(FlashInterface *);
extern void FlashInterface_MsgMenuCheck(FlashInterface *);
extern void FlashInterface_PerFrame(FlashInterface *);
extern void FlashInterface_CancelMsg(FlashInterface *,int);
extern void FlashInterface_ReadMsgText(FlashInterface *);
extern void FlashInterface_ParseMsgFile(FlashInterface *,int,char *,int,int);
extern void FlashInterface_CmpMsgs(FlashInterface *,void *,void *);
extern void FlashInterface_FindMsg(FlashInterface *,int,char ***);
extern void FlashInterface_GetMsgLine(FlashInterface *,int,int,char *);
extern void FlashInterface_DoMsg(FlashInterface *,int,float,int);
extern void FlashInterface_DoMsgPage(FlashInterface *);
extern void FlashInterface_TellFlashTypeOn(FlashInterface *,int,int);
extern void FlashInterface_StopFlashTypeOn(FlashInterface *);
extern void FlashInterface_DoMenu(FlashInterface *,int);
extern void FlashInterface_MsgMenuPause(FlashInterface *,int);
extern void FlashInterface_DoCommend(FlashInterface *,int,float);
extern void FlashInterface_HitCounter(FlashInterface *,int,int,int,int);
extern void FlashInterface_ClearHUD(FlashInterface *,int);
extern void FlashInterface_PromptButton(FlashInterface *,int);
extern void FlashInterface_GetStateData(FlashInterface *,void *);
extern void FlashInterface_SetStateData(FlashInterface *,void *);
extern void FlashInterface_AnimateGO(FlashInterface *,char *,char *);
extern void FlashInterface_ScreenGO(FlashInterface *,char *,char *);
extern void FlashInterface_MoveScroll_Init(FlashInterface *);
extern void FlashInterface_MoveScroll_Command(FlashInterface *,int);
extern void FlashInterface_MoveScroll_Update(FlashInterface *,int);
extern void FlashInterface_MoveScroll_GetMoveStrings(FlashInterface *,int,char *,char *,int);
extern void FlashInterface_BonusScroll_Init(FlashInterface *);
extern void FlashInterface_BonusScroll_Command(FlashInterface *,int);
extern void FlashInterface_BonusScroll_Update(FlashInterface *,int);
extern void FlashInterface_BonusScroll_GetBonusStrings(FlashInterface *,int,char *,int ,int);
extern void FlashInterface_WadJump_Init(FlashInterface *);
extern void FlashInterface_WadJump_InitRecurse(FlashInterface *,char *);
extern void FlashInterface_WadJump_Add(FlashInterface *,char *);
extern void FlashInterface_WadJump_Sort(FlashInterface *,void *,void *);
extern void FlashInterface_WadJump_Command(FlashInterface *,char *);
extern void FlashInterface_WadJump_Update(FlashInterface *,int);

extern FlashInterface* flashInterface;
extern UINT32 FlashInterface_vtbl;
extern UINT32 FlashInterface_msgFile;

#endif