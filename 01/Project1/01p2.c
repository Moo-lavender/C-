#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	int i = 1; int j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d", i);
			printf("*");
			printf("%d", j);
			printf("=%d\t", i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
