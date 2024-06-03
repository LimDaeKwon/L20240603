#pragma once
#include"Charactor.h"
class FMonster;

class FPlayer : public FCharactor
{
public:
	FPlayer();
	virtual ~FPlayer();
	virtual void Move(int X, int Y) override;
	void Attack(FMonster* Monster);
	virtual void ShowName() override;
	virtual int GetType() override;
};

