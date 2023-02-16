#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int doNumber_2()
{
	printf("#2 Смешано V1 литров воды температуры T1 с V2 литрами воды температуры T2. Найти объем и температуру образовавшейся смеси.\n");
	system("chcp 1251");

	float t1, t2, v1, v2, v, t;
	do
	{
		printf("Введите объём воды V1 = "); scanf_s("%f", &v1);
	} while (v1 <= 0);
	do
	{
		printf("Введите объём воды V2 = "); scanf_s("%f", &v2);
	} while (v2 <= 0);
	do
	{
		printf("Введите объём воды T1 = "); scanf_s("%f", &t1);
	} while (t1 < 0);
	do
	{
		printf("Введите объём воды T2 = "); scanf_s("%f", &t2);
	} while (t2 < 0);

	v = v1 + v2;
	t = (t1*v1 + t2*v2) / v;

	printf("Объём образовавшейся смеси = %.2f. Температура образовавшейся смеси = %.2f\n", v, t);

	return 0;
}

int doNumber_14()
{
	printf("#14 Для натурального K  (0<=K<=1000) напечатайте фразу мы нашли K (текстом) грибов в лесу,согласовав окончание слова гриб с числом K.\n");
	system("chcp 1251");
	int K;

	do
	{
		printf("Введите натуральное число К (0<=K<=1000) = "); scanf_s("%d", &K);
	} while (K < 0 || K>1000);


	if (K == 1)
		printf("Мы нашли %d гриб\n", K);
	else if ((K % 10) >= 2 && (K % 10) <= 4)
		printf("Мы нашли %d гриба\n", K);
	else if ((K % 10) >= 5 && (K % 10) <= 9)
		printf("Мы нашли %d грибов\n", K);
	else if ((K % 10) == 0)
		printf("Мы нашли %d грибов\n", K);
	else if (K >= 10 && K <= 20)
		printf("Мы нашли %d грибов\n", K);

	return 0;

}

int doNumber_16()
{

	printf("#16 Cоставить программу для вычисления 1!+2!+3!+....+n!\n");
	system("chcp 1251");

	int n;
	int sum = 0;
	int fact = 1;

	do
	{
		printf("Введите число n = "); scanf_s("%d", &n);
	} while (n<0 || n>13);

	if (n == 0)
		printf("Сумма = % d\n", fact);
	else
	{
		for (int i = 1; i <= n; i++)
		{

			fact *= i;
			sum += fact;
		}

		printf("Сумма = %d\n", sum);
	}

	return 0;

}
