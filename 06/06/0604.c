#define _CRT_SECURE_NO_WARNINGS 1
//4.创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。要求：自己设计函数的参数，返回值。
#include<stdio.h>
#include<stdlib.h>
void show(int a[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
}

void init(int a[], int len)
{
	int i = 0;
	printf("请输入%d个整数来初始化数组\n", len);
	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}
}
void reverse(int a[], int len)
{
	int i, j, t;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{

		t = a[j];
		a[j] = a[i];
		a[i] = t;
	}
}
void empty(int a[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		a[i] = 0;
	}
}

int main4()
{
	int a[10];
	int len = 10;
	init(a, len);
	show(a, len);
	reverse(a, len);
	show(a, len);
	empty(a, len);
	show(a, len);
	system("pause");
	return 0;
}