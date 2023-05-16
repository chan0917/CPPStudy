// Chapter2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Reference.cpp"
#define TRUE 1
#define FALSE 0 //true와 false는 1과 0이 아니다. 그저 '참'과 '거짓'을 표현하기위한 1바이트 크기의 데이터일 뿐이다 
using namespace std;

int main()
{
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
    cout << ref3 << endl;
    REF();
}


