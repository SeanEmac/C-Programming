// Names.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h"


int main()
{


	char Names[10][50] = {"Kirk Fields", "Eric Mcgee", "Norman Chambers", "Rhonda Blair", "Edmund Manning", "Manuel Wolfe", "Kristine Maldonado", "Lynn Rodriquez", "Alexander Ross", "Billy Banks"};
	char FirstNames[10][25];
	char LastNames[10][25];
	char NewNames[10][50];
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	printf("FIRST NAMES: \n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; Names[i][j] != 32; j++)
		{
			FirstNames[i][j] = Names[i][j];

		}
		FirstNames[i][j] = '\0';
		printf("%s\n", FirstNames[i]);

	}

//surnames


	printf("\nSURNAMES: \n");
	i = 0;
	j = 0;

	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = 0; Names[i][j] != '\0'; j++)
		{
			for (k = 0; Names[i][k] != 32; k++)
			{
			}

			LastNames[i][j] = Names[i][j+(k+1)];

		}
		LastNames[i][j] = '\0';
		printf("%s\n", LastNames[i]);
	}

	printf(" ");

	return 0;
}

