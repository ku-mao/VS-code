#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//void test()
//{
//	static int a = 10;
//	a++;
//	printf("%d\n", a);
//
//}
//int main()
//{
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;//p就是一个指针变量
//	*p = 20;//* 解引用操作
//	printf("%d\n", a);//20
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//创建一个书的类型
//struct Book
//{
//	//描述书的详细信息
//	char name[30];//书名
//	double price;//定价
//	char id[30];//书号
//};
////(*指针).属性
//// 指针->属性
////这两种写法等价
//
//int main()
//{
//	//定义一本书
//	struct Book b1 = { "射雕", 55.6, "ISBN-101000" };
//	struct Book * ps = &b1;
//	printf("书名: %s\n", (*ps).name);
//	printf("书名: %s\n", ps->name);
//
//	printf("书名: %s\n", b1.name);
//	printf("定价: %lf\n", b1.price);
//	printf("书号: %s\n", b1.id);
//
//	return 0;
//}
//
//int main()
//{
	/*int age = 10;
	if (age < 18)
		printf("未成年\n");*/

	/*int age = 10;
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");*/

//	int age = 10;
//	if (age < 18){
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}	
//	else if (age < 30 && age >= 18)
//		printf("青年\n");
//	else if (age >= 30 && age < 60)
//		printf("中老年\n");
//	else if (age >= 60 && age < 90)
//		printf("老年\n");
//	else
//		printf("长寿\n");
//
//	return 0;
//}

//int main()
//{
//	/*for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d是奇数\n", i);
//		}
//	}*/
//
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d  ", i);
//		i += 2;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:	
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default://默认选项，处理不能被case处理的情况
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//		printf("m = %d n = %d", m, n);//m = 5 n = 3
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//continue结束本次循环，不再执行本次循环下面的语句，进入下次循环
//死循环
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		else
//		{
//			printf("%d ", i);
//			i++;
//		}
//	}
//	return 0;
//}

//break 跳出循环 不再执行循环语句
int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 5)
		{
			break;
		}
		else
		{
			printf("%d ", i);
			i++;
		}
	}
	return 0;
}