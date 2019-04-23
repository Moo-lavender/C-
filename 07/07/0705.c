#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现strlen
#include<stdio.h>
#include<stdlib.h>
int slen1(char arr[])
{
	int count = 0;
	char* p = arr;
	while (*p)
	{
		count++;
		p++;
	}
	return count;
}
int slen2(char *arr)
{
	if (*arr == '\0')
	{
		return 0;
	}
	else return 1 + slen2(arr + 1);
}
int main()
{
	char arr[20] = { "hello world!" };
	int ret1 = slen1(arr);
	printf("%d\n", ret1);
	int ret2 = slen2(arr);
	printf("%d\n", ret2);
	system("pause");
	return 0;
}