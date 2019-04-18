#define _CRT_SECURE_NO_WARNINGS 1
//2. ¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ¡£ 
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	float i = 0, j = 1, x = 0, y = 0;
	for (i = 2; i <= 100; i += 2)
	{

		j = j - (1 / i);
	}
	for (x = 3; x < 100; x += 2)
	{
		y = y + (1 / x);
	}
	printf("1-1/2+1/3-...-1/100=%f ", j + y);
	system("pause");

	return 0;
}
