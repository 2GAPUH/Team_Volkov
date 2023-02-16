#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "Logvinov.h"
#include "Volkov.h"
#include "Scorokhod.h"


int main()
{
	system("chcp 1251");

	int numberOfExercise;

	printf_s("1 - Number 1 \n2 - Number 2 \n3 - Number 3 \n4 - Number 7 \n5 - Number 12 \n6 - Number 14 \n7 - Number 16 \n8 - Number 18 \n9 - Number 20\n");
	do
	{
		printf_s("Enter exercise number: "); scanf_s("%d", &numberOfExercise);
		switch (numberOfExercise)
		{
		case 1:doNumber_1(); break;
		case 2:doNumber_2(); break;
		case 3:doNumber_3(); break;
		case 4:doNumber_7(); break;
		case 5:doNumber_12(); break;
		case 6:doNumber_14(); break;
		case 7:doNumber_16(); break;
		case 8:doNumber_18(); break;
		case 9:doNumber_20(); break;


		case 0:printf("Program finished.\n"); break;
		default:printf("Invalid exercise number!\n");
		}
	} while (numberOfExercise != 0);


	return 0;
}