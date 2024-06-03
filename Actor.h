#pragma once
class AActor
{
public:
	AActor();
	AActor(int NewX , int NewY , char NewShape);
	virtual ~AActor();

	int X;
	int Y;

	char Shape;

	virtual void Tick();
	virtual void Render(); // 원래는 없지만 있다고 가정하고 하자.
};

