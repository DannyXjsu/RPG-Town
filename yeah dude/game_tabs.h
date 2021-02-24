#pragma once
#include <iostream>
#include <conio.h>
#include "game_variables.h"
#include "system_console.h"

using namespace std;

void cQuests() {
	cout << "No quests available yet\n";
}

void cTown() {
	selection = 1;
	while (true){
	Clear();
	cout << "|Populaton: " << iPopulation << "|Army: " << iArmy << "/" << iArmyMax << "|Food: " << iFood << "|" <<endl;
	drawLine(iScreenSize);
	cout << "Utility" << endl;
	drawLine(iScreenSize);
	cout << "House:" << endl;
	cout << "Total: " << shHouse << endl;
	cout << "Requirements: "<< 200 << " Wood | " << 200 << " Stones" << endl;
	drawLine(iScreenSize);

	switch (selection)
	{
	case 1:
		selection_color();
		cout << "BUILD A HOUSE" << endl;
		default_color();
		cout << "BUILD A STORAGE" << endl;
		cout << "BUILD A MONUMENT" << endl;
		cout << "BUILD A FARM" << endl;
		cout << "BUILD STONEWORKS" << endl;
		cout << "BUILD A LUMBERMILL" << endl;
		cout << "BUILD ARMORY" << endl;
		cout << "BUILD BARRACKS" << endl;
		drawLine(iOptionsDashSize);
		cout << endl << "BACK" << endl;
		break;
	case 2:
		cout << "BUILD A HOUSE" << endl;
		selection_color();
		cout << "BUILD A STORAGE" << endl;
		default_color();
		cout << "BUILD A MONUMENT" << endl;
		cout << "BUILD A FARM" << endl;
		cout << "BUILD STONEWORKS" << endl;
		cout << "BUILD A LUMBERMILL" << endl;
		cout << "BUILD ARMORY" << endl;
		cout << "BUILD BARRACKS" << endl;
		drawLine(iOptionsDashSize);
		cout << endl << "BACK" << endl;
		break;
	case 3:
		cout << "BUILD A HOUSE" << endl;
		cout << "BUILD A STORAGE" << endl;
		selection_color();
		cout << "BUILD A MONUMENT" << endl;
		default_color();
		cout << "BUILD A FARM" << endl;
		cout << "BUILD STONEWORKS" << endl;
		cout << "BUILD A LUMBERMILL" << endl;
		cout << "BUILD ARMORY" << endl;
		cout << "BUILD BARRACKS" << endl;
		drawLine(iOptionsDashSize);
		cout << endl << "BACK" << endl;
		break;
	case 4:
		cout << "BUILD A HOUSE" << endl;
		cout << "BUILD A STORAGE" << endl;
		cout << "BUILD A MONUMENT" << endl;
		selection_color();
		cout << "BUILD A FARM" << endl;
		default_color();
		cout << "BUILD STONEWORKS" << endl;
		cout << "BUILD A LUMBERMILL" << endl;
		cout << "BUILD ARMORY" << endl;
		cout << "BUILD BARRACKS" << endl;
		drawLine(iOptionsDashSize);
		cout << endl << "BACK" << endl;
		break;
	case 5:
		cout << "BUILD A HOUSE" << endl;
		cout << "BUILD A STORAGE" << endl;
		cout << "BUILD A MONUMENT" << endl;
		cout << "BUILD A FARM" << endl;
		selection_color();
		cout << "BUILD STONEWORKS" << endl;
		default_color();
		cout << "BUILD A LUMBERMILL" << endl;
		cout << "BUILD ARMORY" << endl;
		cout << "BUILD BARRACKS" << endl;
		drawLine(iOptionsDashSize);
		cout << endl << "BACK" << endl;
		break;
	case 6:
		cout << "BUILD A HOUSE" << endl;
		cout << "BUILD A STORAGE" << endl;
		cout << "BUILD A MONUMENT" << endl;
		cout << "BUILD A FARM" << endl;
		cout << "BUILD STONEWORKS" << endl;
		selection_color();
		cout << "BUILD A LUMBERMILL" << endl;
		default_color();
		cout << "BUILD ARMORY" << endl;
		cout << "BUILD BARRACKS" << endl;
		drawLine(iOptionsDashSize);
		cout << endl << "BACK" << endl;
		break;
	case 7:
		cout << "BUILD A HOUSE" << endl;
		cout << "BUILD A STORAGE" << endl;
		cout << "BUILD A MONUMENT" << endl;
		cout << "BUILD A FARM" << endl;
		cout << "BUILD STONEWORKS" << endl;
		cout << "BUILD A LUMBERMILL" << endl;
		selection_color();
		cout << "BUILD ARMORY" << endl;
		default_color();
		cout << "BUILD BARRACKS" << endl;
		drawLine(iOptionsDashSize);
		cout << endl << "BACK" << endl;
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
		cout << "BUILD BARRACKS" << endl;
		default_color();
		drawLine(iOptionsDashSize);
		cout << endl << "BACK" << endl;
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
		cout << endl << "BACK" << endl;
		default_color();
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