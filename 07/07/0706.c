#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现求n的阶乘 
#include<stdio.h>
#include<stdlib.h>
int mul1(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else return (n * mul1(n - 1));
}
int mul2(int n)
{
	int sn = 1;
	for (int i = 2; i <= n; i++)
	{
		sn *= i;
	}
	return sn;
}

int main()
{
	int n;
	printf("请输入一个整数:>");
	scanf("%d", &n);
	int ret1 = mul1(n);
	int ret2 = mul2(n);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	system("pause");
	return 0;
}