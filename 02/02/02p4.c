#define _CRT_SECURE_NO_WARNINGS 1
//4.将三个数按从大到小输出。
#include<stdio.h>
#include<stdlib.h>
int main4()
{
	int i, j, k, max;
	printf("请输入三个整数\n");
	scanf("%d %d %d", &i, &j, &k);
	max = i;
	if (j>i)
	{
		max = j;
		if (k>j)
		{
			max = k;
		}
	}
	else if (k>i)
		max = k;
	printf("最大的数是：%d", max);
	system("pause");
	return 0;
}
