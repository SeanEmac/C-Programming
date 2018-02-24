// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int lowest(int nums[], int len);
int highest(int nums[], int len);
double average(int nums[], int len);
int numPassed(int nums[], int len);
int numFailed(int nums[], int len);
int printArray(int nums[], int len);

int _tmain(int argc, _TCHAR* argv[])
{
	int scores[10] = { 5, 25, 45, 66, 77, 34, 90, 22, 68, 84 };
	int low, high;
	double avg;
	int numFails, numPasses;
	int arr = 0;

	printf("Scores = ");
	printArray(scores, 10);
	printf("\n");

	low = lowest(scores, 10);//Scores & 10 --> Arguments
	high = highest(scores, 10);
	avg = average(scores, 10);
	numFails = numFailed(scores, 10);
	numPasses = numPassed(scores, 10);
	printf("Lowest = %d \n", low);
	printf("Highest = %d \n", high);
	printf("Average = %.2lf \n", avg);
	printf("Number of fails = %d \n", numFails);
	printf("Number of passes = %d \n", numPasses);
	return 0;
}

int lowest(int nums[], int len)//Parameters
{
	int i = 0;
	int low = nums[0];

	for (i = 0; i < 10; i++)
	{
		if (nums[i] <= low)
		{
			low = nums[i];
		}
	}
	return low; 
}

int highest(int nums[], int len)
{
	int i = 0;
	int high = nums[0];

	for (i = 0; i < 10; i++)
	{
		if (nums[i] >= high)
		{
			high = nums[i];
		}
	}
	return high;
}


double average(int nums[], int len)
{
	double average = 0;
	double total = 0;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		total = (total + nums[i]);
	}
	average = total / 10;

	return average;
}
	

int numPassed(int nums[], int len)
{
	int i = 0;
	int j = 0;
	while (i < 10)
	{
		if (nums[i] >= 40)
		{
			j++;
		}
		i++;
	}

	return j;

}

int numFailed(int nums[], int len)
{
	int i = 0;
	int j = 0;
	while (i < 10)
	{
		if (nums[i] <40)
		{
			j++;
		}
		i++;
	}

	return j;
}

int printArray(int nums[], int len)
{
	int i;
	for (i = 0; i<len; i++)
	{
		printf("%d ", nums[i]);
	}
	return 1;
}
