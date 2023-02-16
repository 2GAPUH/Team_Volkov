#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Если в четырехзначном числе, введенном с клавиатуры, ровно 3 одинаковых цифры, то вывести «да», иначе – «нет».
int doNumber_7()
{
	int StartNumber, a, b, c, d;

	do {
		printf("Enter your number (999 < n < 10000): ");
		scanf("%d", &StartNumber);
		if (StartNumber < 1000 || StartNumber > 9999) printf("Invalid value!");
	} while (StartNumber < 1000 || StartNumber > 9999);

	a = StartNumber % 10;
	StartNumber /= 10;
	b = StartNumber % 10;
	StartNumber /= 10;
	c = StartNumber % 10;
	StartNumber /= 10;
	d = StartNumber % 10;

	if (a == b && a == c && a != d)
	{
		printf("Yes\n");
		return 0;
	}

	if (a == b && a != c && a == d)
	{
		printf("Yes\n");
		return 0;
	}

	if (a != b && a == c && a == d)
	{
		printf("Yes\n");
		return 0;
	}

	if (b == c && b == d && b != a)
	{
		printf("Yes\n");
		return 0;
	}

	printf("No\n");

	return 0;
}

//Вычислить произведение целых простых чисел от M до N
int doNumber_18()
{
	int a, b, sum = 1;

	do {
		printf("Enter number M: ");
		scanf("%d", &a);
		printf("Enter number N: ");
		scanf("%d", &b);
	} while (a < 1 || b < 1 || a == b);

	if (b < a) (a ^= b ^= a ^= b);

	for (int n; a < b + 1; a++)
	{
		n = a;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				n = 1;
				break;
			}
		}
		sum *= n;
	}

	printf("%d\n", sum);

	return 0;
}


int doNumber_Dop()
{
	int N, sum1 = 0, sum2 = 0;

	printf_s("Enter N: ");
	scanf_s("%d", &N);

	for (int i = 1;i < N; i++)
	{
		sum2 += i;
	}

	for (int i = 1, z;i < N - 1;i++)
	{
		printf_s("Enter N[%d]: ", i);
		scanf_s("%d", &z);
		sum1 += z;
	}

	printf_s("You missed number: %d\n", sum2 - sum1);


	return 0;
}
