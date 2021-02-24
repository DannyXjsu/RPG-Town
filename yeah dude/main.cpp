#include <iostream>
#include <fstream>
#include <conio.h>

#include "system_console.h"
#include "system_color.h"
#include "function_line.h"
#include "game_tabs.h"
#include "game_variables.h"
#include "game_save.h"
#include "game_functions.h"

using namespace std;

int main() {
	// I don't remember why i did this, i probably had some issue and had to make the menu options into variables
	const string sQuests = "QUESTS";
	const string sTown = "TOWN";
	const string sProduction = "PRODUCTION";
	const string sWorkers = "WORKERS";
	const string sArmy = "ARMY";
	const string sWorld = "WORLD";
	const string sQuestion = "?";
	start: //used for goto
	while (true) {
		SaveGame();
		if (selection > 8) {
			selection = 1;
		}
		else if (selection < 1) {
			selection = 8;
		}

		Clear();
		cout << "|RPG Town|";
		TownStatus();
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
			//i didn't find a better way of doing this wihout using goto
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
		case 8:
			if (ExitGame() == 1) {
				return 1;
			}
			else {
				selection = 1;
				Clear();
			}
			goto start;
			break;
		default:
			break;
		}
		drawLine(iScreenSize);
		//This draws the menu options depending on what selection you have
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
			drawLine(iOptionsDashSize);
			cout << "EXIT" << endl;
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
			drawLine(iOptionsDashSize);
			cout << "EXIT" << endl;
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
			drawLine(iOptionsDashSize);
			cout << "EXIT" << endl;
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
			drawLine(iOptionsDashSize);
			cout << "EXIT" << endl;
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
			drawLine(iOptionsDashSize);
			cout << "EXIT" << endl;
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
			drawLine(iOptionsDashSize);
			cout << "EXIT" << endl;
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
			drawLine(iOptionsDashSize);
			cout << "EXIT" << endl;
			break;
		case 8:
			cout << sQuests << endl;
			cout << sTown << endl;
			cout << sProduction << endl;
			cout << sWorkers << endl;
			cout << sArmy << endl;
			cout << sWorld << endl;
			cout << sQuestion << endl;
			drawLine(iOptionsDashSize);
			selection_color();
			cout << "EXIT" << endl;
			default_color();
		default:
			break;
		}
		//checks the user input, arrows move around the selection and enter checks what selection you had, plus is a debug key
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
			bHouseUnlocked++;
		}
	}
	return 1;
}