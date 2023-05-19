// Chapter2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Chapter2.h"
#define TRUE 1
#define FALSE 0 //true와 false는 1과 0이 아니다. 그저 '참'과 '거짓'을 표현하기위한 1바이트 크기의 데이터일 뿐이다 
using namespace std;


int main()
{
    C2 c2;
    std::cout << "Bool || Reference(1)";

    cout << "true: " << true << endl;

    //참조자 시작
    int num1 = 2000;
    int& num2 = num1;
    num2 = 1000;
    cout << &num1 << endl;
    cout << &num2 << endl;
    cout << num1 << endl << endl; //참조자는 변수에 별명을 하나 붙이는 것이다 

    cout << "Reference(2)" << endl;
    //참조자는 참조자를 대상으로 선언가능   변수에 대해서만 선언가능 | 나중에 참조 불가능 | NULL초기화 불가능 

    int arr[3] = { 1,3,5 };
    int& ref1 = arr[0];
    int& ref2 = arr[1];
    int& ref3 = arr[2];

    cout << ref1 << endl;
    cout << ref2 << endl;
    cout << ref3 << endl << endl;
    c2.REF();
    c2.RNF();

    cout << "TEST02-1" << endl;
    int T_num = 10;
    c2.T_1_1(T_num);
    c2.T_1_2(T_num);

    cout << "TEST3" << endl;
    int nnum1 = 51231;
    int* p1 = &nnum1;
    int nnum2 = 10;
    int* p2 = &nnum2;
    cout << p1 << endl;
    cout << p2 << endl;
    c2.T_3(p1, p2);
    cout << p1 << endl;
    cout << p2 << endl << endl;

    cout << "반환형이 참조자" << endl;
    int R_num1 = 1;
    int& R_num2 = c2.RefReturn(R_num1);
    cout << &R_num1 << endl;
    cout << &R_num2 << endl;
}


