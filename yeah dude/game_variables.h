#pragma once

#define KEY_ARROWUP 72
#define KEY_ARROWDOWN 80
#define KEY_ARROWLEFT 75
#define KEY_ARROWRIGHT 77
#define KEY_ENTER 13
#define KEY_PLUS 43

short shHouse = 1; //Amount of houses
short shStorage = 0; //Amount of Storages
short shMonument = 0; //Amount of Monuments
short shFarm = 0; //Amount of Farms
short shStonework = 0; //Amount of Stoneworks
short shLumbermill = 0; //Amount of Lumbermill
short shArmory = 0; //Amount of Armory
short shBarracks = 0; //Amount of Barracks

char input; //Input

const double iMulti = 1.4;

int iHouseWoodRequire = 200 * iMulti; //Requirement to build
int iHouseStoneRequire = 200 * iMulti; //Requirement to build
int iStorageBricksRequire = 500 * iMulti; //Requirement to build
int iStorageBoardsRequire = 500 * iMulti; //Requirement to build
int iMonumentBricksRequire = 800 * iMulti; //Requirement to build
int iMonumentBoardsRequire = 800 * iMulti; //Requirement to build
int iFarmWoodRequire = 200 * iMulti; //Requirement to build
int iStoneworksStoneRequire = 400 * iMulti; //Requirement to build
int iLumbermillWoodRequire = 1000 * iMulti; //Requirement to build
int iArmoryLeatherRequire = 300 * iMulti; //Requirement to build
int iArmoryStoneRequire = 300 * iMulti; //Requirement to build
int iBarracksBricksRequire = 1400 * iMulti; //Requirement to build
int iBarracksBoardsRequire = 1000 * iMulti; //Requirement to build

int iPopulation = 0; //Population
int iFood = 0; //Amount of food
int selection = 1; //Used for selecting options in the buffer
int selected = 1; //Displays what you have selected in main.cpp
const int iScreenSize = 120; //Size of the console screen
const int iOptionsDashSize = 20; //Size of the dashes used for options
int iArmyMax = 0; //Maximum amount of army
int iArmy = 0; //Amount of army
int iWorkers;
int iFreeWorkers;

short iFarmer = 0;
short iLogger = 0;
short Quarryman = 0;
short iAnimalHunter = 0;
short iStonemason = 0;
short iWoodworker = 0;
short iLeatherworker = 0;
short iInstructor = 0;

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

//just options size
const INT8 OptionsSize = 9;