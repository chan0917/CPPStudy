#include <iostream>
#include <cstringt.h>
#include "Car.h"
using namespace std;

void Car::InitMembers(char* ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
	}
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}


//int Main()
//{
//	Car run99;
//	char C_name;
//	cout << "차 이름: ";
//	cin >> C_name;
//	run99.InitMembers(&C_name, 100);
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//eese}
//inline 함수는 헤더파일에 넣기