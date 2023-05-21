#include <iostream>
#include "Chapter2.h"
using namespace std;

void C2::NewDelete()
{
	int* ptr = new int; //heap에 메모리를 만들고 주소값을 반환
	cout << "ptr주소값: " << ptr << endl;
	*ptr = 7;

	delete ptr; //메모리해제 || 메모리를 운영 체제로 다시 전달
	cout << "delete후 ptr주소값: " << ptr << endl << endl;
	//delete ptr; // trying to deallocate the memory again will also lead to undefined behavior.
	//cout << "delete두번 후 ptr주소값: " << ptr << endl;

	//new와 malloc 함수의 동작방식에는 차이가 있다
}


