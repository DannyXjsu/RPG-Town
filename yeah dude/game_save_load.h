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
	saveFile << shBarracks << endl;
	saveFile << iHouseWoodRequire << endl;
	saveFile << iHouseStoneRequire << endl;
	saveFile << iStorageBricksRequire << endl;
	saveFile << iStorageBoardsRequire << endl;
	saveFile << iMonumentBricksRequire << endl;
	saveFile << iMonumentBoardsRequire << endl;
	saveFile << iFarmWoodRequire << endl;
	saveFile << iStoneworksStoneRequire << endl;
	saveFile << iLumbermillWoodRequire << endl;
	saveFile << iArmoryLeatherRequire << endl;
	saveFile << iArmoryStoneRequire << endl;
	saveFile << iBarracksBricksRequire << endl;
	saveFile << iBarracksBoardsRequire << endl;
	saveFile << bHouseUnlocked << endl;
	saveFile << bStorageUnlocked << endl;
	saveFile << bMomumentUnlocked << endl;
	saveFile << bFarmUnlocked << endl;
	saveFile << bStoneworksUnlocked << endl;
	saveFile << bLumbermillUnlocked << endl;
	saveFile << bArmoryUnlocked << endl;
	saveFile << bBarracksUnlocked;
	saveFile.close();
}
void LoadGame() {
	ifstream saveFile("autosave.save");
	saveFile >> iPopulation;
	saveFile >> iFood;
	saveFile >> iArmyMax;
	saveFile >> iArmy;
	saveFile >> iWorkers;
	saveFile >> iFreeWorkers;
	saveFile >> iWood;
	saveFile >> iStone;
	saveFile >> iLeather;
	saveFile >> iBoards;
	saveFile >> iArmor;
	saveFile >> iBricks;
	saveFile >> shHouse;
	saveFile >> shStorage;
	saveFile >> shMonument;
	saveFile >> shFarm;
	saveFile >> shStonework;
	saveFile >> shLumbermill;
	saveFile >> shArmory;
	saveFile >> shBarracks;
	saveFile >> iHouseWoodRequire;
	saveFile >> iHouseStoneRequire;
	saveFile >> iStorageBricksRequire;
	saveFile >> iStorageBoardsRequire;
	saveFile >> iMonumentBricksRequire;
	saveFile >> iMonumentBoardsRequire;
	saveFile >> iFarmWoodRequire;
	saveFile >> iStoneworksStoneRequire;
	saveFile >> iLumbermillWoodRequire;
	saveFile >> iArmoryLeatherRequire;
	saveFile >> iArmoryStoneRequire;
	saveFile >> iBarracksBricksRequire;
	saveFile >> iBarracksBoardsRequire;
	saveFile >> bHouseUnlocked;
	saveFile >> bStorageUnlocked;
	saveFile >> bMomumentUnlocked;
	saveFile >> bFarmUnlocked;
	saveFile >> bStoneworksUnlocked;
	saveFile >> bLumbermillUnlocked;
	saveFile >> bArmoryUnlocked;
	saveFile >> bBarracksUnlocked;
	saveFile.close();
}