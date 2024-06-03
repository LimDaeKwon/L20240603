#include "Monster.h"
#include "Vector.h"
#include "Player.h"
#include <iostream>
FMonster::FMonster()
{
	int X = rand() % 8 + 1;
	int Y = rand() % 8 + 1;

	SetVector(X, Y);
}

FMonster::~FMonster()
{

}

void FMonster::Move(int X, int Y)
{
	std::cout << "���Ͱ� " << std::endl;
	FCharactor::Move(X, Y);
}

void FMonster::ShowName()
{
	std::cout << "���� :  ";
}

void FMonster::Attack(FPlayer* Player)
{
	Player->TakeDamage(Damage);
}

int FMonster::GetType()
{
	return 0;
}
