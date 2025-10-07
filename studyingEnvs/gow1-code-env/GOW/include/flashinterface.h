#ifndef FLASHINTERFACE_H
#define FLASHINTERFACE_H

#include "type.h"
#include "renflashclient.h"
#include "renview.h"
#include "sound.h"

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
    UINT16 depth;
    UINT16 nCells;
    F_FrameCell *cellArray;
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
    ushort nFrames;
    ushort nLayers;
    ushort nActionLabels;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    F_Layer *layerArray;
    F_FrameActionLabel *actionLabelArray;
    // UINT16 nFrames;
    // UINT16 nLayers;
    // UINT16 nActionLabels;
    // INT16 xMin;
    // INT16 yMin;
    // INT16 xMax;
    // INT16 yMax;
    // undefined field9_0x16;
    // undefined field10_0x17;
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
    uint _uID;
    ushort version;
    ushort frameRate;
    ushort width;
    ushort height;
    uint nObjects;
    F_Object *objectArray;
    uint nShapes;
    F_Shape *shapeArray;
    uint nFonts;
    F_Font *fontArray;
    uint nTexts;
    F_Text* textArray;
    uint nEditTexts;
    F_EditText *editTextArray;
    uint nButtons;
    F_Button *buttonArray;
    uint nSprites;
    F_Sprite *spriteArray;
    F_Sprite *rootSprite;
    uint nMatrices;
    F_Matrix *matrixArray;
    uint nCxforms;
    F_Cxform *cxformArray;
    uint nameArraySize;
    char* nameArray;
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
    int prefixlen;
    int lastCmdID;
    int next;
    int __vtable;
    int HealthMeter_Value;
    int MagicMeter_Value;
    int EnemyMeter_Value1;
    int EnemyMeter_Value2;
    int EnemyMeter_Value3;
    int EnemyState_Value1;
    int EnemyState_Value2;
    int EnemyState_Value3;
    int CoolMeter_Value;
    int Timer_Value;
    int Timer_Seconds;
    int Commend_Value;
    char *TestString_Value;
    int HitCounter_Value;
    int Combo_Amount;
    int Combo_Message;
    int HealthMeter_Level;
    int MagicMeter_Level;
    int MeterBarGrow;
    int HealthShard_Count;
    int MagicShard_Count;
    int SirenPiece_Count;
    int Trident_Status;
    int Lightning_Status;
    int Medusa_Status;
    int Thunderbolt_Status;
    int RaiseDead_Status;
    int BerserkBlade_Status;
    int ZoneReport_Title;
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
    int PowerOrb_Capacity;
    int LightningOrb_Capacity;
    int MedusaOrb_Capacity;
    int ThunderboltOrb_Capacity;
    int RaiseDeadOrb_Capacity;
    int BerserkBladeOrb_Capacity;
    int BladesOrb_Capacity;
    int MemoryCard_CardSlot;
    int MemoryCard_Name1;
    int MemoryCard_Name2;
    int MemoryCard_Name3;
    int MemoryCard_Name4;
    int MemoryCard_Date1;
    int MemoryCard_Date2;
    int MemoryCard_Date3;
    int MemoryCard_Date4;
    int MemoryCard_PlayTime1;
    int MemoryCard_PlayTime2;
    int MemoryCard_PlayTime3;
    int MemoryCard_PlayTime4;
    int BonusName1;
    int BonusName2;
    int BonusName3;
    int BonusName4;
    int BonusName5;
    int BonusName6;
    int BonusName7;
    int BonusName8;
    int BonusLocked1;
    int BonusLocked2;
    int BonusLocked3;
    int BonusLocked4;
    int BonusLocked5;
    int BonusLocked6;
    int BonusLocked7;
    int BonusLocked8;
    int BonusDesc1;
    int BonusDesc2;
    int BonusDesc3;
    int MoveName1;
    int MoveName2;
    int MoveName3;
    int MoveName4;
    int MoveName5;
    int MoveName6;
    int MoveName7;
    int MoveName8;
    int MoveButtons1;
    int MoveButtons2;
    int MoveButtons3;
    int MoveButtons4;
    int MoveButtons5;
    int MoveButtons6;
    int MoveButtons7;
    int MoveButtons8;
    int MoveDesc1;
    int MoveDesc2;
    int MoveDesc3;
    int ShellStartState;
    int Costumes_Unlocked;
    int HardMode_Unlocked;
    int GameVersion;
    int EndGame;
    int EnableButtons;
    int Difficulty_Level;
    int Costume_Choice;
    int PowerUp_FirstTime;
    int Zone_Choice;
    int PowerOrb_Count;
    int LightningOrb_Count;
    int MedusaOrb_Count;
    int ThunderboltOrb_Count;
    int RaiseDeadOrb_Count;
    int BerserkBladeOrb_Count;
    int BladesOrb_Count;
    int Lightning_Level;
    int Medusa_Level;
    int Thunderbolt_Level;
    int RaiseDead_Level;
    int BerserkBlade_Level;
    int Blades_Level;
    int MessageTemplate_Event;
    int MenuTemplate_Event;
    int InterfaceStyle_Event;
    int MeterBar_Event;
    int HealthMeter_Event;
    int MagicMeter_Event;
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
    int CoolMeter_Event;
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
    int DropShadowColor;
    int DropShadowOffset;
    int MusicVolume;
    int SoundVolume;
    int Vibration;
    int WideScreen;
    int ProgressiveScan;
    int DeFlicker;
    int SoundMode;
    int Sound1;
    int Sound2;
    int Sound3;
    int Sound4;
    struct fvEntry fvTable[191];
    undefined field176_0x14a4;
    undefined field177_0x14a5;
    undefined field178_0x14a6;
    undefined field179_0x14a7;
    undefined field180_0x14a8;
    undefined field181_0x14a9;
    undefined field182_0x14aa;
    undefined field183_0x14ab;
    undefined field184_0x14ac;
    undefined field185_0x14ad;
    undefined field186_0x14ae;
    undefined field187_0x14af;
    undefined field188_0x14b0;
    undefined field189_0x14b1;
    undefined field190_0x14b2;
    undefined field191_0x14b3;
    undefined field192_0x14b4;
    undefined field193_0x14b5;
    undefined field194_0x14b6;
    undefined field195_0x14b7;
    undefined field196_0x14b8;
    undefined field197_0x14b9;
    undefined field198_0x14ba;
    undefined field199_0x14bb;
    undefined field200_0x14bc;
    undefined field201_0x14bd;
    undefined field202_0x14be;
    undefined field203_0x14bf;
    undefined field204_0x14c0;
    undefined field205_0x14c1;
    undefined field206_0x14c2;
    undefined field207_0x14c3;
    undefined field208_0x14c4;
    undefined field209_0x14c5;
    undefined field210_0x14c6;
    undefined field211_0x14c7;
    undefined field212_0x14c8;
    undefined field213_0x14c9;
    undefined field214_0x14ca;
    undefined field215_0x14cb;
    undefined field216_0x14cc;
    undefined field217_0x14cd;
    undefined field218_0x14ce;
    undefined field219_0x14cf;
    undefined field220_0x14d0;
    undefined field221_0x14d1;
    undefined field222_0x14d2;
    undefined field223_0x14d3;
    undefined field224_0x14d4;
    undefined field225_0x14d5;
    undefined field226_0x14d6;
    undefined field227_0x14d7;
    undefined field228_0x14d8;
    undefined field229_0x14d9;
    undefined field230_0x14da;
    undefined field231_0x14db;
    undefined field232_0x14dc;
    undefined field233_0x14dd;
    undefined field234_0x14de;
    undefined field235_0x14df;
    undefined field236_0x14e0;
    undefined field237_0x14e1;
    undefined field238_0x14e2;
    undefined field239_0x14e3;
    undefined field240_0x14e4;
    undefined field241_0x14e5;
    undefined field242_0x14e6;
    undefined field243_0x14e7;
    undefined field244_0x14e8;
    undefined field245_0x14e9;
    undefined field246_0x14ea;
    undefined field247_0x14eb;
    undefined field248_0x14ec;
    undefined field249_0x14ed;
    undefined field250_0x14ee;
    undefined field251_0x14ef;
    undefined field252_0x14f0;
    undefined field253_0x14f1;
    undefined field254_0x14f2;
    undefined field255_0x14f3;
    undefined field256_0x14f4;
    undefined field257_0x14f5;
    undefined field258_0x14f6;
    undefined field259_0x14f7;
    undefined field260_0x14f8;
    undefined field261_0x14f9;
    undefined field262_0x14fa;
    undefined field263_0x14fb;
    undefined field264_0x14fc;
    undefined field265_0x14fd;
    undefined field266_0x14fe;
    undefined field267_0x14ff;
    undefined field268_0x1500;
    undefined field269_0x1501;
    undefined field270_0x1502;
    undefined field271_0x1503;
    undefined field272_0x1504;
    undefined field273_0x1505;
    undefined field274_0x1506;
    undefined field275_0x1507;
    undefined field276_0x1508;
    undefined field277_0x1509;
    undefined field278_0x150a;
    undefined field279_0x150b;
    undefined field280_0x150c;
    undefined field281_0x150d;
    undefined field282_0x150e;
    undefined field283_0x150f;
    undefined field284_0x1510;
    undefined field285_0x1511;
    undefined field286_0x1512;
    undefined field287_0x1513;
    undefined field288_0x1514;
    undefined field289_0x1515;
    undefined field290_0x1516;
    undefined field291_0x1517;
    undefined field292_0x1518;
    undefined field293_0x1519;
    undefined field294_0x151a;
    undefined field295_0x151b;
    undefined field296_0x151c;
    undefined field297_0x151d;
    undefined field298_0x151e;
    undefined field299_0x151f;
    undefined field300_0x1520;
    undefined field301_0x1521;
    undefined field302_0x1522;
    undefined field303_0x1523;
    undefined field304_0x1524;
    undefined field305_0x1525;
    undefined field306_0x1526;
    undefined field307_0x1527;
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