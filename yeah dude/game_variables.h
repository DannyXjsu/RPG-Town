#pragma once

#define KEY_ARROWUP 72
#define KEY_ARROWDOWN 80
#define KEY_ARROWLEFT 75
#define KEY_ARROWRIGHT 77
#define KEY_ENTER 13
#define KEY_PLUS 43

short shHouse = 0; //Amount of houses
short shStorage = 0; //Amount of Storages
short shMonument = 0; //Amount of Monuments
short shFarm = 0; //Amount of Farms
short shStonework = 0; //Amount of Stoneworks
short shLumbermill = 0; //Amount of Lumbermill
short shArmory = 0; //Amount of Armory
short shBarracks = 0; //Amount of Barracks

char input; //Input

const double iMulti = 1.4;

double iHouseWoodRequire = 200 * iMulti; //Requirement to build
double iHouseStoneRequire = 200 * iMulti; //Requirement to build
double iStorageBricksRequire = 500 * iMulti; //Requirement to build
double iStorageBoardsRequire = 500 * iMulti; //Requirement to build
double iMonumentBricksRequire = 800 * iMulti; //Requirement to build
double iMonumentBoardsRequire = 800 * iMulti; //Requirement to build
double iFarmWoodRequire = 200 * iMulti; //Requirement to build
double iStoneworksStoneRequire = 400 * iMulti; //Requirement to build
double iLumbermillWoodRequire = 1000 * iMulti; //Requirement to build
double iArmoryLeatherRequire = 300 * iMulti; //Requirement to build
double iArmoryStoneRequire = 300 * iMulti; //Requirement to build
double iBarracksBricksRequire = 1400 * iMulti; //Requirement to build
double iBarracksBoardsRequire = 1000 * iMulti; //Requirement to build

int iPopulation = 0; //Population
int iFood = 0; //Amount of food
INT8 selection = 1; //Used for selecting options in the buffer
INT8 selected = 1; //Displays what you have selected in main.cpp
INT8 iScreenSize = 120; //Size of the console screen
INT8 iOptionsDashSize = 20; //Size of the dashes used for options
INT16 iArmyMax = 0; //Maximum amount of army
INT16 iArmy = 0; //Amount of army

int iWood = 0; //Amount of Wood
int iStone = 0; //Amount of Stone
int iLeather = 0; //Amount of Leather
int iBoards = 0; //Amount of Boards
int iArmor = 0; //Amount of Armor
int iBricks = 0; //Amount of Bricks

bool bHouseUnlocked = true;
bool bStorageUnlocked = false;
bool bMomumentUnlocked = false;
bool bFarmUnlocked = true;
bool bStoneworksUnlocked = false;
bool bLumbermillUnlocked = false;
bool bArmoryUnlocked = false;
bool bBarracksUnlocked = false;