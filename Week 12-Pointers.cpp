// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void printString(char *string);
void sortString(char *string);
int getStringLength(char *string);

void main()
{
	char str1[] = "bcGpsWoNaTbFnoZzwX";

	printString("Unsorted String:");
	printString("\n");
	printString(str1);
	printString("\n \n");
	sortString(str1);
	printString("Sorted String:");
	printString("\n");
	printString(str1);
	printString("\n \n");
}

int getStringLength(char *string)
{
	int i = 0;

	while (*(string + i) != '\0')
	{
	i++;
	}
	return i;
}

void printString(char *string)
{
	int i = 0;
	int len = 0;
	len = getStringLength(string);

	for (i = 0; i < len; i++)
	{
		printf("%c", *(string + i));
	}
}

void sortString(char *string)
{
	int len = 0;
	int pass = 1;
	int i = 0;
	char temp[40];
	len = getStringLength(string);

	for (pass = 1; pass < len; pass++)
	{
		for (i = 0; i < len - 1; i++)
		{
			if (*(string + i) > *(string + i + 1))
			{
				*(temp + i) = *(string + i);
				*(string + i) = *(string + i + 1);
				*(string + i + 1) = *(temp + i);
			}
		}
	}
}