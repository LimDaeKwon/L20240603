#include "Actor.h"
#include <iostream>
AActor::AActor()
{
	X = 0;
	Y = 0;
	Shape = ' ';
}

AActor::AActor(int NewX, int NewY, char NewShape)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
}

AActor::~AActor()
{
}

void AActor::Tick()
{

}

void AActor::Render()
{
	std::cout << Shape;
}
