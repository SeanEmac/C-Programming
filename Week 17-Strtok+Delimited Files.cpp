// Week 17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"

struct date
{
	int day, month, year;
};

struct record
{
	struct date orderDate;
	char region[20];
	char rep[20];
	char item[20];
	int units;
	float unitCost;
	float totalCost;
};

int nrecords = 0;
struct record records[501];
int readFile(char *fileName);
void findByRegion(char *region);
void findByRep(char *rep);
void findByItem(char *item);
void findByYear(int year);
int getOption();

void main()
{
	char fileName[]="C:\\Week 17.txt";
	int option, year;
	char temp[20];


	option = getOption();
	while(option!=0)
	{
		switch (option)
		{
		case 1:
			puts("Enter Region");
			gets_s(temp);
			findByRegion(temp);
			break;
		case 2:
			puts("Enter Rep");
			gets_s(temp);
			findByRep(temp);
			break;
		case 3:
			puts("Enter Item");
			gets_s(temp);
			findByItem(temp);
			break;
		case 4:
			puts("Enter Year");
			gets_s(temp);
			year = atoi(temp);
			findByYear(year);
			break;
		}
		option = getOption();

	}
	printf("Test");
}

int readFile(char *fileName)
{
	char delimiter[15]= "\t, /";
	char *token;
	FILE *fptr;
	fptr = fopen(fileName, "r");
	char line[300];
	
	fgets(line, 300, fptr);

	while (nrecords<43)
	{
		fgets(line, 300, fptr);

		token = strtok(line, delimiter);
		records[nrecords].orderDate.month = atoi(token);

		token = strtok(NULL, delimiter);
		records[nrecords].orderDate.day = atoi(token);

		token = strtok(NULL, delimiter);
		records[nrecords].orderDate.year = atoi(token);

		token = strtok(NULL, delimiter);
		strcpy(records[nrecords].region, token);

		token = strtok(NULL, delimiter);
		strcpy(records[nrecords].rep, token);

		token = strtok(NULL, delimiter);
		strcpy(records[nrecords].item, token);
		
		token = strtok(NULL, delimiter);
		records[nrecords].units = atoi(token);

		token = strtok(NULL, delimiter);
		records[nrecords].unitCost = atof(token);

		token = strtok(NULL, delimiter);
		records[nrecords].totalCost = atof(token);

		nrecords++;

	}

	return 1;
}


void findByRegion(char *region)
{
	int i = 0;
	float total = 0.0;

	for (i = 0; i<nrecords; i++)
	{
		if (!strcmp(records[i].region, region)==0)
		{
			total = total + records[i].totalCost;
		}
	}
	printf("Sales for region: %s = %.2f\n", region, total);
}

void findByRep(char *rep)
{
	int i = 0;
	float total = 0.0;

	for (i = 0; i<nrecords; i++)
	{
		if (!strcmp(records[i].rep, rep)==0)
		{
			total = total + records[i].totalCost;
		}
	}
	printf("Sales for rep: %s = %.2f\n", rep, total);
}

void findByItem(char *item)
{
	int i = 0;
	float total = 0.0;

	for (i = 0; i<nrecords; i++)
	{
		if (!strcmp(records[i].item, item)==0)
		{
			total = total + records[i].totalCost;
		}
	}
	printf("Sales for item: %s = %.2f\n", item, total);
}

void findByYear(int year)
{
	int i = 0;
	float total = 0.0;

	for (i = 0; i<nrecords; i++)
	{
		if (records[i].orderDate.year = year)
		{
			total = total + records[i].totalCost;
		}
	}
	printf("Sales for year: %s = %.2f\n", year, total);
}


int getOption()
{
	int option = 0;
	char inp[3];

	puts("Enter one of the follow options:");
	puts("1 - sales by region");
	puts("2 - sales by rep");
	puts("3 - sales by item");
	puts("4 - sales by year");
	puts("0 - quit");
	gets_s(inp);
	option = atoi(inp);

	return option;
}

