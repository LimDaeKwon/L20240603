#include<iostream>
#include"World.h"
#include"Engine.h"
#include"Actor.h"
using namespace std;
int main()
{
	srand((unsigned int)time(nullptr));

	UEngine* MyEngine = new UEngine();

	MyEngine->SpawnActor(new AActor(1 , 1 , 'P'));
	MyEngine->Run();


	//FWorld MyWorld;
	////MyWorld.Turn(1,2);
	//while (true)
	//{
	//	MyWorld.Input();
	//	MyWorld.Render();
	//}
	//

	//return 0;
}

//1. * *입력(Input) * *:
//2. * *처리(Process / Tick) * *:
//3. * *렌더(Render) * *: