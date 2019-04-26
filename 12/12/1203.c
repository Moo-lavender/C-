#define _CRT_SECURE_NO_WARNINGS 1
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 请找出这个数字。（使用位运算）
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main3()
{
	int a[20] = { 1, 2, 5, 8, 7, 8, 7, 4, 5, 2, 1,  };
	int ret = 0;
	for (int i = 0; i < 20; i++)
	{
		ret ^= a[i];  //按位异或
	}
	printf("%d\n",ret);
	system("pause");
	return 0;
} 
