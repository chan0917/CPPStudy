#include <iostream>

using namespace std;

int data = 10; //���������� static�� ������ ������ �Ҵ�

int main()
{
	int a = 1; // ��������, �Ű����� ���ÿ� ���� 
	int* b = &a; //b�� a�� �ּҰ��� ����
	
	cout << b << endl;
	cout << &a << endl;
	cout << *b << endl; //�ּ���ġ�� �ִ� �������� �θ�
}