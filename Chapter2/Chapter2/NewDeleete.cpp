#include <iostream>
#include "Chapter2.h"
using namespace std;

void C2::NewDelete()
{
	int* ptr = new int; //heap�� �޸𸮸� ����� �ּҰ��� ��ȯ
	cout << "ptr�ּҰ�: " << ptr << endl;
	*ptr = 7;

	delete ptr; //�޸����� || �޸𸮸� � ü���� �ٽ� ����
	cout << "delete�� ptr�ּҰ�: " << ptr << endl << endl;
	//delete ptr; // trying to deallocate the memory again will also lead to undefined behavior.
	//cout << "delete�ι� �� ptr�ּҰ�: " << ptr << endl;

	//new�� malloc �Լ��� ���۹�Ŀ��� ���̰� �ִ�
}


