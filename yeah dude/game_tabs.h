#pragma once
#include <iostream>

#ifdef _WIN32
#include <conio.h>
#else
#include <curses.h>
#endif

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
		//this bunch of if statements just draw a list of possible buildins you can do
		if (bHouseUnlocked == true) {
			cout << "HOUSE" << endl;
			cout << "Total: " << shHouse << endl;
			cout << "Requirements: " << iHouseWoodRequire << " Wood | " << iHouseStoneRequire << " Stones" << endl;
			cout << "You have: " << iWood << " Wood | " << iStone << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bStorageUnlocked == true) {
			cout << "STORAGE" << endl;
			cout << "Total: " << shStorage << endl;
			cout << "Requirements: " << iStorageBoardsRequire << " Boards | " << iStorageBricksRequire << " Bricks" << endl;
			cout << "You have: " << iBoards << " Boards | " << iBricks << " Bricks" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bMomumentUnlocked == true) {
			cout << "MONUMENT" << endl;
			cout << "Total: " << shMonument << endl;
			cout << "Requirements: " << iMonumentBoardsRequire << " Boards | " << iMonumentBricksRequire << " Bricks" << endl;
			cout << "You have: " << iBoards << " Boards | " << iBricks << " Bricks" << endl;
			drawLine(iScreenSize);
		}
		cout << "=======PRODUCTION=======" << endl;
		drawLine(iScreenSize);
		if (bFarmUnlocked == true) {
			cout << "FARM" << endl;
			cout << "Total: " << shFarm << endl;
			cout << "Requirements: " << iFarmWoodRequire << " Wood" << endl;
			cout << "You have: " << iWood << " Wood" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bStoneworksUnlocked == true) {
			cout << "STONEWORKS" << endl;
			cout << "Total: " << shStonework << endl;
			cout << "Requirements: " << iStoneworksStoneRequire << " Stones" << endl;
			cout << "You have: " << iStone << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bLumbermillUnlocked == true) {
			cout << "LUMBERMILL" << endl;
			cout << "Total: " << shLumbermill << endl;
			cout << "Requirements: " << iLumbermillWoodRequire << " Wood" << endl;
			cout << "You have: " << iWood << " Wood" << endl;
			drawLine(iScreenSize);
		}
		cout << "=========SERVICES=========" << endl;
		drawLine(iScreenSize);
		if (bArmoryUnlocked == true) {
			cout << "ARMORY" << endl;
			cout << "Total: " << shArmory << endl;
			cout << "Requirements: " << iArmoryLeatherRequire << " Leather | " << iArmoryStoneRequire << " Stones" << endl;
			cout << "You have: " << iLeather << " Leather | " << iStone << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bBarracksUnlocked == true) {
			cout << "BARRACKS" << endl;
			cout << "Total: " << shBarracks << endl;
			cout << "Requirements: " << iBarracksBoardsRequire << " Boards | " << iBarracksBricksRequire << " Bricks" << endl;
			cout << "You have: " << iBoards << " Boards | " << iBricks << " Bricks" << endl;
			drawLine(iScreenSize);
		}
		#ifdef _WIN32
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
				if (iWood >= iHouseWoodRequire && iStone >= iHouseStoneRequire) {
					iWood -= iHouseWoodRequire;
					iStone -= iHouseStoneRequire;
					shHouse++;
					UpdatePopulation();
					iHouseWoodRequire *= iMulti;

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
		#else
		switch (selection)
		{
		case 1:
			cout << ">" << "BUILD A HOUSE";
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
			cout << ">" << "BUILD A STORAGE";
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
			cout << ">" << "BUILD A MONUMENT";
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
			cout << ">" << "BUILD A FARM";
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
			cout << ">" << "BUILD STONEWORKS";
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
			cout << ">" << "BUILD A LUMBERMILL";
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
			cout << ">" << "BUILD ARMORY";
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
			cout << ">" << "BUILD BARRACKS";
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
			cout << ">" << "BACK";
			cout << endl;
		default:
			break;
		}

		input = getchar();
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
				if (iWood >= iHouseWoodRequire && iStone >= iHouseStoneRequire) {
					iWood -= iHouseWoodRequire;
					iStone -= iHouseStoneRequire;
					shHouse++;
					UpdatePopulation();
					iHouseWoodRequire *= iMulti;

				}
				else {
					Clear();
					cout << "NOT ENOUGH MATERIALS" << endl;
					sleep(1000);
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
		#endif

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
	selection = 1;
	while (true) {
		Clear();
		TownStatus();
		drawLine(iScreenSize);
		cout << "==========RESOURCES========" << endl;
		drawLine(iScreenSize);
		//this bunch of if statements just draw a list of possible buildins you can do
		if (bFarmUnlocked == true) {
			cout << "FARMER" << endl;
			cout << "Total: " << shFarm << endl;
			cout << "Requirements: " << iFarmWoodRequire << " Wood" << endl;
			cout << "You have: " << iWood << " Wood" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bStoneworksUnlocked == true) {
			cout << "LOGGER" << endl;
			cout << "Total: " << shStonework << endl;
			cout << "Requirements: " << iStoneworksStoneRequire << " Stones" << endl;
			cout << "You have: " << iStone << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bLumbermillUnlocked == true) {
			cout << "QUARRYMAN" << endl;
			cout << "Total: " << shLumbermill << endl;
			cout << "Requirements: " << iLumbermillWoodRequire << " Wood" << endl;
			cout << "You have: " << iWood << " Wood" << endl;
			drawLine(iScreenSize);
		}
		if (bArmoryUnlocked == true) {
			cout << "ANIMAL HUNTER" << endl;
			cout << "Total: " << shArmory << endl;
			cout << "Requirements: " << iArmoryLeatherRequire << " Leather | " << iArmoryStoneRequire << " Stones" << endl;
			cout << "You have: " << iLeather << " Leather | " << iStone << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		cout << "=========PRODUCTION========" << endl;
		drawLine(iScreenSize);
		if (bStoneworksUnlocked == true) {
			cout << "STONEMASON" << endl;
			cout << "Total: " << shStonework << endl;
			cout << "Requirements: " << iStoneworksStoneRequire << " Stones" << endl;
			cout << "You have: " << iStone << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		if (bLumbermillUnlocked == true) {
			cout << "WOODWORKER" << endl;
			cout << "Total: " << shLumbermill << endl;
			cout << "Requirements: " << iLumbermillWoodRequire << " Wood" << endl;
			cout << "You have: " << iWood << " Wood" << endl;
			drawLine(iScreenSize);
		}
		if (bArmoryUnlocked == true) {
			cout << "LEATHERWORKER" << endl;
			cout << "Total: " << shArmory << endl;
			cout << "Requirements: " << iArmoryLeatherRequire << " Leather | " << iArmoryStoneRequire << " Stones" << endl;
			cout << "You have: " << iLeather << " Leather | " << iStone << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		cout << "==========COMMONS==========" << endl;
		drawLine(iScreenSize);
		if (bArmoryUnlocked == true) {
			cout << "INSTRUCTOR" << endl;
			cout << "Total: " << shArmory << endl;
			cout << "Requirements: " << iArmoryLeatherRequire << " Leather | " << iArmoryStoneRequire << " Stones" << endl;
			cout << "You have: " << iLeather << " Leather | " << iStone << " Stones" << endl;
			drawLine(iOptionsDashSize);
		}
		#ifdef _WIN32
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
				if (iWood >= iHouseWoodRequire && iStone >= iHouseStoneRequire) {
					iWood -= iHouseWoodRequire;
					iStone -= iHouseStoneRequire;
					shHouse++;
					UpdatePopulation();
					iHouseWoodRequire *= iMulti;

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
		#else
		switch (selection)
		{
		case 1:
			cout << ">" << "BUILD A HOUSE";
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
			cout << ">" << "BUILD A STORAGE";
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
			cout << ">" << "BUILD A MONUMENT";
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
			cout << ">" << "BUILD A FARM";
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
			cout << ">" << "BUILD STONEWORKS";
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
			cout << ">" << "BUILD A LUMBERMILL";
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
			cout << ">" << "BUILD ARMORY";
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
			cout << ">" << "BUILD BARRACKS";
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
			cout << ">" << "BACK";
			cout << endl;
		default:
			break;
		}

		input = getch();
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
				if (iWood >= iHouseWoodRequire && iStone >= iHouseStoneRequire) {
					iWood -= iHouseWoodRequire;
					iStone -= iHouseStoneRequire;
					shHouse++;
					UpdatePopulation();
					iHouseWoodRequire *= iMulti;

				}
				else {
					Clear();
					cout << "NOT ENOUGH MATERIALS" << endl;
					sleep(1000);
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
		#endif

		if (selection > 9) {
			selection = 1;
		}
		else if (selection < 1) {
			selection = 9;
		}

	}

}


void cArmy() {
	cout << "this is army\n";
}

void cWorld() {
	cout << "this is world\n";
}

void c() {

}