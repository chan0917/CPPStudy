#include <iostream>
using namespace std;

class COOnst
{

    const int num;

    int main()
    {
        int b;

        int const a = 1; //concst는 앞이든 뒤든 다 넣을 수있다

        const int* p = &b; //포인터가 가르키는 변수값을 상수화 
        int* const pp = &b; //포인터 변수 자체를 상수화 시킨다 
        *pp = a; //pp의 주소값을 바꾸느 것은 불가능
        
        cout << " " << endl;
    }

    int Function(const int num1, const int num2); //함수의파라미터를 함수내에서 변경하면 안 될 때


    COOnst(void) : num(3) {}; //class나 struct의 멤버 변수를 const로 선언 시에느 반드시 **초기화 리스트** 사용

};