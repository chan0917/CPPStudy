// Chapter2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#define TRUE 1
#define FALSE 0 //true와 false는 1과 0이 아니다. 그저 '참'과 '거짓'을 표현하기위한 1바이트 크기의 데이터일 뿐이다 
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    cout << "true: " << true << endl;

    //참조자 시작
    int num1 = 2000;
    int& num2 = num1;
    num2 = 1000;
    cout << &num2 << endl;
    cout << num1 << endl; //참조자는 변수에 별명을 하나 붙이는 것이다 ex) "예찬아 늦었어" == "하야시 늦었어"

}


