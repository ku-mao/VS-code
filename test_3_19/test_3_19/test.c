#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>

//�Ӵ�С���
//������
void Swap(int* x, int* y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = 15;
	if (a < b)
	{
		Swap(&a, &b);
	}
	if (a < c)
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}


//дһ�������ӡ1-100֮������3�ı���������
//
//int main()
//{
//	int i = 3;
//	while (i < 100)
//	{
//		printf("%d ", i);
//		i += 3;
//	}
//	return 0;
//}

//���������������������������Լ��
//int MaxFactor(int x, int y)
//{
//	if (y == 0)
//	{
//		return x;
//	}
//	else
//	{
//		return MaxFactor(y, x%y);
//	}
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", MaxFactor(a, b));
//	return 0;
//}

//��ӡ100~200֮�������
//int main()
//{
//
//	return 0;
//}