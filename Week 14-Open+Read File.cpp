// week 14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



void main(void)
{
	FILE *fptr;
	char IDs[15][6];
	double balances[15];
	int i = 0;
	fptr = fopen("C:\\Users\\sean\\Desktop\\Week14.txt", "r");

	while (!feof(fptr))
	{
		fscanf(fptr, "%s\t%lf\n", IDs[i], &balances[i]);
		printf("%s\t%10.2lf\n", IDs[i], balances[i]);
		i++;
	}
	
	fclose(fptr);
}


