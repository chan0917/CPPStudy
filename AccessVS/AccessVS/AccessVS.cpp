// AccessVS.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string.h>
using namespace std;

class Johnson { // 클래스
    public:       // 접근제한자
        int age;    // 속성 변수
        string name;// 속성 변수
};

int main()
{
    Johnson jjs;

    Johnson* js = new Johnson;
    jjs.age = 10; // .은 클래스의 맴버를 직접 접근 
    js -> name = "Johnson"; // -> 포인터를 이용해서 접근  x -> y == (x*).y

    cout << js -> age << endl;
    cout << js -> name;
}


