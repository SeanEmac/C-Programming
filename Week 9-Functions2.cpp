// Functions2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
int isVowel(char c);
int getlen(char string[]);
char upperletter(char c);
int countVowels(char string[]);

void main()
{
	char str1[100] = "";
	printf("Please imput string: \n");
	scanf_s("%s", str1);


}

int isVowel(char c)
{
	if (c == 65 || 69 || 73 || 79 || 85 || 97 || 101 || 105 || 111 || 117)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int getlen(char string[])
{
	int i = 0;
	int j = 0;
	for (i = 0; string != '\0'; i++)
	{
		j++;
	}

	return j;
}

char upperletter(char c)
{
	if ((c <= 122) && (c >= 97))
		{
			c = (c - 32);
		}
	return c;
}

int countVowels(char string[])
{
	int i = 0;
	int j = 0;
	int x = 0;
	x = getlen(string[]);
	for(i = 0; i = x;i++)
	{
		if (string[i] == 65 || 69 || 73 || 79 || 85 || 97 || 101 || 105 || 111 || 117)
		{
			j++;
		}
	}
	return j;
}

