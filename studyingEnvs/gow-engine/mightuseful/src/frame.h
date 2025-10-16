#ifndef FRAME_H
#define FRAME_H

#include "stdint.h"
#include "temp.h"

typedef struct _F_EditText
{
    uint16_t variableID;
    uint16_t iniTextID;
    uint16_t fontID;
    uint16_t fontHeight;
    uint32_t color;
    uint16_t maxLength;
    uint16_t leftMargin;
    uint16_t rightMargin;
    uint16_t indent;
    uint16_t leading;
    int16_t xMin;
    int16_t yMin;
    uint16_t width;
    uint16_t height;
    uint8_t align;
    uint8_t flags;
} F_EditText;

typedef struct _F_FrameCell
{
    uint16_t frameNumber;
    uint16_t objectID;
    uint16_t matrixID;
    uint16_t cxformID;
    uint16_t nameID;
} F_FrameCell;


typedef struct _F_Layer
{
    F_FrameCell *cellArray;
    uint16_t depth;
    uint16_t nCells;
} F_Layer;

#define F_FrameActionLabel uint32_t

typedef struct _F_Sprite
{
    F_Layer *layerArray;
    F_FrameActionLabel *actionLabelArray;
    uint16_t nFrames;
    uint16_t nLayers;
    uint16_t nActionLabels;
    int16_t xMin;
    int16_t yMin;
    int16_t xMax;
    int16_t yMax;
} F_Sprite;


typedef struct _F_Material
{
    uint32_t color;
    uint32_t texture;
} F_Material;

typedef struct _F_Shape
{
    F_Material *matArray;
    uint16_t partNumber;
    uint16_t nMaterials;
} F_Shape;

typedef struct _F_CxForm
{
    int16_t mulr;
    int16_t mulg;
    int16_t mulb;
    int16_t mula;
} F_Cxform;



typedef struct _F_ObjectInstance
{
    struct _F_ObjectInstance *parent;
    __vtbl_ptr_type *vf10588;
} F_ObjectInstance;


typedef struct _F_EditTextInstance
{
    F_ObjectInstance *parent;
    __vtbl_ptr_type *vf10588;
} F_EditTextInstance;

typedef struct _F_Stack
{
    struct
    {
        uint16_t type;
        uint16_t data;
    } stack[256];
    unsigned char stackPool[2048];
    int stackTop;
    int stackData;
} F_Stack;

typedef struct _F_Object
{
    uint16_t type;
    uint16_t index;
} F_Object;

typedef struct _F_Font
{
    F_Shape *triStripGlyphArray;
    F_Shape *textureGlyphArray;
    int16_t *advanceArray;
    uint16_t *codeArray;
    uint32_t nGlyphs;
    float textureThreshold;
    uint16_t nameID;
    uint16_t ascent;
    uint16_t descent;
    uint16_t leading;
    uint16_t flags;
} F_Font;


typedef struct _F_Matrix
{
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
    int16_t tx;
    int16_t ty;
} F_Matrix;

typedef struct _F_Text
{
    uint8_t *data;
    F_Matrix matrix;
    uint32_t nBytes;
} F_Text;

typedef struct _F_ButtonAction
{
    uint8_t *actions;
    uint32_t nActionBytes;
    uint32_t gpButton;
    uint16_t flags;
} F_ButtonAction;


typedef struct _F_Button
{
    F_Sprite * sprite;
    F_ButtonAction *actionArray;
    F_ButtonAction *actionArray;
    uint16_t nActions;
} F_Button;

typedef struct _F_Movie
{
    uint32_t _uID;
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
    uint16_t version;
    uint16_t frameRate;
    uint16_t width;
    uint16_t height;
    uint32_t nObjects;
    uint32_t nShapes;
    uint32_t nFonts;
    uint32_t nTexts;
    uint32_t nEditTexts;
    uint32_t nButtons;
    uint32_t nSprites;
    uint16_t nMatrices;
    uint16_t nCxforms;
    uint16_t nameArraySize;
} F_Movie;

#define NameValue uint32_t

typedef struct _F_Dictionary
{
    NameValue **hashTable;
} F_Dictionary;

typedef struct _F_LayerInstance
{
    F_ObjectInstance *instance;
    F_FrameCell *curFrameCell;
} F_LayerInstance;


typedef struct _F_SpriteInstance
{
    F_ObjectInstance *parent;
    __vtbl_ptr_type *vf10588;
    char* name;
    bool playing;
    uint32_t curFrame;
    uint32_t nextFrame;
    uint32_t request;
    F_Sprite sprite;
    F_MovieInstance *movieInstance;
    F_Dictionary dictionary;
    F_LayerInstance *layerInstanceArray;
    uint32_t dropShadowColor;
    float dropShadowOffset;
    bool visible;
    float xPos;
    float yPos;
    float xScale;
    float yScale;
    float width;
    float height;
    float alpha;
    float rotation;
    void (*spriteCB)(void);
    void *cbData;
} F_SpriteInstance;

typedef struct _F_ActionInstance
{
    uint8_t *actions;
    F_ObjectInstance *objectInstace;
     F_SpriteInstance *spriteInstance;
    struct _F_ActionInstance *next;
} F_ActionInstance;

typedef struct _F_VarCmdHandler
{
    char *prefix;
    int prefixlen;
    int lastCmdID;
    struct _F_VarCmdHandler *next;
    __vtbl_ptr_type *f10531;
} F_VarCmdHandler;

#define renModel uint32_t
#define renView uint32_t
#define renViewportContext uint32_t

typedef struct _F_MovieInstance
{
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
    uint32_t startMS;
    bool pausing;
    bool looping;
    bool repeatFrame;
    bool simKeyEvent;
    int32_t lastFlashFrame;
    int32_t nGameFrames;
    int32_t firstGameFrame;
    uint32_t lastPrimaryDown;
    uint32_t lastSecondDown;
    uint32_t primaryPress;
    uint32_t primaryRelease;
    uint32_t secondaryPress;
    uint32_t secondaryRelease;
    F_Cxform curCxform;
    F_SpriteInstance curSI;
    uint32_t renderQuality;
} F_MovieInstance;


#endif