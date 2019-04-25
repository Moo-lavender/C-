#define _CRT_SECURE_NO_WARNINGS 1
//获取一个数二进制序列中所有的偶数位和奇数位
#include<stdio.h>
#include<stdlib.h>
int main2()
{	
	int n; 
	printf("输入一个整数：>");
	scanf("%d", &n);
	int i;
	//位运算
	for (i = 31; i >= 0; i -= 2)
	{
		putchar((n >> i & 1) + '0');
	}
	putchar('\n');
	for (i = 30; i >= 0; i -= 2)
	{
		putchar((n >> i & 1) + '0');
	}
			
	//数位遍历
	int tmp = n;
	char num[17] = { 0 };
	for (i = 31; i >= 0; i -= 2, n /= 4)
	{
		num[i / 2] = n % 2 + '0';
	}
	puts(num);
	n = tmp / 2;
	for (i = 30; i >= 0; i -= 2, n /= 4)
	{
		num[i / 2] = n % 2 + '0';
	}
	puts(num);
			
	//数位遍历
	char num1[34] = { 0 };
	for (i = 31; i >= 0; i--, n /= 2)
	{
		num1[i] = n % 2 + '0';
	}
	puts(num);
	for (i = 0; num1[i]; i += 2)
	{
		putchar(num1[i]);
	}
	for (i = 1; num1[i]; i += 2)
	{
		putchar(num1[i]);
	}
	system("pause");
	return 0;
}