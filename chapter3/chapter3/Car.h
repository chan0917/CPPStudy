#pragma once

namespace CAR_CONST
{
	enum 
	{
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2, ACC_STEP = 10, BRK_STEP =10
	};
}

class Car //struct�� ����ؼ� class������ �߰��Ǿ���.
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

public:
	void InitMembers(char* ID, int fuel); //class �ȿ� ����� ������ �ʱ�ȭ, ������ ��� private�̿��� main�Լ� ������ ������ �Ұ������� �� �Լ��� ���� Ŭ�������� ���ǵ�
	void ShowCarState();
	void Accel();
	void Break();
};