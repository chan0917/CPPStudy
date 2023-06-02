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
	T::NumAdd++;
	return num1 + num2;
}

double T::Min(double num1, double num2)
{
	T::NumMin++;
	return num1 - num2;
}

double T::Ful(double num1, double num2)
{
	T::NumFul++;
	return num1 * num2;
}

double T::Div(double num1, double num2)
{
	T::NumDiv++;
	return num1 / num2;
}

void T::Show()
{
	cout << "µ¡¼À:" << T::NumAdd << endl;
	cout << "»¬¼À:" << T::NumMin << endl;
	cout << "°ö¼À:" << T::NumFul << endl;
	cout << "³ª´°¼À:" << T::NumDiv << endl;
}
