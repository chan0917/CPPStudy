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
	cout << "���� ���: " <<  numOfApples <<endl;
	cout << "�Ǹ� ����: " << myMoney <<endl;
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
	cout << "���� �ܾ�: " << myMoney << endl;
	cout << "��� ����: " << numOfApples <<endl;
}

//int Main()
//{
//	FruitSeller seller;
//	seller.InitMembers(1000, 20, 0);
//	FruitBuyer buyer;
//	buyer.InitMembers(5000);
//	buyer.BuyApples(seller, 2000);
//}