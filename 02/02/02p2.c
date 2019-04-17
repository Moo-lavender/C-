#define _CRT_SECURE_NO_WARNINGS 1
//2. 不允许创建临时变量，交换两个数的内容
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	int i, j;
	printf("输入整数 i= ");
	scanf("%d", &i);
	printf("输入整数 j= ");
	scanf("%d", &j);
	i = i + j;
	j = i - j;
	i = j - i;
	printf("i=%d", i);
	printf("\nj=%d", j);
	system("pause");
	return 0;
}
