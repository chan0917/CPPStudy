#include <iostream>
#include "Chapter2.h"
using namespace std;

void C2::T_1_1(int& num)
{
	num += 1;
	cout << num << endl;
}

void C2::T_1_2(int& num)
{
	num *= -1;
	cout << num << endl << endl;
}

void C2::T_1_3(int*(& num1), int* (&ref2)) //&num = �ּҰ� *�� �Է¹��� �ּҰ��� &num�� �����ϵ��� ��
{

	int* num = num1; // ���� ���� �ּҷ� num �ʱ�ȭ
	num1 = ref2;
	ref2 = num;
}

void C2::T_2()
{
	const int num = 12;
	const int* ptr = &num;
	const int* (&ref) = ptr;
	cout << *ptr << endl;
	cout << *ref << endl << endl;

}

void C2::T_3()
{
	//need to learn more Structer, Object, and Point
}