#pragma once
#include "Vector.h" // 구조체 같은거를 초기화 해야하니까 전방선언이 아닌 인클루드를 해줘야한다.

class FCharactor
{
public:
	
	FCharactor();
	virtual ~FCharactor();
	virtual void Move(int X, int Y);
	void SetHP(int NewHP);
	inline int GetHP() { return HP; }
	inline int GetDamage() { return Damage; }
	void TakeDamage(int Damage);
	virtual void ShowName();
	virtual int GetType();
	FVector GetVector() { return ActorVector; }
	void SetVector(int ,int);

protected:
	FVector ActorVector;
	int HP;
	int Damage;
	bool Die();
};

