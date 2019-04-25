#define _CRT_SECURE_NO_WARNINGS 1
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y ,count =0;
	int arr1[40];
	int arr2[40];
	scanf("%d %d", &x, &y);
	for (int i = 0; i < 32; i++, x /= 2)
	{
		arr1[i] = x % 2;
	}
	for (int j = 0; j < 32; j++, y /= 2)
	{
		arr2[j] = y % 2;
	}
	for (int k = 0; k < 32; k++)
	{
		if (arr1[k] != arr2[k])
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return;
}