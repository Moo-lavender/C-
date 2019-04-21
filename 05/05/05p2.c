#define _CRT_SECURE_NO_WARNINGS 1
//2.写代码可以在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回 - 1.（折半查找）
#include<stdio.h>
#include<stdlib.h>
int b_search(int a[], int left, int right, int k)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else return(mid);
	}
	return (-1);

}
int main2()
{
	int i;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 6;
	int left = 0;
	int right = (sizeof(a) / sizeof(a[0])) - 1;

	i = b_search(a, left, right, k);
	if (-1 == i)
	{
		printf("输入错误，找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d", i);
	}
	system("pause");
	return 0;
}