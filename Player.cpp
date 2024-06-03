#include "Player.h"
#include "Vector.h"
#include "Monster.h"
#include <iostream>

FPlayer::FPlayer() 
{
}

FPlayer::~FPlayer()
{
}

void FPlayer::Move(int X, int Y)
{
	std::cout << "플레이어가 " << std::endl;
	FCharactor::Move(X,Y);
}

void FPlayer::Attack(FMonster* Monster)
{
	Monster->TakeDamage(Damage);
}

void FPlayer::ShowName()
{
	std::cout << "플레이어 :  ";
}

int FPlayer::GetType()
{
	return 2;
}


