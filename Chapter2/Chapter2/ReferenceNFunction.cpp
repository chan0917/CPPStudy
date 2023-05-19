#include <iostream>
#include "Chapter2.h"
using namespace std;

void C2::RNF()
{
	C2 c2;
	cout << "Reference and Function" << endl;
	int val1 = 10;
	int val2 = 20;
	c2.Swap(&val1, &val2);
	cout << val1 << endl;
	cout << val2 << endl<< endl;

	c2.RefSwap(val1, val2);
	cout << val1 << endl;
	cout << val2 << endl;
}

 void C2::Swap(int* ptr1, int* ptr2)
{
	int num = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = num;
	//Call-by-reference
}

 void C2::RefSwap(int &ref1, int &ref2)
 {
	 int temp = ref1;
	 ref1 = ref2;
	 ref2 = temp;
 }