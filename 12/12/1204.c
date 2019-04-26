#define _CRT_SECURE_NO_WARNINGS 1
//4. 有一个字符数组的内容为:"student a am i",请你将数组的内容改为"i am a student".
#include<stdio.h>
#include<stdlib.h>
void reverse(char *arr, int start, int end)
{
	int tmp, i, j;
	for (i = start, j = end; i < j; i++, j--)
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}
int main()
{
	int i,end, start = 0;
	char arr[30] = { "student a am i" };
	for (i = 0; arr[i]; i++)
	{
		if (arr[i] == ' ')
		{
			end = i - 1;
			reverse(arr, start, end);
			start = i + 1;
		}
	}
	reverse(arr, start, i-1);
	reverse(arr, 0, i - 1);

	for ( i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%c", arr[i]);
	}
	system("pause");
	return 0;
}