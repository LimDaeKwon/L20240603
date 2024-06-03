#include "Vector.h"
#include <iostream>
FVector::FVector() : X(0) ,Y(0)
{
}

FVector::~FVector()
{
}

void FVector::SetVector(int NewX, int NewY)
{
	if ((NewX >= 0 && NewX < 10) && (NewY >= 0 && NewY < 10))
	{
		X = NewX;
		Y = NewY;
	}
}

void FVector::ShowVector()
{
	std::cout << " X :  " << X << "   Y :  " << Y << std::endl;
}
