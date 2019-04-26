#define _CRT_SECURE_NO_WARNINGS 1
//函数的返回值value的二进制位模式从左到右翻转后的值。 
unsigned int reverse_bits(unsigned int value)
{
	int i, count = 0;
	int tmp, sum = 0;
	for (i = 0; i < 32; i++, value /= 2)
	{
		tmp = value % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}// * / 理解成移位运算
int main1()
{
	int n, ret = 0;
	printf("输入一个整数：>");
	scanf("%u", &n);
	ret = reverse_bits(n);
	printf("%u\n", ret);
	system("pause");
	return 0;
}

