#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << *arr << endl; //포인터 응용
    cout << arr + 1 << " " << *arr + 1 << endl; //배열 메모리 호출

    int* p;
    int arrSize;
    cout << "Input array size: ";
    cin >> arrSize;
    p = new int[arrSize]; //입력받은 크기많큼 배열을 동적 생성
    
    for (int i = 0; i <= arrSize; i++)
    {
        cout << p + i << endl;
    }
}


