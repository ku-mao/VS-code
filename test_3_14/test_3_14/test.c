#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//#define MAX = 1000;
////性别
////创建一个性别枚举类型
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};

//int main()
//{
//	//常量
//	//1.字面常量
//	// 300;
//	// 3.1425;
//	//2.const 修饰的常变量 不能改变其值
//	const int num = 10;
//	num = 40;
//	printf("%d\n",num);
//  const int n = 10;
//	int arr[n] = { 0 };
//	//这也是不行的，因为n本质还是变量，只是其值不能改变
//  // 3.#define  修饰的标识符常量
//   int a = MAX;
//   printf("a = %d" , a);
//	//4.枚举常量
//	//枚举--- 一一列举
//	//性别：男、女、保密
//	//三原色：红、黄、蓝
//	int num = 10;
//	enum Sex s = MALE;
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	"abc";//字面字符串
//	"";//空字符串
//	//字符串数组
//	//对于字符串来说，字符串的结尾处存放一个'\0' 是字符串结束的标志
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	//转义字符
//	//\t - 水平制表符
//	//\a - 警告字符，蜂鸣
//	// \n -换行
//	// \r - 回车
//	// \ddd 表示1- 3个八进制的数字
//	// \xdd dd 表示2个十六进制的数字
//	printf("%d\n",strlen("c:\test\32\test.c"));//13
//	printf("%c\n", '\32');//把8进制的数转化为10进制后，作为ASCII码值代表的那个字符
//	printf("%c\n", '\x41');//把16进制的数转化为10进制后......
//	return 0;
//
//}


//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗(1/0) \n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲代码:%d\n",line);
//		line++;
//	}
//
//	return 0;
//}


//函数
// int Add(int x, int y)
//{
//	int sum = 0;
//	 sum = x + y;
//	return sum;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//不给初值的时候就是随机数
//	int a = 100;
//	int b = 30;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1,num2);
//	printf("%d\n", sum);
//	
//	//sum = a + b;
//	sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Max(a, b));
//	return 0;
//}


//数组-放一组相同类型元素的集合
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7,  8, 9, 10 };
//	//int arr[] = { 1, 2, 3 };
//	printf("%d\n", arr[4]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 5 / 2;//除
//	int b = 5 % 2;//取模
//	int num1 = 20;
//	int num2 = 10;
//
//	num1&num2;//按位与
//	num1|num2;//按位或
//	num1^num2;//按位异或
//	
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

int main()
{
	//int a = 0;
	////赋值操作符
	//a = 10;

	//a = a + 1;
	//a += 1;

	//单目操作符
	//0-表示假
	//非0-表示真 1 -1
	//int a = 0;
	//printf("%d\n", !a);//!取反

	//sizeof单位是字节，所占空间的大小
	int a = 10;
	printf("%d\n",sizeof(a));//4
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40

	int sz = sizeof(arr) / sizeof(arr[0]);//10
	printf("%d\n", sz);

	return 0;
}