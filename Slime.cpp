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
	std::cout << "�������� " << std::endl;
	FMonster::Move(X, Y);
}

void FSlime::ShowName()
{
	std::cout << "������ : ";
}

int FSlime::GetType()
{
	return 4;
}
