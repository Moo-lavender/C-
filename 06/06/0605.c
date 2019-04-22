#define _CRT_SECURE_NO_WARNINGS 1
//5.实现一个函数，判断一个数是不是素数。
#include<stdio.h>
#include<stdlib.h>
int judge(int i)
{
	int j;
	for (j = 2; j <= i / 2; j++)
	{
		if (i%j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i, r;
	printf("输入一个整数：>");
	scanf("%d", &i);
	r = judge(i);
	if (r == 1)
	{
		printf("%d是素数\n", i);
	}
	else
		printf("%d不是素数\n", i);
	system("pause");
	return 0;
}
