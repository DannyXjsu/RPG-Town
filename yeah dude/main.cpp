#include <iostream>
#include <fstream>
#include <conio.h>

#include "system_console.h"
#include "system_color.h"
#include "function_line.h"
#include "game_tabs.h"
#include "game_variables.h"
#include "game_save.h"

using namespace std;

int main() {
	const string sQuests = "QUESTS";
	const string sTown = "TOWN";
	const string sProduction = "PRODUCTION";
	const string sWorkers = "WORKERS";
	const string sArmy = "ARMY";
	const string sWorld = "WORLD";
	const string sQuestion = "?";
	start:
	while (true) {
		SaveGame();
		if (selection > 7) {
			selection = 1;
		}
		else if (selection < 1) {
			selection = 7;
		}

		Clear();
		cout << "|RPG Town|" << endl;
		drawLine(iScreenSize);
		switch (selected)
		{
		case 1:
			cQuests();
			break;
		case 2:
			cTown();
			Clear();
			selected = 1;
			goto start;
			break;
		case 3:
			cProduction();
			break;
		case 4:
			cWorkers();
			break;
		case 5:
			cArmy();
			break;
		case 6:
			cWorld();
			break;
		case 7:
			c();
			break;
		default:
			break;
		}
		drawLine(iScreenSize);
		switch (selection)
		{
		case 1:
			selection_color();
			cout << sQuests << endl;
			default_color();
			cout << sTown << endl;
			cout << sProduction << endl;
			cout << sWorkers << endl;
			cout << sArmy << endl;
			cout << sWorld << endl;
			cout << sQuestion << endl;
			break;
		case 2:
			cout << sQuests << endl;
			selection_color();
			cout << sTown << endl;
			default_color();
			cout << sProduction << endl;
			cout << sWorkers << endl;
			cout << sArmy << endl;
			cout << sWorld << endl;
			cout << sQuestion << endl;
			break;
		case 3:
			cout << sQuests << endl;
			cout << sTown << endl;
			selection_color();
			cout << sProduction << endl;
			default_color();
			cout << sWorkers << endl;
			cout << sArmy << endl;
			cout << sWorld << endl;
			cout << sQuestion << endl;
			break;
		case 4:
			cout << sQuests << endl;
			cout << sTown << endl;
			cout << sProduction << endl;
			selection_color();
			cout << sWorkers << endl;
			default_color();
			cout << sArmy << endl;
			cout << sWorld << endl;
			cout << sQuestion << endl;
			break;
		case 5:
			cout << sQuests << endl;
			cout << sTown << endl;
			cout << sProduction << endl;
			cout << sWorkers << endl;
			selection_color();
			cout << sArmy << endl;
			default_color();
			cout << sWorld << endl;
			cout << sQuestion << endl;
			break;
		case 6:
			cout << sQuests << endl;
			cout << sTown << endl;
			cout << sProduction << endl;
			cout << sWorkers << endl;
			cout << sArmy << endl;
			selection_color();
			cout << sWorld << endl;
			default_color();
			cout << sQuestion << endl;
			break;
		case 7:
			cout << sQuests << endl;
			cout << sTown << endl;
			cout << sProduction << endl;
			cout << sWorkers << endl;
			cout << sArmy << endl;
			cout << sWorld << endl;
			selection_color();
			cout << sQuestion << endl;
			default_color();
			break;
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
			selected = selection;
			break;
		case KEY_PLUS:
			iPopulation++;
			iArmy += 2;
			iFood += 3;
		}
	}
}