#include <iostream>
#include "Chapter3.h"
using namespace std;

void C3::T1() 
{
	C3::T1_Point pos1 = { 10, 5 };
	pos1.MovePos(-5, 10);
	pos1.ShowPosition();

}

void T::T_3_1()
{

}

void T::Init()
{
	T::NumAdd = 0;
	T::NumMin = 0;
	T::NumFul = 0;
	T::NumDiv = 0;
}

double T::Add(double num1, double num2)
{

	return num1 + num2;
}
