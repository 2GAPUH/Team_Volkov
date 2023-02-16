#include <stdlib.h>
#include <stdio.h>
#include <Math.h>

double writeDoubleNum(double leftB) {
	double a;
	do
	{
		scanf_s("%lf", &a);
	} while (a <= leftB);
	return a;
}

double writeNum(double leftB) {
	double a;
	do
	{
		scanf_s("%lf", &a);
	} while (a <= leftB);
	return a;
}

double geron(double a, double b, double c) {
	double p = (a + b + c) / 2;
	double S = sqrt(p*(p - a)*(p - b)*(p - c));
	return S;
}

void triangeType(double a, double b, double c) {
	if (a == b && a == c) {
		printf_s("ravnostoronniy \n");
	}
	else if (a == b || a == c || c == b) {
		printf_s("ravnobedrenniy \n");
	}
	else
	{
		printf_s("raznostoronniy \n");
	}
}

int writeIntNum(int leftB) {
	int a;
	do
	{
		scanf_s("%d", &a);
	} while (a <= leftB);
	return a;
}

int doNumber_1() {

	double r, R;
	double res;
	printf_s("input r>0 :");
	r = writeDoubleNum(0);
	printf_s("intput R>r :");
	R = writeDoubleNum(r);
	res = 3.14*(R*R - r*r);
	printf_s("result = %.3lf", res);
	system("pause");
	return 0;
}

int doNumber_3() {
	printf_s("how much money tou have? ");
	int money = writeIntNum(-1);
	int countBottle = 0;
	while (money >= 45) {
		money -= 45;
		countBottle++;
		money += 20;
	}

	printf_s("count = %d", countBottle);

	system("pause");
	return 0;
}

int doNumber_20() {
	int A, maxStep = 0;
	int two = 2;
	int step = 1;

	printf_s("print A(celoe) : ");
	scanf_s("%d", &A);

	while (two <= abs(A))
	{
		if (A % two == 0) {
			maxStep = step;
		}
		two *= 2;
		step++;
	}

	printf_s("max step = %d", maxStep);
	system("pause");
	return 0;
}

int doNumber_12() {

	double a, b, c;
	bool triangleIsExist;

	printf_s("input a>0 :");
	a = writeDoubleNum(0);
	printf_s("intput b>0 :");
	b = writeDoubleNum(0);
	printf_s("intput c>0 :");
	c = writeDoubleNum(0);

	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		printf_s("triangle is exist \n");
		triangleIsExist = true;
	}
	else
	{
		printf_s("triangle is not exist \n");
		triangleIsExist = false;
	}

	if (triangleIsExist)
	{
		printf_s("S = %.3lf \n", geron(a, b, c));
		triangeType(a, b, c);
	}


	system("pause");
	return 0;
}


