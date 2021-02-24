#pragma once
#include <iostream>
#include "game_variables.h"

using namespace std;

//just town status
void TownStatus() {
	cout << "|Populaton: " << iPopulation << "|Army: " << iArmy << "/" << iArmyMax << "|Food: " << iFood << "|" << endl;
}

//menu for exiting the game, for some reason has some weird glitch where you press no and it doesn't actually work but if you do it again it works, idk why that happens
int ExitGame() {
	selected = selection;
	selection = 2;
	bool doLoop = true;
	while (doLoop == true) {
		system("cls");
		cout << "---------------------------------------" << endl;
		cout << "|Are you sure you wanna quit the game?|" << endl;
		cout << "---------------------------------------" << endl;
		cout << "|";
		#ifdef _WIN32
		if (selection == 1) {
			selection_color();
			cout << "       YES        ";
			default_color();
			cout << "|";
			cout << "        NO        ";
			cout << "|" << endl;
		}
		else {
			cout << "       YES        ";
			cout << "|";
			selection_color();
			cout << "        NO        ";
			default_color();
			cout << "|" << endl;
		}
		cout << "---------------------------------------" << endl;
		input = _getch();
		#else
		if (selection == 1) {
			cout << "     ==YES==      ";
			cout << "|";
			cout << "        no        ";
			cout << "|" << endl;
	}
		else {
			cout << "       yes        ";
			cout << "|";
			cout << "      ==NO==      ";
			cout << "|" << endl;
		}
		cout << "---------------------------------------" << endl;
		input = getchar();
		#endif
		switch (input)
		{
		case KEY_ARROWLEFT:
			selection--;
			break;
		case KEY_ARROWRIGHT:
			selection++;
			break;
		case KEY_ENTER:
			doLoop = false;
			return selection;
			break;
		default:
			break;
		}
		if (selection > 2)
		{
			selection = 1;
		}
		else if (selection < 1)
		{
			selection = 2;
		}
	}
	return 2;
}

int ResetGameMenu() {
	selected = selection;
	selection = 2;
	bool doLoop = true;
	while (doLoop == true) {
		system("cls");
		cout << "----------------------------------------" << endl;
		cout << "|Are you sure you wanna reset the game?|" << endl;
		cout << "----------------------------------------" << endl;
		#ifdef _WIN32
		if (selection == 1) {
			selection_color();
			cout << "       YES        ";
			default_color();
			cout << "|";
			cout << "        NO        ";
			cout << "|" << endl;
		}
		else {
			cout << "       YES        ";
			cout << "|";
			selection_color();
			cout << "        NO        ";
			default_color();
			cout << "|" << endl;
		}
		cout << "---------------------------------------" << endl;
		input = _getch();
		#else
		if (selection == 1) {
			cout << "     ==YES==      ";
			cout << "|";
			cout << "        no        ";
			cout << "|" << endl;
		}
		else {
			cout << "       yes        ";
			cout << "|";
			cout << "      ==NO==      ";
			cout << "|" << endl;
		}
		cout << "---------------------------------------" << endl;
		input = getchar();
		#endif
		switch (input)
		{
		case KEY_ARROWLEFT:
			selection--;
			break;
		case KEY_ARROWRIGHT:
			selection++;
			break;
		case KEY_ENTER:
			doLoop = false;
			return selection;
			break;
		default:
			break;
		}
		if (selection > 2)
		{
			selection = 1;
		}
		else if (selection < 1)
		{
			selection = 2;
		}
	}
	return 2;
}
void ResetGame() {
	shHouse = 1; //Amount of houses
	shStorage = 0; //Amount of Storages
	shMonument = 0; //Amount of Monuments
	shFarm = 0; //Amount of Farms
	shStonework = 0; //Amount of Stoneworks
	shLumbermill = 0; //Amount of Lumbermill
	shArmory = 0; //Amount of Armory
	shBarracks = 0; //Amount of Barracks

	iHouseWoodRequire = 200 * iMulti;  
	iHouseStoneRequire = 200 * iMulti;  
	iStorageBricksRequire = 500 * iMulti;  
	iStorageBoardsRequire = 500 * iMulti;  
	iMonumentBricksRequire = 800 * iMulti;  
	iMonumentBoardsRequire = 800 * iMulti;  
	iFarmWoodRequire = 200 * iMulti;  
	iStoneworksStoneRequire = 400 * iMulti;  
	iLumbermillWoodRequire = 1000 * iMulti;  
	iArmoryLeatherRequire = 300 * iMulti;  
	iArmoryStoneRequire = 300 * iMulti;  
	iBarracksBricksRequire = 1400 * iMulti;  
	iBarracksBoardsRequire = 1000 * iMulti;

	iPopulation = 0;
	iFood = 0;
	selection = 1;
	selected = 1;
	iArmyMax = 0;
	iArmy = 0;
	iWorkers = 0;
	iFreeWorkers = 0;

	iWood = 0;
	iStone = 0;
	iLeather = 0;
	iBoards = 0;
	iArmor = 0;
	iBricks = 0;

	bHouseUnlocked = true;
	bStorageUnlocked = false;
	bMomumentUnlocked = false;
	bFarmUnlocked = true;
	bStoneworksUnlocked = false;
	bLumbermillUnlocked = false;
	bArmoryUnlocked = false;
	bBarracksUnlocked = false;
}

void UpdatePopulation() {
	if (iPopulation < 0) {
		iPopulation = 0;
	}
	iPopulation = shHouse * 2;
}