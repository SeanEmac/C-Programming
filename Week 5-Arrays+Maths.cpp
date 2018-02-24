// Ages for.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int ages[10];
	int total = 0;
	int average = 0;
	int i = 0;
	int numAges = 0; 
	int age = 0;

	printf("how many ages do you want to enter? ");
	scanf_s("%d", &numAges);


		for (i = 0; i<numAges; i=i+1)
		{
			printf("enter age #%d: ", i+1);
			scanf_s("%d", &age);
			ages[i] = age;
			total = total + age;

		}

		//minimum
		int minimum = 1000;
		int count = 0;

		for (count = 0; count < numAges; count++)
		{
			if (ages[count] < minimum)
			{
				minimum = ages[count];
			}

		}
		//maximum
		int maximum = 0;
		count = 0;

		for (count = 0; count < numAges; count++)
		{
			if (ages[count] > maximum)
			{
				maximum = ages[count];
			}

		}
		average = (total / i);
		//print out
		printf("Average = %d\n", average);
		printf("Minumum = %d\n", minimum);
		printf("Maximum = %d\n", maximum);


	return 0;
}

