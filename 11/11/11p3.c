#define _CRT_SECURE_NO_WARNINGS 1
//输出一个整数的每一位。 
#include<stdio.h>
#include<stdlib.h>
int main3()
{
	int n = 0;
	int arr[100];
	scanf("%d", &n);
	for (int i = 0; i < 32; i++, n /= 2)
	{
		 arr[ i] = n % 2;
	}
	for (int i = 31; i >= 0; i--)
	{
		printf(" %d ", arr[i]);
	}
	system("pause");
	return 0;
}