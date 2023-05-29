#include <iostream>
#include "Chapter3.h"
#include "Car.h"
using namespace std;


int main()
{
    C3 c3; //클래스는 기본적으로 클래스 내에 선언된 변수는 클래스 내에 선언된 함수에서만 접근 가능하다
    
    cout << "Chapter3" << endl;
    c3.A();
    
    cout << " " << endl;
    cout << "TEST1" << endl;
    c3.T1();

    enum C3::Color Custom;
    Custom = c3.Red;

    
}


