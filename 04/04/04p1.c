#define _CRT_SECURE_NO_WARNINGS
/*
1.在屏幕上输出以下图案：
*
***
*****
*******
*********
***********
*************
***********
*********
*******
*****
***
*
*/
#include<stdio.h>
#include<stdlib.h>
int main1()
{
	int i, j;
	for (i = 0; i <= 6; i++)
	{
		for (j = 0; j <= 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 10 - 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}