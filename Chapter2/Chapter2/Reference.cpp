#include <iostream>
using namespace std;

static void REF() //static �ȳ����� ������ 
{
	int num = 12;
	int* ptr = &num; //num�� �ּҰ��� ptr �ּҰ��� ����
	int** dptr = &ptr;

	int& ref = num; 
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
}