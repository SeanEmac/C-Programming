// Dice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "time.h"
#include "stdlib.h"

#define SIZE 3
int throwDie();
int checkThrow(int nums[], int dice[], int len);
void sortArray(int array[], int len);
void printDice(int dice[], int len);

int main()
{
	int dice[SIZE];
	int nums[SIZE];
	int nThrows = 0;

	int i = 0;
	int nMatch = 0;
	srand(time(0));

	puts("Enter the numbers you want to throw:");
	for (i = 0; i<SIZE; i++)
	{
		printf("#%d: ", i);
		scanf_s("%d", &nums[i]);
	}
	sortArray(nums, SIZE);
	do
	{
		for (i = 0; i<SIZE; i++)
		{
			dice[i] = throwDie();
		}

		sortArray(dice, SIZE);
		printDice(dice, SIZE);
		printf("\n");

		nMatch = checkThrow(nums, dice, SIZE);
		nThrows++;
	} while (nMatch < SIZE);

	printf("Succeeded in %d throws \n", nThrows);
}

int throwDie()
{
	int a = 0;
	a = rand() % 6 + 1;
	return a;
}

int checkThrow(int nums[], int dice[], int len)
{
	int matches = 0;
	int i = 0;

	for (i = 0; i < len; i++)
	{
		if (nums[i] == dice[i])
		{
			matches = matches + 1;
		}
	}
	return matches;
}

void sortArray(int array[], int len)
{
	int pass = 1;
	int i = 0;
	int temp = 0;

	for (pass = 1; pass < len; pass++)
	{
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}

void printDice(int dice[], int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
	{
		printf("%d ", dice[i]);
	}
}

