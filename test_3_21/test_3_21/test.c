#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int res;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			res = j * i;
//			printf("%dx%d=%d  ", j, i, res);
//			if ((i == 3 && j == 2) || (i == 4 && j == 2))
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求10 个整数中最大值
//int main()
//{
//	int a[] = { 0 };
//	int i = 0;
//	int max = 0;
//	printf("请输入10个整数\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	max = a[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	float res = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		res = res +flag*( 1.0/ i);
//		flag = -flag;
//	}
//	printf("%f\n", res);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
int main()
{
	int count = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("1到100中9的个数 = %d\n", count);
	return 0;
}