#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	int* b = &a; //b�� a�� �ּҰ��� ����
	
	cout << b << endl;
	cout << &a << endl;
	cout << *b << endl; //�ּ���ġ�� �ִ� �������� �θ�
}