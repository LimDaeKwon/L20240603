#include "Slime.h"
#include <iostream>
FSlime::FSlime()
{
}

FSlime::~FSlime()
{
}

void FSlime::Move(int X, int Y)
{
	std::cout << "슬라임이 " << std::endl;
	FMonster::Move(X, Y);
}

void FSlime::ShowName()
{
	std::cout << "슬라임 : ";
}

int FSlime::GetType()
{
	return 4;
}
