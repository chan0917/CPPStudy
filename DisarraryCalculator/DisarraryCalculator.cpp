// DisarraryCalculator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    float A;
    float B;
    double E;
    cout << "우리 혼란: " ;
    cin >> A;
    cout << "상대 혼란: " ;
    cin >> B;

    E = (1 - A / 100) / (1 - B / 100);
    cout << "약해짐: " << E;
}


