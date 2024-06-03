#include "World.h"
#include "Charactor.h"
#include "Slime.h"
#include "Goblin.h"
#include "WildBoar.h"
#include "Player.h"
#include <iostream>
using namespace std;

FWorld::FWorld()
{
	int NumberOfGoblin = (rand() % 3) + 1;
	int NumberOfSlime = (rand() % 3) + 1;
	int NumberOfWildBoar = (rand() % 3) + 1;

	Actors.push_back(new FPlayer());

	for (int Index = 0; Index < NumberOfGoblin; ++Index)
	{
		Actors.push_back(new FGoblin());
	}
	for (int Index = 0; Index < NumberOfSlime; ++Index)
	{
		Actors.push_back(new FSlime());
	}
	for (int Index = 0; Index < NumberOfWildBoar; ++Index)
	{
		Actors.push_back(new FWildBoar());
	}

	//이렇게 해도 되지만 type으로 나눠서 if 써서 Actors.push_back(new FWildBoar()); , 슬 , 멧 넣기.


}
FWorld::~FWorld()
{
	//각각의 내용물 만 지운거야.
	for (int Index = 0; Index < Actors.size(); ++Index)
	{
		delete Actors[Index];
	}
	//포인터도 지워줘야지.
	Actors.clear();

	//for (FActor* Actor : Actors) 위에꺼랑 똑같음 . 범위기반 for문.
	//{
	//	delete Actors;
	//}

	//for (auto Actor : Actors) 위에꺼랑 똑같음 . 더 간단하게 Actors의 형 맞춰서 해줌 범위기반 for문.
	//{
	//	delete Actors;
	//}

}
void FWorld::BeginPlay()
{

}

void FWorld::Input()
{
	int X;
	int Y;
	cout << "플레이어를 어디로 이동 할까요?" << endl;
	cin >> X;
	cin >> Y;
	Map[Actors[0]->GetVector().GetX()][Actors[0]->GetVector().GetY()] = FLOOR;
	Actors[0]->Move(X, Y);
	UpdateMap();
}

void FWorld::Render()
{
	system("cls");
	
	cout << "   플레이어의 위치   " << endl <<endl;
	Actors[0]->ShowName();
	Actors[0]->GetVector().ShowVector();
	cout << "   몬스터 들의 위치   " << endl << endl;
	for (int i = 1; i < Actors.size(); ++i)
	{
		Actors[i]->ShowName();
		Actors[i]->GetVector().ShowVector();
	}
	
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			switch (Map[Y][X])
			{
			case FLOOR:
				cout << " ";
				break;
			case WALL:
				cout << "*";
				break;
			case PLAYER:
				cout << "P";
				break;
			case GOBLIN:
				cout << "G";
				break;
			case SLIME:
				cout << "S";
				break;
			case WILDBOAR:
				cout << "W";
				break;
			default:
				break;
			}
		}
		cout << endl;
	}
}

void FWorld::UpdateMap()
{
	for (int i = 0; i < Actors.size(); ++i)
	{
		switch (Actors[i]->GetType())
		{
		case FLOOR:
			cout << " ";
			break;
		case WALL:
			cout << "*";
			break;
		case PLAYER:
			Map[Actors[i]->GetVector().GetX()][Actors[i]->GetVector().GetY()] = PLAYER;
			break;
		case GOBLIN:
			Map[Actors[i]->GetVector().GetX()][Actors[i]->GetVector().GetY()] = GOBLIN;
			break;
		case SLIME:
			Map[Actors[i]->GetVector().GetX()][Actors[i]->GetVector().GetY()] = SLIME;
			break;
		case WILDBOAR:
			Map[Actors[i]->GetVector().GetX()][Actors[i]->GetVector().GetY()] = WILDBOAR;
			break;
		default:
			break;
		}
	}
}

void FWorld::Restart()
{
}


void FWorld::Turn(int X , int Y)
{
	////플레이어 이동 공격
	//Actors[0]->Move(X, Y);
	////몬스터가 범위안에 들어온다면
	//for (auto Actor : Actors)
	//{
	//	Actor->Move(X, Y); // 재정의 하자.
	//}

	/*dynamic_cast<FPlayer*>(Actors[0])->Attack(dynamic_cast<FMonster*>(Actors[1]));
	dynamic_cast<FMonster*>(Actors[1])->TakeDamage(dynamic_cast<FPlayer*>(Actors[0])->GetDamage());*/

	
	//몬스터들 이동 공격

}
//1. * *입력(Input) * *:
//2. * *처리(Process / Tick) * *:
//3. * *렌더(Render) * *: