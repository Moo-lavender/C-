#define _CRT_SECURE_NO_WARNINGS 1
//2.使用函数实现两个数的交换。
#include<stdio.h>
#include<stdlib.h>
void swap(int *px, int *py)
{
	int tem;
	tem = *px;
	*px = *py;
	*py = tem;
}

int main2()
{
	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}

