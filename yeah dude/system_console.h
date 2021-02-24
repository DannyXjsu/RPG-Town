#pragma once
#include <iostream>

void Clear() {
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}
void Pause() {
	#ifdef _WIN32
	system("pause");
	#else
	system("read - p 'Press any key to resume ...'");
	#endif
}