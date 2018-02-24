// Week 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"

typedef struct
{
	char userName[50];
	char firstName[50];
	char lastName[50];
	char displayName[50];
	char job[50];
	char department[50];
	char officeNo[50];
	char phone[50];
	char mobile[50];
	char fax[50];
	char address[50];
	char city[50];
	char state[50];
	char zip[50];
	char country[50];
} record;

record *records[100];
FILE *fptr;


int readFile(char *fileName);
void printResult(record *records);
void initialiseContacts();

void main()
{
	int i = 0;
	initialiseContacts();
	readFile("C:\\Users\\sean\\Desktop\\Programming Files\\Week19.txt");

	for(i=0; records[i] != NULL ;i++)
	{
		printResult(records[i]);
	}
}

int readFile(char *fileName)
{
	int i = 0;
	char delim[4] = ",\n";

	fptr = fopen(fileName, "r");
	if (fptr == NULL)
	{
		printf("Error opening file! \n");
		return 0;
	}

	char line[300];
	char *token;
	fgets(line, 300, fptr);
	while (!feof(fptr))
	{
		records[i] = (record*)malloc(sizeof(record));
		fgets(line, 300, fptr);

		token = strtok(line, delim);
		strcpy(records[i]->userName, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->firstName, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->lastName, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->displayName, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->job, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->department, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->officeNo, token);
	
		token = strtok(NULL, delim);
		strcpy(records[i]->phone, token);
	
		token = strtok(NULL, delim);
		strcpy(records[i]->mobile, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->fax, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->address, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->city, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->state, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->zip, token);

		token = strtok(NULL, delim);
		strcpy(records[i]->country, token);
		i++;
		
	}
	fclose(fptr);
	return 1;
}

void printResult(record *records)
{
	printf("User Name:\t %s\nFirst Name:\t %s\nLast Name:\t %s\nDisplay Name:\t %s\nJob Title:\t %s\nDepartment:\t %s\nOffice Number:\t %s\nOffice Phone:\t %s\nMobile Phone:\t %s\nFax:\t\t %s\nAddress:\t %s\nCity:\t\t %s\nState:\t\t %s\nZIP:\t\t %s\nCountry:\t %s\n\n",
		(*records).userName, (*records).firstName, (*records).lastName, (*records).displayName, (*records).job, (*records).department, (*records).officeNo, (*records).phone, (*records).mobile, (*records).fax, (*records).address, (*records).city, (*records).state, (*records).zip, (*records).country);
}

void initialiseContacts()
{
	free(*records);
	int i = 0;
	while (i < 4)
	{
		*(records + i) = NULL;
		i++;
	}
}


