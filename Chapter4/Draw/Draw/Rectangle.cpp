#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point& ul, const Point& lr) //Point(class)를 변수로 선언한 것을 참조받아서 Point ul; <-이런 느낌으로 작성함
{
	if (ul.GetX() > lr.GetY() || ul.GetY() > lr.GetX())
	{
		cout << "잘못된 위치 정보 전달" << endl;
		return false;
	}

	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;

	cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl << endl;
}