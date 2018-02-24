// Week 21.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

struct{
	int patientID;
	float temperature;
	int pulseRate;
	int respirationRate;
	int bloodPressureS;
	int bloodPressureD;
} records;

void main(int argc, char* argv[])
{
	records.patientID = atoi(argv[1]);
	records.temperature = atof(argv[2]);
	records.pulseRate = atoi(argv[3]);
	records.respirationRate = atoi(argv[4]);
	records.bloodPressureS = atoi(argv[5]);
	records.bloodPressureD = atoi(argv[6]);
	char time[] = __TIME__;
	char date[] = __DATE__;

	FILE *fptr;

	fptr = fopen("F:\\Results.txt", "a");
	fprintf(fptr, "%s %s\t%d\t%.2f\t%d\t%d\t%d\t%d\n", date, time, records.patientID, records.temperature, records.pulseRate, records.respirationRate, records.bloodPressureS, records.bloodPressureD);
	fclose(fptr);

}