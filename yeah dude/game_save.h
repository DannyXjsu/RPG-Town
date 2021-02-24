#pragma once
#include <fstream>
#include "game_variables.h"

using namespace std;

void SaveGame() {

	ofstream saveFile("autosave.save");
	saveFile << iPopulation << endl;
	saveFile << iFood << endl;
	saveFile << iArmyMax << endl;
	saveFile << iArmy << endl;
	saveFile << iWood << endl;
	saveFile << iStone << endl;
	saveFile << iLeather << endl;
	saveFile << iBoards << endl;
	saveFile << iArmor << endl;
	saveFile << iBricks << endl;
	saveFile << shHouse << endl;
	saveFile << shStorage << endl;
	saveFile << shMonument << endl;
	saveFile << shFarm << endl;
	saveFile << shStonework << endl;
	saveFile << shLumbermill << endl;
	saveFile << shArmory << endl;
	saveFile << shBarracks;
	saveFile.close();
}