#define _CRT_SECURE_NO_WARNINGS 1
//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
#include<stdlib.h>
int main1()
{
	int i, j, k, t;
	int arr[10];
	int a[10];
	printf("请为数组1输入10个整数\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("请为数组2输入10个整数\n");
	for (j = 0; j < 10; j++)
	{
		scanf("%d", &a[j]);
	}
	for (k = 0; k < 10; k++)
	{
		t = arr[k];
		arr[k] = a[k];
		a[k] = t;
	}
	printf("数组1为：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("数组2为：\n");
	for (j = 0; j < 10; j++)
	{
		printf("%d ", a[j]);
	}
	system("pause");
	return 0;
}