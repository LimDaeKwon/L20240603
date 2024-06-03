#include "Engine.h"
#include <conio.h>
#include "Actor.h"
UEngine::UEngine()
{
	IsRunning = true;
	//포인터는 어차피 널이니까 초기화 할 필요 없다.
}

UEngine::~UEngine()
{
}

void UEngine::Run()
{
	while (IsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

void UEngine::SpawnActor(AActor* NewActor)
{
	Actors.push_back(NewActor);
}

void UEngine::Input()
{
	//입력 받는 작업
	_getch();
}

void UEngine::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}

void UEngine::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}
