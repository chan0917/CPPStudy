#pragma once
class C2
{
	public:
		void Swap(int* ptr1, int* ptr2);
		void RefSwap(int &ref1, int &ref2);
		void RNF();
		void REF();
		void T_1_1(int &num);
		void T_1_2(int &num);
		void T_3(int*(& ref1), int*(& ref2));

		int& RefReturn(int& ref);

};