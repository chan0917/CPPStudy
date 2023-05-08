// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Console.h"

using namespace std;

int main()
{
    Menu();

    int choice; 
    cout << "선택: ";
    cin >> choice;
    cout << endl;
    
    switch (choice)
    {
    case 1:
        MakeAccount();
        break;

    case 2:
        Deposit();
        break;
    case 3:
        Withdraw();
        break;
    case 4:
        ShowAccount();
        break;
    case 5:
        cout << "종료" << endl;
        break;

    default:
        cout << "오류" << endl;
        break;
    }
}

void Menu()
{
    cout << "-----Menu-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
}

void MakeAccount()
{
    int id;
    char name[20];
    int mpney;

    cout << "[계좌개설]" << endl;

}

void Deposit()
{
    cout << "[입 금]" << endl;
}

void Withdraw()
{
    cout << "[출 금]" << endl;
}
void ShowAccount()
{
    cout << "[게좌정보]" << endl;
}

