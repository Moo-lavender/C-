#define _CRT_SECURE_NO_WARNINGS 1
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
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
	printf("����һ���Ǹ�������");
	scanf("%d,", &n);
	s = DigitSum(n);
	printf("%d\n", s);
	system("pause");
	return 0;
}
