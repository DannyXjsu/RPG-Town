#pragma once
#include <iostream>

void Clear() {
	#ifdef _WIN32
	system("cls");
	#else
	system("read - p \"Press any key to resume ...\"");
	#endif

}
void Pause() {
	system("pause");
}