#pragma once
#include "Vector.h" // ����ü �����Ÿ� �ʱ�ȭ �ؾ��ϴϱ� ���漱���� �ƴ� ��Ŭ��带 ������Ѵ�.

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

