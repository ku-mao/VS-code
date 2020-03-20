#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>

//从大到小输出
//三个数
//void Swap(int* x, int* y)
//{
//	*x = *x ^ *y;
//	*y = *x ^ *y;
//	*x = *x ^ *y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 15;
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//写一个代码打印1-100之间所有3的倍数的数字
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


//给定两个数，求这两个数的最大公约数
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


//打印100~200之间的素数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//打印1000年到2000年之间的闰年
//可以被4整除但不能被100整除-普通闰年
//可以被400整除-世纪闰年
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d ", i);
		}
	}
	return 0;
}
