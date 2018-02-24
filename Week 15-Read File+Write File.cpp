// Week 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int main()
{
	//Variables
	char IDs[4][4];
	char Grade[4];
	int Score[4];
	char Subject[4][20];
	int i = 0;


	FILE * fptr;
	//Open and read
	fptr = fopen("D:\\grades.txt", "r");

	while (i<4)
	{
		fscanf(fptr, "%s\t%s\t%d\t%c\n", IDs[i], Subject[i], &Score[i], &Grade[i]);
		printf("%s\t%s\t%d\t%c\n", IDs[i], Subject[i], Score[i], Grade[i]);
		i++;
	}

	fclose(fptr);
	//Close and calculate

	printf("\n\n");
	i = 0;
	while (i < 4)
	{
		Score[i] = (Score[i]+10);

		if(Score[i]>70)
		{
			Grade[i] = 'A';
		}
			else if (Score[i]>60)
			{
				Grade[i] = 'B';
			}
				else if (Score[i]>50)
				{
					Grade[i] = 'C';
				}
					else if (Score[i]>40)
					{
						Grade[i] = 'D';
					}
						else
						{
							Grade[i] = 'F';
						}
		i++;
	}
	//Create second file 
	fptr = fopen("D:\\grades2.txt", "w");
	
	i = 0;
	while(i<4)
	{
		//Insert new Data
		fprintf(fptr, "%s\t%s\t%d\t%c\n", IDs[i], Subject[i], Score[i], Grade[i]);
		i++;
	}

	fclose(fptr);
	//Close
    return 0;
}
