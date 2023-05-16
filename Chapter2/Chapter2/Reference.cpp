#include <iostream>
using namespace std;

static void REF() //static 안넣으면 에러남 
{
	cout << "ReferenceANDPointer" << endl;
	int num = 12;
	int* ptr = &num; //num의 주소값을 ptr 주소값에 넣음
	int** dptr = &ptr; // *(*dptr) -> *(ptr) -> *ptr == num    |**은 포인터 변수의 주소값을 나타냄 


	cout << "num의 주소값: " << &num << endl;
	cout << "ptr의 주소값: " << ptr << endl;
	cout << "dptr의 주소값: " << dptr << endl;
	cout << "dptr값: " << *dptr << endl;


	int& ref = num; //ref의 주소를 num값의 주소로 바꿈  
	int* (&pref) = ptr; //ptr(num의 주소값)을 pref의 메모리로 참조 
	int** (&dpref) = dptr; // dptr의 주소값을 참조하고 8번줄에있는 식에 따라서 결국 num이 된\ 

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
}