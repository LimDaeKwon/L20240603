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
	std::cout << "¸äµÅÁö°¡ " << std::endl;
	FMonster::Move(X, Y);
}

void FWildBoar::ShowName()
{
	std::cout << "¸äµÅÁö : ";
}

int FWildBoar::GetType()
{
	return 5;
}
