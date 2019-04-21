#define _CRT_SECURE_NO_WARNINGS 1
//2.求出0～999之间的所有“水仙花数”并输出。 
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
			printf("两位数的水仙花有%d\n", i);
	}

	for (j = 100; j < 999; j++)
	{
		c = j % 10;
		d = (j / 10) % 10;
		e = j / 100;
		if (c * c * c + d * d * d + e * e * e == j)
			printf("三位数的水仙花有%d\n", j);
	}

	system("pause");
	return 0;

}
