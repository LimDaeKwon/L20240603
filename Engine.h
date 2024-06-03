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
protected: // 엔진에서 나는 이걸 한적이 없다 -> 엔진이 자동으로 해줌 -> 프로텍티드로 묶어줌.
	void Input();
	void Tick();
	void Render();

};

