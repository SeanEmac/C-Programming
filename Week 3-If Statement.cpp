// ExamMarks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	//Variables
	int englishMark = 0;
	int scienceMark = 0;
	int irishMark = 0;
	int frenchMark = 0;
	int mathsMark = 0;
	float avg = 0;

	//Scan in
	printf("Enter English Mark :" );
	scanf_s("%d", &englishMark);

	printf("Enter Science Mark :" );
	scanf_s("%d", &scienceMark);

	printf("Enter Irish Mark :" );
	scanf_s("%d", &irishMark);

	printf("Enter French Mark :" );
	scanf_s("%d", &frenchMark);

	printf("Enter Maths Mark :" );
	scanf_s("%d", &mathsMark);

	//Average
	avg = (float)(englishMark + scienceMark + irishMark + frenchMark + mathsMark) / 5.0;
	printf("Your average mark is : %.2lf \n", avg);

	//Pass or fails
	printf("Passes: ");
	if (englishMark >= 40) printf("English, ");
	if (scienceMark >= 40) printf("Science, ");
	if (irishMark >= 40) printf("Irish, ");
	if (frenchMark >= 40) printf("French, ");
	if (mathsMark >= 40) printf("Maths, ");

	printf("\nFails: ");
	if (englishMark < 40) printf("English, ");
	if (scienceMark < 40) printf("Science, ");
	if (irishMark < 40) printf("Irish, ");
	if (frenchMark < 40) printf("French, ");
	if (mathsMark < 40) printf("Maths, ");

	// Highest Mark
	if (englishMark >= scienceMark && englishMark >= irishMark && englishMark >= frenchMark && englishMark >= mathsMark)
		printf("\nYour highest mark = %d in English \n", englishMark);

	if (scienceMark >= englishMark && scienceMark >= irishMark && scienceMark >= frenchMark && scienceMark >= mathsMark)
		printf("\nYour highest mark = %d in Science \n", scienceMark);

	if (irishMark >= englishMark && irishMark >= scienceMark && irishMark >= frenchMark && irishMark >= mathsMark)
		printf("\nYour highest mark = %d in Irish \n", irishMark);

	if (frenchMark >= englishMark && frenchMark >= scienceMark && frenchMark >= irishMark && frenchMark >= mathsMark)
		printf("\nYour highest mark = %d in French \n", frenchMark);

	if (mathsMark >= englishMark && mathsMark >= scienceMark && mathsMark >= irishMark && mathsMark >= frenchMark)
		printf("\nYour highest mark = %d in Maths \n", mathsMark);



	return 0;
}

