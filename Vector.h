#pragma once
class FVector
{
public:
	FVector();
	virtual ~FVector();
	void SetVector(int X, int Y);
	void ShowVector();
	inline int GetX() { return X; }
	inline int GetY() { return Y; }
protected:
	int X;
	int Y;
};

