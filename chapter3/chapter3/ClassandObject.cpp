#include <iostream>
#include "Chapter3.h"
using namespace std;

void C3::CnO()
{
    TEST test;

    test.CanF();    //public�������� ������ �����ϴ�
    //test.EAE();   //class������ �⺻������ private�����̴�

}


class TEST
{
    void EAE();

private:
    void CantF();

public:
    void CanF();
};