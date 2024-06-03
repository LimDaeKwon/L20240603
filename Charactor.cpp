#include "Charactor.h"
#include "Vector.h"
#include "Monster.h"
#include <iostream>
FCharactor::FCharactor() : HP(100), Damage(20)
{
}

FCharactor::~FCharactor()
{

}

void FCharactor::Move(int X, int Y)
{
	std::cout << "이동한다" << std::endl;
	ActorVector.SetVector(X, Y);
}

void FCharactor::SetHP(int NewHP)
{
	this->HP = NewHP;
}


void FCharactor::TakeDamage(int NewDamage)
{
	if (this->HP - NewDamage <= 0) Die();
	else SetHP(this->HP - NewDamage);
}

void FCharactor::ShowName()
{
}

int FCharactor::GetType()
{
	return 0;
}

void FCharactor::SetVector(int X , int Y)
{
	ActorVector.SetVector(X, Y);
}



bool FCharactor::Die()
{
	return false;
}
