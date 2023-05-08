
#ifndef ADD_H
#define ADD_H


void Menu();
void MakeAccount();
void Deposit();
void Withdraw();
void ShowAccount();

typedef struct 
{
	int accID;
	int balance;
	char name[20];
} Account;

Account accArr[100];
int accNum = 0;
#endif