#define _CRT_SECURE_NO_WARNINGS 1
/*
//杨氏矩阵
有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N);
*/
//#include<stdio.h>
//#include<stdlib.h>
//int findNum(int a[][3], int x, int y, int f)
//{
//	int i = 0, j = y-1;
//	while (j >= 0 && i < x)
//	{
//		if (a[i][j] < f)
//		{
//			i++;
//		}
//		else if (a[i][j] > f)
//		{
//			j--;
//		}
//		else return 1;
//	}
//	 return 0;
//}
//int main()
//{
//	//int a[][3] = { 1, 2, 3, 4, 5 };前面括号可以少后面不可少，因为后面代表类型；int(a[3])[3];
//	int a[3][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
//	if (findNum(a, 3, 3, 7))
//	{
//		printf("找得到！ ");
//	}
//	else
//	{
//		printf("找不到！ ");
//	}
//	system("pause");
//	return 0;
//}