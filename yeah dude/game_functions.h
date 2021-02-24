#pragma once
#include <iostream>
#include "game_variables.h"

using namespace std;

void TownStatus() {
	cout << "|Populaton: " << iPopulation << "|Army: " << iArmy << "/" << iArmyMax << "|Food: " << iFood << "|" << endl;
}

int ExitGame() {
	selected = selection;
	selection = 2;
	while (true) {
		system("cls");
		cout << "---------------------------------------" << endl;
		cout << "|Are you sure you wanna quit the game?|" << endl;
		cout << "---------------------------------------" << endl;
		cout << "|";
		if (selection == 1) {
			selection_color();
			cout << "       YES        ";
			default_color();
			cout << "|";
			cout << "        NO        ";
			cout << "|" << endl;
		}
		else if (selection == 2) {
			cout << "       YES        ";
			cout << "|";
			selection_color();
			cout << "        NO        ";
			default_color();
			cout << "|" << endl;
		}
		cout << "---------------------------------------" << endl;
		input = _getch();
		switch (input)
		{
		case KEY_ARROWLEFT:
			selection--;
			break;
		case KEY_ARROWRIGHT:
			selection++;
			break;
		case KEY_ENTER:
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
}