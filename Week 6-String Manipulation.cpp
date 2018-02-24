// Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char string1[25] = "9rWLK0gFoHZqNIj3DMkR";
	char string2[25] = "q405IHl0sOx5BrmDTeoh";
	char string3[25] = "95EkdriUzNFQTP5vuhR3";

	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;


	printf("String 1= %s \n", string1);
	printf("String 2= %s \n", string2);
	printf("String 3= %s \n", string3);
	printf("\n \n");

	//string1 numbers
	for (i=0; string1[i] != '\0'; i++)
	{
		if ((string1[i] <= 57) && (string1[i] >= 48))
		{
			string1[i] = 32;
			j = (j + 1);
		}

	}

	//string2 lower case
	i = 0;

	for (i = 0; string2[i] != '\0'; i++)
	{
		if ((string2[i] <= 90) && (string2[i] >= 65))
		{
			string2[i] = (string2[i] + 32);
			k = (k + 1);
		}

	}

	//string3 upper case
	i = 0;

	for (i = 0; string3[i] != '\0'; i++)
	{
		if ((string3[i] <= 122) && (string3[i] >= 97))
		{
			string3[i] = (string3[i] - 32);
			l = (l + 1);
		}

	}

	printf("String 1 = %s with %d numbers removed\n", string1, j);
	printf("String 2 = %s with %d letters minimised\n", string2, k);
	printf("String 3 = %s with %d letters capitalised\n", string3, l);

	return 0;
}

