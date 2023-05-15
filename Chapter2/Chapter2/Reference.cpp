#include <iostream>
using namespace std;

static void REF() //static 안넣으면 에러남 
{
	int num = 12;
	int* ptr = &num; //num의 주소값을 ptr 주소값에 넣음
	int** dptr = &ptr;

	int& ref = num; 
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
}