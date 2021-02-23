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

int iPopulation = 0; //Population
int iFood = 0; //Amount of food
INT8 selection = 1; //Used for selecting options in the buffer
INT8 selected = 1; //displays what you have selected in main.cpp
INT8 iScreenSize = 120;
INT8 iOptionsDashSize = 20;
INT16 iArmyMax = 0; //Maximum amount of army
INT16 iArmy = 0; //Amount of army

int iWood = 0;
int iStone = 0;
int iLeather = 0;
int iBoards = 0;
int iArmor = 0;
int iBricks = 0;