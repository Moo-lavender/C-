#define _CRT_SECURE_NO_WARNINGS 1
//2.���0��999֮������С�ˮ�ɻ������������ 
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	int i, j, a, b, c, d, e;
	for (i = 10; i <= 99; i++)
	{
		a = i % 10;
		b = i / 10;
		if (a * a + b * b == i)
			printf("��λ����ˮ�ɻ���%d\n", i);
	}

	for (j = 100; j < 999; j++)
	{
		c = j % 10;
		d = (j / 10) % 10;
		e = j / 100;
		if (c * c * c + d * d * d + e * e * e == j)
			printf("��λ����ˮ�ɻ���%d\n", j);
	}

	system("pause");
	return 0;

}
