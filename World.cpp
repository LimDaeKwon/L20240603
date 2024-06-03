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

	//�̷��� �ص� ������ type���� ������ if �Ἥ Actors.push_back(new FWildBoar()); , �� , �� �ֱ�.


}
FWorld::~FWorld()
{
	//������ ���빰 �� ����ž�.
	for (int Index = 0; Index < Actors.size(); ++Index)
	{
		delete Actors[Index];
	}
	//�����͵� ���������.
	Actors.clear();

	//for (FActor* Actor : Actors) �������� �Ȱ��� . ������� for��.
	//{
	//	delete Actors;
	//}

	//for (auto Actor : Actors) �������� �Ȱ��� . �� �����ϰ� Actors�� �� ���缭 ���� ������� for��.
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
	cout << "�÷��̾ ���� �̵� �ұ��?" << endl;
	cin >> X;
	cin >> Y;
	Map[Actors[0]->GetVector().GetX()][Actors[0]->GetVector().GetY()] = FLOOR;
	Actors[0]->Move(X, Y);
	UpdateMap();
}

void FWorld::Render()
{
	system("cls");
	
	cout << "   �÷��̾��� ��ġ   " << endl <<endl;
	Actors[0]->ShowName();
	Actors[0]->GetVector().ShowVector();
	cout << "   ���� ���� ��ġ   " << endl << endl;
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
	////�÷��̾� �̵� ����
	//Actors[0]->Move(X, Y);
	////���Ͱ� �����ȿ� ���´ٸ�
	//for (auto Actor : Actors)
	//{
	//	Actor->Move(X, Y); // ������ ����.
	//}

	/*dynamic_cast<FPlayer*>(Actors[0])->Attack(dynamic_cast<FMonster*>(Actors[1]));
	dynamic_cast<FMonster*>(Actors[1])->TakeDamage(dynamic_cast<FPlayer*>(Actors[0])->GetDamage());*/

	
	//���͵� �̵� ����

}
//1. * *�Է�(Input) * *:
//2. * *ó��(Process / Tick) * *:
//3. * *����(Render) * *: