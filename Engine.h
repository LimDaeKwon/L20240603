#pragma once
#include <vector>
using namespace std;
class AActor;

class UEngine
{
public:
	UEngine();
	virtual ~UEngine();
	void Run();
	void SpawnActor(AActor* NewActor);

//protected:
	vector<AActor*> Actors;
	bool IsRunning;
protected: // �������� ���� �̰� ������ ���� -> ������ �ڵ����� ���� -> ������Ƽ��� ������.
	void Input();
	void Tick();
	void Render();

};

