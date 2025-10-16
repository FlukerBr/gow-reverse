#ifndef MENU_H
#define MENU_H

typedef struct
{
    ushort type;
    uint value;
} Style;

typedef struct
{
    ushort index;
    char *text;
    Style style;
    ushort CMD;
} MenuChoice;

typedef struct
{
    ushort id;
    char *title;
    MenuChoice *menuChoices;
    ushort nChoices;
    ushort nPages;
} Menu;

typedef struct
{
    Menu *menu_list;
    ushort nMenus;
    Menu *curMenu;
    ushort curPage;
    ushort choice;
} MenuManager;

void initMenu();
void updateMenu();
void stopMenu();
void displayMenu(int menuID);
void injectMenuPatches();

#endif