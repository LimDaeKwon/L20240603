#pragma once
#include "Charactor.h"
class FPlayer;
class FMonster : public FCharactor
{
public:
	FMonster();
	virtual ~FMonster();
	virtual void Move(int X, int Y) override;
	virtual void ShowName() override;
	void Attack(FPlayer* Player);
	virtual int GetType() override;
};

