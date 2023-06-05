#include <iostream>
#include "OOP.h"
using namespace std;

void FruitSeller::InitMembers(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}

int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}

void FruitSeller::ShowSalesResult()
{
	cout << "남은 사과: " <<  numOfApples <<endl;
	cout << "판매 수익: " << myMoney <<endl;
}

void FruitBuyer::InitMembers(int money)
{
	numOfApples = 0;
	myMoney = money;
}

void FruitBuyer::BuyApples(FruitSeller& seller, int money)
{
	numOfApples += seller.SaleApples(money);
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult()
{
	cout << "현재 잔액: " << myMoney << endl;
	cout << "사과 개수: " << numOfApples <<endl;
}

//int Main()
//{
//	FruitSeller seller;
//	seller.InitMembers(1000, 20, 0);
//	FruitBuyer buyer;
//	buyer.InitMembers(5000);
//	buyer.BuyApples(seller, 2000);
//}

/*위 예제를 보면 객체에서 다른 객체에 존재하는 함수를 호출하는 것을 볼 수 있다
* 
* 하나의 객체가 다른 하나의 객체에게 메세지를 전달하는 방법은 함수호출을 기반으로 한다.
* 그래서 이러한 형태의 함수호출을 가리켜 '메세지 전달(Message Passing)' 이라고 한다
*/