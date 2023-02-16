#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int doNumber_2()
{
	printf("#2 ������� V1 ������ ���� ����������� T1 � V2 ������� ���� ����������� T2. ����� ����� � ����������� �������������� �����.\n");
	system("chcp 1251");

	float t1, t2, v1, v2, v, t;
	do
	{
		printf("������� ����� ���� V1 = "); scanf_s("%f", &v1);
	} while (v1 <= 0);
	do
	{
		printf("������� ����� ���� V2 = "); scanf_s("%f", &v2);
	} while (v2 <= 0);
	do
	{
		printf("������� ����� ���� T1 = "); scanf_s("%f", &t1);
	} while (t1 < 0);
	do
	{
		printf("������� ����� ���� T2 = "); scanf_s("%f", &t2);
	} while (t2 < 0);

	v = v1 + v2;
	t = (t1*v1 + t2*v2) / v;

	printf("����� �������������� ����� = %.2f. ����������� �������������� ����� = %.2f\n", v, t);

	return 0;
}

int doNumber_14()
{
	printf("#14 ��� ������������ K  (0<=K<=1000) ����������� ����� �� ����� K (�������) ������ � ����,���������� ��������� ����� ���� � ������ K.\n");
	system("chcp 1251");
	int K;

	do
	{
		printf("������� ����������� ����� � (0<=K<=1000) = "); scanf_s("%d", &K);
	} while (K < 0 || K>1000);


	if (K == 1)
		printf("�� ����� %d ����\n", K);
	else if ((K % 10) >= 2 && (K % 10) <= 4)
		printf("�� ����� %d �����\n", K);
	else if ((K % 10) >= 5 && (K % 10) <= 9)
		printf("�� ����� %d ������\n", K);
	else if ((K % 10) == 0)
		printf("�� ����� %d ������\n", K);
	else if (K >= 10 && K <= 20)
		printf("�� ����� %d ������\n", K);

	return 0;

}

int doNumber_16()
{

	printf("#16 C�������� ��������� ��� ���������� 1!+2!+3!+....+n!\n");
	system("chcp 1251");

	int n;
	int sum = 0;
	int fact = 1;

	do
	{
		printf("������� ����� n = "); scanf_s("%d", &n);
	} while (n<0 || n>13);

	if (n == 0)
		printf("����� = % d\n", fact);
	else
	{
		for (int i = 1; i <= n; i++)
		{

			fact *= i;
			sum += fact;
		}

		printf("����� = %d\n", sum);
	}

	return 0;

}
