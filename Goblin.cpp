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
	std::cout << "고블린이 " << std::endl;
	FMonster::Move(X, Y);
}

void FGoblin::ShowName()
{
	std::cout << "		고블린 : ";
}

int FGoblin::GetType()
{
	return 3;
}
