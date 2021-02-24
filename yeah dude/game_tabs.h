#pragma once
#include <iostream>
#include <conio.h>
#include "game_variables.h"
#include "system_console.h"
#include "game_functions.h"

#ifdef _WIN32 //Checks if the OS is windows or not
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

void cQuests() {
	cout << "No quests available yet\n";
}

void cTown() {
	selection = 1;
	while (true) {
		Clear();
		TownStatus();
		drawLine(iScreenSize);
		cout << "==========UTILITY==========" << endl;
		drawLine(iScreenSize);
		if (bHouseUnlocked == true) {
			cout << "HOUSE" << endl;
			cout << "Total: " << shHouse << endl;
			cout << "Requirements: " << iHouseWoodRequire << " Wood | " << iHouseStoneRequire << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bStorageUnlocked == true) {
			cout << "STORAGE" << endl;
			cout << "Total: " << shStorage << endl;
			cout << "Requirements: " << iStorageBoardsRequire << " Boards | " << iStorageBricksRequire << " Bricks" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bMomumentUnlocked == true) {
			cout << "MONUMENT" << endl;
			cout << "Total: " << shMonument << endl;
			cout << "Requirements: " << iMonumentBoardsRequire << " Boards | " << iMonumentBricksRequire << " Bricks" << endl;
			drawLine(iScreenSize);
		}
		cout << "=======PRODUCTION=======" << endl;
		drawLine(iScreenSize);
		if (bFarmUnlocked == true) {
			cout << "FARM" << endl;
			cout << "Total: " << shFarm << endl;
			cout << "Requirements: " << iFarmWoodRequire << " Wood" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bStoneworksUnlocked == true) {
			cout << "STONEWORKS" << endl;
			cout << "Total: " << shStonework << endl;
			cout << "Requirements: " << iStoneworksStoneRequire << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bLumbermillUnlocked == true) {
			cout << "LUMBERMILL" << endl;
			cout << "Total: " << shLumbermill << endl;
			cout << "Requirements: " << iLumbermillWoodRequire << " Wood" << endl;
			drawLine(iScreenSize);
		}
		cout << "=========SERVICES=========" << endl;
		drawLine(iScreenSize);
		if (bArmoryUnlocked == true) {
			cout << "ARMORY" << endl;
			cout << "Total: " << shArmory << endl;
			cout << "Requirements: " << iArmoryLeatherRequire << " Leather | " << iArmoryStoneRequire << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bBarracksUnlocked == true) {
			cout << "BARRACKS" << endl;
			cout << "Total: " << shBarracks << endl;
			cout << "Requirements: " << iBarracksBoardsRequire << " Boards | " << iBarracksBricksRequire << " Bricks" << endl;
			drawLine(iScreenSize);
		}
		switch (selection)
		{
		case 1:
			selection_color();
			cout << "BUILD A HOUSE";
			default_color();
			cout << endl;
			cout << "BUILD A STORAGE" << endl;
			cout << "BUILD A MONUMENT" << endl;
			cout << "BUILD A FARM" << endl;
			cout << "BUILD STONEWORKS" << endl;
			cout << "BUILD A LUMBERMILL" << endl;
			cout << "BUILD ARMORY" << endl;
			cout << "BUILD BARRACKS" << endl;
			drawLine(iOptionsDashSize);
			cout << "BACK" << endl;
			break;
		case 2:
			cout << "BUILD A HOUSE" << endl;
			selection_color();
			cout << "BUILD A STORAGE";
			default_color();
			cout << endl;
			cout << "BUILD A MONUMENT" << endl;
			cout << "BUILD A FARM" << endl;
			cout << "BUILD STONEWORKS" << endl;
			cout << "BUILD A LUMBERMILL" << endl;
			cout << "BUILD ARMORY" << endl;
			cout << "BUILD BARRACKS" << endl;
			drawLine(iOptionsDashSize);
			cout << "BACK" << endl;
			break;
		case 3:
			cout << "BUILD A HOUSE" << endl;
			cout << "BUILD A STORAGE" << endl;
			selection_color();
			cout << "BUILD A MONUMENT";
			default_color();
			cout << endl;
			cout << "BUILD A FARM" << endl;
			cout << "BUILD STONEWORKS" << endl;
			cout << "BUILD A LUMBERMILL" << endl;
			cout << "BUILD ARMORY" << endl;
			cout << "BUILD BARRACKS" << endl;
			drawLine(iOptionsDashSize);
			cout << "BACK" << endl;
			break;
		case 4:
			cout << "BUILD A HOUSE" << endl;
			cout << "BUILD A STORAGE" << endl;
			cout << "BUILD A MONUMENT" << endl;
			selection_color();
			cout << "BUILD A FARM";
			default_color();
			cout << endl;
			cout << "BUILD STONEWORKS" << endl;
			cout << "BUILD A LUMBERMILL" << endl;
			cout << "BUILD ARMORY" << endl;
			cout << "BUILD BARRACKS" << endl;
			drawLine(iOptionsDashSize);
			cout << "BACK" << endl;
			break;
		case 5:
			cout << "BUILD A HOUSE" << endl;
			cout << "BUILD A STORAGE" << endl;
			cout << "BUILD A MONUMENT" << endl;
			cout << "BUILD A FARM" << endl;
			selection_color();
			cout << "BUILD STONEWORKS";
			default_color();
			cout << endl;
			cout << "BUILD A LUMBERMILL" << endl;
			cout << "BUILD ARMORY" << endl;
			cout << "BUILD BARRACKS" << endl;
			drawLine(iOptionsDashSize);
			cout << "BACK" << endl;
			break;
		case 6:
			cout << "BUILD A HOUSE" << endl;
			cout << "BUILD A STORAGE" << endl;
			cout << "BUILD A MONUMENT" << endl;
			cout << "BUILD A FARM" << endl;
			cout << "BUILD STONEWORKS" << endl;
			selection_color();
			cout << "BUILD A LUMBERMILL";
			default_color();
			cout << endl;
			cout << "BUILD ARMORY" << endl;
			cout << "BUILD BARRACKS" << endl;
			drawLine(iOptionsDashSize);
			cout << "BACK" << endl;
			break;
		case 7:
			cout << "BUILD A HOUSE" << endl;
			cout << "BUILD A STORAGE" << endl;
			cout << "BUILD A MONUMENT" << endl;
			cout << "BUILD A FARM" << endl;
			cout << "BUILD STONEWORKS" << endl;
			cout << "BUILD A LUMBERMILL" << endl;
			selection_color();
			cout << "BUILD ARMORY";
			default_color();
			cout << endl;
			cout << "BUILD BARRACKS" << endl;
			drawLine(iOptionsDashSize);
			cout << "BACK" << endl;
			break;
		case 8:
			cout << "BUILD A HOUSE" << endl;
			cout << "BUILD A STORAGE" << endl;
			cout << "BUILD A MONUMENT" << endl;
			cout << "BUILD A FARM" << endl;
			cout << "BUILD STONEWORKS" << endl;
			cout << "BUILD A LUMBERMILL" << endl;
			cout << "BUILD ARMORY" << endl;
			selection_color();
			cout << "BUILD BARRACKS";
			default_color();
			cout << endl;
			drawLine(iOptionsDashSize);
			cout << "BACK" << endl;
			break;
		case 9:
			cout << "BUILD A HOUSE" << endl;
			cout << "BUILD A STORAGE" << endl;
			cout << "BUILD A MONUMENT" << endl;
			cout << "BUILD A FARM" << endl;
			cout << "BUILD STONEWORKS" << endl;
			cout << "BUILD A LUMBERMILL" << endl;
			cout << "BUILD ARMORY" << endl;
			cout << "BUILD BARRACKS" << endl;
			drawLine(iOptionsDashSize);
			selection_color();
			cout << "BACK";
			default_color();
			cout << endl;
		default:
			break;
		}

		input = _getch();
		switch (input)
		{
		case KEY_ARROWUP:
			selection--;
			break;
		case KEY_ARROWDOWN:
			selection++;
			break;
		case KEY_ENTER:
			switch (selection)
			{
			case 1:
				if (iWood >= iHouseWoodRequire || iStone >= iHouseStoneRequire) {

				}
				else {
					Clear();
					cout << "NOT ENOUGH MATERIALS" << endl;
					Sleep(1000);
					Clear();
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				return;
			default:
				break;
			}
			break;
		}

		if (selection > 9) {
			selection = 1;
		}
		else if (selection < 1) {
			selection = 9;
		}

	}
	
}

void cProduction() {
	cout << "this is production\n";
}

void cWorkers() {
	cout << "this is workers\n";
}

void cArmy() {
	cout << "this is army\n";
}

void cWorld() {
	cout << "this is world\n";
}

void c() {

}