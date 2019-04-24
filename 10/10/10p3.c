#define _CRT_SECURE_NO_WARNINGS 1
//3.在屏幕上打印杨辉三角。//一维数组
#include<stdio.h>
#include<stdlib.h>
void printArray(int * arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

int main()
{
	int data[10];
	int i, j, n = 10;

	data[0] = 1;
	puts("1");
	for (i = 1; i < n; i++)
	{
		data[i] = 1;
		for (j = i - 1; j > 0; j--)
		{
			data[j] += data[j - 1];
		}
		data[0] = 1;

		printArray(data, i + 1);
	}
	system("pause");
	return 0;
}