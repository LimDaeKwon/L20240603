#pragma once
#include<vector>
using namespace std;
class FCharactor;

enum MapType
{
	FLOOR ,
	WALL ,
	PLAYER ,
	GOBLIN ,
	SLIME ,
	WILDBOAR
};

class FWorld
{
public:
	FWorld();
	virtual ~FWorld();
	
	void BeginPlay();
	void Input();
	void Render();
	void UpdateMap();

	void Restart();
	void Turn(int X, int Y);

protected:
	vector<FCharactor*> Actors;
	int Map[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};;

};

