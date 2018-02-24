// Week22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct athlete
{
	char name[40];
	int age;
	char country[15];
	int year;
	char sport[20];
	int bronze;
	int silver;
	int gold;
	int total;
	struct athlete *next;
};

struct athlete *first, *current, *last;

int readFile();

void  main()
{
	int year = 0;
	char sportname[20];
	readFile();

	printf("What year would you like to search:\n");
	scanf("%d", &year);
	printf("What sport would you like to search:\n");
	scanf("%s", sportname);
	printf("\n\n");

	
	current = first;

	while (current != NULL)
	{
		if ((year == current->year) && (strcmp(sportname , current->sport)==0))
		{
			printf("%s %d %s %d %s %d %d %d %d\n", current->name, current->age, current->country, current->year, current->sport, current->bronze, current->silver, current->gold, current->total);
		}
		current = current->next;
	}
}




int readFile()
{
	char line[200];
	FILE *fptr = fopen("F:\\Week22.txt", "r");
	char *token;
	char delim[4] = "\t";

	if (fptr == NULL)
	{
		printf("Error opening file ! \n");
		return 0;
	}

	while (!feof(fptr))
	{
		fgets(line, 200, fptr);
		if (first == NULL)
		{
			first = (struct athlete *)malloc(sizeof(struct athlete));
			first->next = NULL;
			current = first;
		}
		else
		{
			last = (struct athlete *)malloc(sizeof(struct athlete));
			current->next = last;
			current = last;
			current->next = NULL;
		}

		if ((token = strtok(line, delim)) != NULL) strcpy(current->name, token);
		if ((token = strtok(NULL, delim)) != NULL) current->age = atoi(token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(current->country, token);
		if ((token = strtok(NULL, delim)) != NULL) current->year = atoi(token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(current->sport, token);
		if ((token = strtok(NULL, delim)) != NULL) current->bronze = atoi(token);
		if ((token = strtok(NULL, delim)) != NULL) current->silver = atoi(token);
		if ((token = strtok(NULL, delim)) != NULL) current->gold = atoi(token);
		if ((token = strtok(NULL, delim)) != NULL) current->total = atoi(token);


	}
	fclose(fptr);
	return 1;
}

