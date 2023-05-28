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