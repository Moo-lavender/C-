#define _CRT_SECURE_NO_WARNINGS 1
//�����ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ�� 
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
}// * / ������λ����
int main1()
{
	int n, ret = 0;
	printf("����һ��������>");
	scanf("%u", &n);
	ret = reverse_bits(n);
	printf("%u\n", ret);
	system("pause");
	return 0;
}

