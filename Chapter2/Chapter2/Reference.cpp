#include <iostream>
using namespace std;

static void REF() //static �ȳ����� ������ 
{
	cout << "ReferenceANDPointer" << endl;
	int num = 12;
	int* ptr = &num; //num�� �ּҰ��� ptr �ּҰ��� ����
	int** dptr = &ptr; // *(*dptr) -> *(ptr) -> *ptr == num    |**�� ������ ������ �ּҰ��� ��Ÿ�� 


	cout << "num�� �ּҰ�: " << &num << endl;
	cout << "ptr�� �ּҰ�: " << ptr << endl;
	cout << "dptr�� �ּҰ�: " << dptr << endl;
	cout << "dptr��: " << *dptr << endl;


	int& ref = num; //ref�� �ּҸ� num���� �ּҷ� �ٲ�  
	int* (&pref) = ptr; //ptr(num�� �ּҰ�)�� pref�� �޸𸮷� ���� 
	int** (&dpref) = dptr; // dptr�� �ּҰ��� �����ϰ� 8���ٿ��ִ� �Ŀ� ���� �ᱹ num�� ��\ 

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
}