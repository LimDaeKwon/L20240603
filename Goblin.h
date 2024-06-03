#pragma once
#include "Monster.h"
class FGoblin : public FMonster
{
public:
	FGoblin();
	virtual ~FGoblin();
	virtual void Move(int X, int Y) override;
	virtual void ShowName() override;
	virtual int GetType() override;

};

