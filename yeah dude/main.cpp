#include <iostream>
#include <fstream>

#include "color-console/color.hpp"

#ifdef _WIN32 //checks if windows is running
#include <conio.h>
#else
#include <curses.h> //used for linux
#endif

#include "system_console.h"
#include "system_color.h"
#include "function_line.h"
#include "game_tabs.h"
#include "game_save_load.h"
#include "game_variables.h"
#include "game_functions.h"

int main() {

#ifndef _WIN32
	initscr(); //if this doesn't work comment it out
	cbreak();
	noecho();
#endif

	//loading save file
	LoadGame();

start: //used for goto

	// I don't remember why i did this, i probably had some issue and had to make the menu options into variables
	const string sQuests = "QUESTS";
	const string sTown = "TOWN";
	const string sProduction = "PRODUCTION";
	const string sWorkers = "WORKERS";
	const string sArmy = "ARMY";
	const string sWorld = "WORLD";

	while (true) {
		//saves the game every time it loops
		SaveGame();
		//updates the population every time it loops
		UpdatePopulation();
		UpdateWorkers();

		if (selection > OptionsSize) {
			selection = 1;
		}
		else if (selection < 1) {
			selection = OptionsSize;
		}

		Clear();
		std::cout << "|RPG Town|";
		TownStatus();
		drawLine(iScreenSize);
		//checks what you have selected
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
			Clear();
			selected = 1;
			goto start;
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
			if (ResetGameMenu() == 1) {
				ResetGame();
				goto start;
			}
			else {
				selection = 1;
				Clear();
			}
			goto start;
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
		#ifdef _WIN32
		switch (selection)
		{
		case 1:
			std::cout << dye::on_white(sQuests) << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 2:
			std::cout << sQuests << endl;
			std::cout << dye::on_white(sTown) << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 3:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << dye::on_white(sProduction) << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 4:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << dye::on_white(sWorkers) << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 5:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << dye::on_white(sArmy) << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 6:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << dye::on_white(sWorld) << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 7:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << dye::on_white("RESET GAME") << endl;
			std::cout << "EXIT" << endl;
			break;
		case 8:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << dye::on_white("EXIT") << endl;
			break;
		default:
			break;
		}
		#else
		switch (selection)
		{
		case 1:
			std::cout << ">" << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 2:
			std::cout << sQuests << endl;
			std::cout << ">" << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 3:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << ">" << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 4:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << ">" << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 5:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << ">" << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 6:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << ">" << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 7:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << ">" << "RESET GAME" << endl;
			std::cout << "EXIT" << endl;
			break;
		case 8:
			std::cout << sQuests << endl;
			std::cout << sTown << endl;
			std::cout << sProduction << endl;
			std::cout << sWorkers << endl;
			std::cout << sArmy << endl;
			std::cout << sWorld << endl;
			drawLine(iOptionsDashSize);
			std::cout << "RESET GAME" << endl;
			std::cout << ">" << "EXIT" << endl;
			break;
		default:
			break;
		}
		#endif
		//checks the user input, arrows move around the selection and enter checks what selection you had, plus is a debug key
		#ifdef _WIN32
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
		}
		#else
		input = getch();
		switch (input)
		{
		case KEY_UP:
			selection--;
			break;
		case KEY_DOWN:
			selection++;
			break;
		case KEY_ENTER:
			selected = selection;
			break;
		/*case KEY_PLUS:
			iPopulation++;
			iArmy += 2;
			iFood += 3;
			bHouseUnlocked++;*/
		}
		#endif
	}
	return 1;
}
