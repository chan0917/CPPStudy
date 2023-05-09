#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	int* b = &a; //b에 a의 주소값을 저장
	
	cout << b << endl;
	cout << &a << endl;
	cout << *b << endl; //주소위치에 있는 실제갑을 부름
}