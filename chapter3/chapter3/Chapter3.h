#include <iostream>
#pragma once
using namespace std;

class C3
{
	public:
		struct Car
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
				cout << "유저ID: " << userID << endl;
				cout << "연료량: " << fuelGauge << endl;
				cout << "현재속도: " << curSpeed << endl;
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
		};
		void A();

		struct T1_Point 
		{
			int xpos;
			int ypos;

			void MovePos(int x, int y)
			{
				xpos += x;
				ypos += y;
			}

			void ShowPosition()
			{
				cout << xpos << ", " << ypos << endl << endl;
			}
		};
		void T1();
};