#define _CRT_SECURE_NO_WARNINGS 1
/*
//���Ͼ���
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);
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
//	//int a[][3] = { 1, 2, 3, 4, 5 };ǰ�����ſ����ٺ��治���٣���Ϊ����������ͣ�int(a[3])[3];
//	int a[3][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
//	if (findNum(a, 3, 3, 7))
//	{
//		printf("�ҵõ��� ");
//	}
//	else
//	{
//		printf("�Ҳ����� ");
//	}
//	system("pause");
//	return 0;
//}