#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数返回参数二进制中 1 的个数 
#include<stdio.h>
#include<stdlib.h>
int count_ont_bits1(unsigned int value)
{
		int i, count = 0;
		for (i = value; i; i /= 2) //数位遍历
		{
			count += i % 2;
	
		}
		return count;
}
	int count_ont_bits2(unsigned int value)
	{
		int  count = 0;
		while (value &= value - 1) //每次把最后一位的1用按位与操作消去0
		{
			count++;
		}
		return count +1;
	}
	int main1()
	{
		int n, ret = 0;
		printf("输入一个整数：>");
		scanf("%d", &n);
		ret = count_ont_bits2(n);
		printf("%d\n", ret);
		system("pause");
		return 0;

		system("pause");
		return 0;
	}
