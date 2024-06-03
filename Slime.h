#pragma once
#include "Monster.h"
class FSlime : public FMonster
{
public:
	FSlime();
	virtual ~FSlime();
	virtual void Move(int X, int Y) override;
	virtual void ShowName() override;
	virtual int GetType() override;
};

