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

void C2::T_1_3(int*(& num1), int* (&ref2)) //&num = 주소값 *로 입력받은 주소값을 &num이 참조하도록 함
{

	int* num = num1; // 변수 값의 주소로 num 초기화
	num1 = ref2;
	ref2 = num;
}