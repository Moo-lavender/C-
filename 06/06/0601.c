#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
#include<stdio.h>
#include<stdlib.h>
void pri_mul(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %2d *%2d=%3d ", j, i, i*j);
			//调整宽度空格补位，%02d用0补位，%-2d后面补空格即左对齐。零宽度和负宽度不能同时出现。%-6.21f :> 6长度，2精度。
		}
		printf("\n");
	}
}

int main1()
{
	int i;
	printf("请输入你要打印乘法表的行数：>");
	scanf("%d", &i);
	pri_mul(i);

	system("pause");
	return 0;
}
