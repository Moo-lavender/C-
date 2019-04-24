#define _CRT_SECURE_NO_WARNINGS 1
/*
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
*/
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	char murder = 0;
	for (murder = 'A'; murder < 'D'; murder++)
	{
		if (('A' != murder) + ('C' == murder) + ('D' == murder) + ('D' != murder) == 3)
		{
			printf("%c是凶手\n", murder);
		}
	}

	system("pause");
	return 0;
}