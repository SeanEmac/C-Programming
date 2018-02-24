// ShapesArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int Triangle = 1;
	int Square = 2;
	int Rectangle = 3;
	int Parallelogram = 4;
	int Trapezium = 5;
	int Circle = 6;
	int Elipse = 7;
	int Sector = 8;


	double side = 0;
	double area = 0;
	double height = 0;
	double base = 0;
	double width = 0;
	double verticalHeight = 0;
	double a = 0;
	double b = 0;
	double radius = 0;
	double PI = 3.15;
	double angle = 0;

	int Choice = 0;
	int answer = 1;

	//Start of loop
	do

	{

		//Choice Imput
		printf("Enter Choice: \n");
		printf("<Triangle = 1> \n");
		printf("<Square = 2> \n");
		printf("<Rectangle = 3> \n");
		printf("<Parallelogram = 4> \n");
		printf("<Trapezium = 5> \n");
		printf("<Circle = 6> \n");
		printf("<Elipse = 7> \n");
		printf("<Sector = 8> \n");
		printf("Choice = ");
		scanf_s("%d", &Choice);

	//Calculations 


	
		//Triangle
		if (Choice == 1)
		{
			printf("Enter Height(in cm): ");
			scanf_s("%lf", &height);
			printf("Enter Base(in cm): ");
			scanf_s("%lf", &base);

			area = (.5*base*height);
			printf("Area = %.2lf cm \n", area);

		

		}
		//Square
		else if (Choice == 2)
		{
			printf("Enter Side: ");
			scanf_s("%lf", &side);

			area = (side*side);
			printf("Area = %.2lf cm \n", area);

		
		}
		//Rectangle
		else if (Choice == 3)
		{
			printf("Enter Width(in cm): ");
			scanf_s("%lf", &width);
			printf("Enter Height(in cm): ");
			scanf_s("%lf", &height);

			area = (height*width);
			printf("Area = %.2lf cm \n", area);

		
		}
		//Parallelogram
		else if (Choice == 4)
		{
			printf("Enter Vertical Height(in cm): ");
			scanf_s("%lf", &verticalHeight);
			printf("Enter Base(in cm): ");
			scanf_s("%lf", &base);

			area = (base*verticalHeight);
			printf("Area = %.2lf cm \n", area);

		
		}
		//Trapezium
		else if (Choice == 5)
		{
			printf("Enter Vertical Height(in cm): ");
			scanf_s("%lf", &verticalHeight);
			printf("Enter A (in cm): ");
			scanf_s("%lf", &a);
			printf("Enter B (in cm): ");
			scanf_s("%lf", &b);

			area = (.5*(a + b)*verticalHeight);
			printf("Area = %.2lf cm \n", area);

		
		}
		//Circle
		else if (Choice == 6)
		{
			printf("Enter Radius(in cm): ");
			scanf_s("%lf", &radius);

			area = (PI * (radius*radius));
			printf("Area = %.2lf cm \n", area);

	
		}
		//Elipse
		else if (Choice == 7)
		{
			printf("Enter A(in cm): ");
			scanf_s("%lf", &a);
			printf("Enter B(in cm): ");
			scanf_s("%lf", &b);

			area = (PI*a*b);
			printf("Area = %.2lf cm \n", area);

		
		}
		//Sector
		else if (Choice == 8)
		{
			printf("Enter Radius(in cm): ");
			scanf_s("%lf", &radius);
			printf("Enter Angle(in radians): ");
			scanf_s("%lf", &angle);

			area = (.5*angle*(radius*radius));
			printf("Area = %.2lf cm \n", area);


		}
		//invalid number
		else
		{
			printf("Invalid Choice \n");

		}
		printf("Would you like to try again? Yes = 1 ");
		scanf_s("%d", &answer);
		printf("\n");
		printf("\n");
		printf("\n");

	} 
	
	while (answer == 1);


	return 0;
}

