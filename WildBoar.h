#pragma once
#include "Monster.h"
class FWildBoar :public FMonster
{
public:
	FWildBoar();
	virtual ~FWildBoar();
	virtual void Move(int X, int Y) override;
	virtual void ShowName() override;
	virtual int GetType() override;
};

