#include <iostream>
#include "Chapter3.h"
using namespace std;

void C3::CnO()
{
    TEST test;

    test.CanF();    //public선언으로 접근이 가능하다
    //test.EAE();   //class에서는 기본적으로 private선언이다

}


class TEST
{
    void EAE();

private:
    void CantF();

public:
    void CanF();
};
/*
* 멤버시리즈와 객체
* 멤버는 구성원이라는 이름을 담고 있다. 00클래스의 멤버변수, 멤버 함수...
* 
* 
*/