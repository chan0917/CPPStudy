#include <iostream>
#include "Chapter3.h"
using namespace std;


struct C3::Car
{
#define MAX_SPD	200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

	char userID[20];
	int  fuelGauge;
	int curSpeed;

	void ShowCarState()
	{
		cout << "����ID: " << userID << endl;
		cout << "���ᷮ: " << fuelGauge << endl;
		cout << "����ӵ�: " << curSpeed << endl;
	}

	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else  
			fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;

	}

	void Breaking()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= BRK_STEP;
	}
}Car;