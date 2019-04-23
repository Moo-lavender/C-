#define _CRT_SECURE_NO_WARNINGS 1
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
#include<stdio.h>
#include<stdlib.h>
int DigitSum(int n)
{
	int a[20] = { 0 };
	int i = 0;
	int	j = n;
	int sn = 0;
	while (j != 0)
	{
		a[i] = j % 10;
		i++;
		j = j / 10;
	}
	for (int x = 0; x < i; x++)
	{
		sn += a[x];
	}
	return sn;

}

int main()
{
	int n, s;
	printf("输入一个非负整数：");
	scanf("%d,", &n);
	s = DigitSum(n);
	printf("%d\n", s);
	system("pause");
	return 0;
}
