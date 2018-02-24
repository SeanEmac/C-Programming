// Data structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include <time.h>
#include <stdio.h>
#include "string.h"


//get month
int getMonth(int month)
{
	month = rand() % 12 + 1;
	return month;
}

//get day
int getDay(int day)
{
	if (getMonth(0) == 2)
	{
		day = rand() % 28 + 1;
	}

	else if (getMonth(0) == 9 || 4 || 6 || 11)
	{
		day = rand() % 30 + 1;
	}

	else
	{
		day = rand() % 31 + 1;
	}
	return day;
}

//get year
int getYear(int year)
{
	year = rand() % 4 + 2013;
	return year;
}

//get balance
double getBalance(double balance)
{
	int c = 0;
	balance = rand() % 5000;
	c = rand() % 2;
	if (c == 1)
	{
		balance = (balance*-1);
	}
	return balance;
}

/*void printCustomer(struct customer customers)
{
	printf("%s || %d || %.2lf || %d/%d/%d \n", customers.name, customers.accountNumber, customers.balance, customers.lastTrans.day, customers.lastTrans.month, customers.lastTrans.year);
}
*/
struct date
{
	int day;
	int month;
	int year;

};

struct customer
{
	char name[50];
	int accountNumber;
	double balance;
	struct date lastTrans;
};

void main()
{
	struct customer customers[10];
	char names[10][50] = { "Kylee Meyer", "Zander Benton", "Leyla Madden", "Marquise Contreras", "Taylor Key", "Jamie Riddle", "Cristopher Gillespie", "Keira Hart", "Brendan Lara", "Natalee Stewart" };
	int i = 0;

	srand((unsigned int)time(NULL));
	printf("Name     Account No.     Balance     Last Trans\n");
	
	for (i = 0; i < 10 ; i++)
	{
		strcpy_s(customers[i].name, names[i]);
		customers[i].accountNumber = 1000 + i;
		customers[i].balance = getBalance(0);
		customers[i].lastTrans.day = getDay(0);
		customers[i].lastTrans.month = getMonth(0);
		customers[i].lastTrans.year = getYear(0);
		
		printf("%s || %d || %.2lf || %d/%d/%d \n", customers[i].name, customers[i].accountNumber, customers[i].balance, customers[i].lastTrans.day, customers[i].lastTrans.month, customers[i].lastTrans.year);
	}
	printf("\n");
}
