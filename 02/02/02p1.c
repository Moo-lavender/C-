#define _CRT_SECURE_NO_WARNINGS 1
//1. 给定两个整形变量的值，将两个值的内容进行交换。
#include<stdio.h>
#include<stdlib.h>
int main1()
{
	int i, j, t;
	printf("输入整数 i= ");
	scanf("%d", &i);
	printf("输入整数 j= ");
	scanf("%d", &j);
	t = i;
	i = j;
	j = t;
	printf("i=%d", i);
	printf("\nj=%d", j);
	system("pause");
	return 0;
}
