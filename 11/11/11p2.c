#define _CRT_SECURE_NO_WARNINGS 1
//��ȡһ�������������������е�ż��λ������λ
#include<stdio.h>
#include<stdlib.h>
int main2()
{	
	int n; 
	printf("����һ��������>");
	scanf("%d", &n);
	int i;
	//λ����
	for (i = 31; i >= 0; i -= 2)
	{
		putchar((n >> i & 1) + '0');
	}
	putchar('\n');
	for (i = 30; i >= 0; i -= 2)
	{
		putchar((n >> i & 1) + '0');
	}
			
	//��λ����
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
			
	//��λ����
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