#pragma once
#include <iostream>
void drawLine(int input)//Puts '-' with the given amount of dashes
{
	int maxDash = input;
	int dashAmount = 1;
	while (dashAmount <= maxDash)
	{
		std::cout << "-";
		dashAmount++;
	}
}