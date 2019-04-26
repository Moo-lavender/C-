#define _CRT_SECURE_NO_WARNINGS 1
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	int a, b,average;
	printf("请输入两个整数：>");
	scanf("%d%d", &a, &b);
	average = a + (b - a) / 2;
	printf("%d ", average);
	system("pause");
	return 0;
}
