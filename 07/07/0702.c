#define _CRT_SECURE_NO_WARNINGS 1
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
#include<stdio.h>
#include<stdlib.h>
int mul(int n, int k)
{
	if (k > 1)
	{
		return (n * mul(n, k - 1));
	}
	else return n;

}
int main()
{
	int n = 0, k = 0;
	int s;
	scanf("%d %d", &n, &k);
	s = mul(n, k);
	printf("%d��%d�η��ǣ�%d", n, k, s);
	system("pause");
	return 0;
}
