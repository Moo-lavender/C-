#define _CRT_SECURE_NO_WARNINGS 1
//5.求两个数的最大公约数。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k, t;
	printf("输入两个整数：\n");
	scanf("%d%d", &i, &j);
	if (i<j);
	{
		t = i;
		i = j;
		j = t;
	}
	while (i%j != 0)
	{
		k = i%j;
		i = j;
		j = k;
	}
	printf("最大公约数是：%d\n", j);
	system("pause");
	return 0;
}

