#include "stdafx.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"

typedef struct
{
	char firstName[50];
	char lastName[50];
	long id;
	char english, french, maths, philosophy;
} result;


result *results[100];// array of pointers to 'result' structures - assuming that there is 100 or less records in the data file
int numResults = 0;// number of records read from the file
int readFile(char *fileName);// read file and populate the results you will need to use malloc to allocate a new 'result' structure for each record read from the file the *result pointer returned by malloc will be stored in the next member of the array *results[]
void initialiseResults();// set all the pointers in *results[] to NULL before reading in the file
void printResult(result *aResult);// function to print an individual member of the *results[] array

FILE *fptr;

int main()
{
	char fileName[] = "C:\\Users\\sean\\Desktop\\Programming Files\\Week18.txt";
	int i = 0;
	void initialiseResults();

	if (!readFile(fileName))
	{
		printf("File could not be opened !!\n");
		return 0;
	}
	printf(" Last Name\tFirst Name\tID\tMaths\tEnglish\tFrench\tPhilosophy\n");
	for (i = 0; results[i] != NULL; i++)
	{
		printResult(results[i]);
	}

	return 0;
}

void printResult(result *aResult)
{
	printf("%10s\t%10s\t%d\t%c\t%c\t%c\t%c\n", (*aResult).lastName, (*aResult).firstName, (*aResult).id, (*aResult).maths, (*aResult).english, (*aResult).french, (*aResult).philosophy);
}

void initialiseResults()
{
	free(*results);
	int i = 0;
	while (i < 100)
	{
		*(results + i) = NULL;
		i++;
	}
}

int readFile(char *fileName)
{
	fptr = fopen(fileName, "r");

	char line[300];
	int i = 0;
	fgets(line, 300, fptr);
	while (!(feof(fptr)))
	{
		results[i] = (result*)malloc(sizeof(result));
		fscanf(fptr, "%d\t%s\t%s\t%c\t%c\t%c\t%c\n", &results[i]->id, results[i]->firstName, results[i]->lastName, &results[i]->english, &results[i]->maths, &results[i]->french, &results[i]->philosophy);
		i++;
		numResults++;
	}
	fclose(fptr);

	return 1;
}









