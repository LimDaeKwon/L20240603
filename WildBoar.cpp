#include "WildBoar.h"
#include <iostream>
FWildBoar::FWildBoar()
{
}

FWildBoar::~FWildBoar()
{
}

void FWildBoar::Move(int X, int Y)
{
	std::cout << "������� " << std::endl;
	FMonster::Move(X, Y);
}

void FWildBoar::ShowName()
{
	std::cout << "����� : ";
}

int FWildBoar::GetType()
{
	return 5;
}
