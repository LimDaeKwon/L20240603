#include "Goblin.h"
#include <iostream>
FGoblin::FGoblin()
{
}

FGoblin::~FGoblin()
{
}

void FGoblin::Move(int X, int Y)
{
	std::cout << "����� " << std::endl;
	FMonster::Move(X, Y);
}

void FGoblin::ShowName()
{
	std::cout << "		��� : ";
}

int FGoblin::GetType()
{
	return 3;
}
