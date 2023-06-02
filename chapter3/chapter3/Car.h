#pragma once
#ifndef __CAR_H__
namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2, ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car //struct를 대신해서 class선언이 추가되었다.
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

public:
	void InitMembers(char* ID, int fuel); //class 안에 선언된 변수의 초기화, 변수가 모두 private이여서 main함수 에서는 접근이 불가하지만 이 함수는 같은 클레스에서 정의됨
	void ShowCarState();
	void Accel();
	void Break();
};

#endif // !__CAR_H__