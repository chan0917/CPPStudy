#include <iostream>

using namespace std;

int data = 10; //전역변수와 static은 데이터 영역에 할당

int main()
{
	int a = 1; // 지역변수, 매개변수 스택에 저장 
	int* b = &a; //b에 a의 주소값을 저장
	
	cout << b << endl;
	cout << &a << endl;
	cout << *b << endl; //주소위치에 있는 실제갑을 부름
}