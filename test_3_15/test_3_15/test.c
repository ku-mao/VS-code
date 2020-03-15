#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = --a;//前置-- 先--， 再使用
//	//printf("a = %d b = %d/n", a, b);//9 9
//	//int b = a--;//后置-- 是先使用，再--
//	//printf("a = %d b = %d/n", a, b);//9 10
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	//int a = (int)3.14;//double
//	//逻辑与&& 逻辑或||
//	int a = 0;
//	int b = 5;
//	if (a&&b)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//// 	if (a > b)
////		max = a;
////	else
////	    max = b;
//	max = (a > b) ? (a) : (b);
//	printf("max = %d\n", max);
//	return 0;
//}

//typedef 类型重命名
//typedef unsigned int u_int;
//int main()
//{
//	//定义一个年龄变量
//	unsigned int age;
//	u_int age2;
//	return 0;
//}

//int main()
//{
//	 register int a = 0;//假设a未来会被频繁使用
//	 //register 就是建议把a放在寄存器中
//	return 0;
//}

// static 1.修饰局部变量
//		  2.修饰全局变量
//        3. 修饰函数
//改变了变量的生命变量的周期 - 变长
//出了局部范围也不销毁
//void test()
//{
//	int a = 1;//10个2 //局部变量
//	static int a = 1;// 2到11 //修饰局部变量
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static 修饰全局变量
//改变了全局变量的作用域-变小了
//static 修饰的全局变量只能在自己所在的.c文件中使用，在其他源文件中不可使用
//声明一下全局变量
//extern 声明外部符号
//extern int g_val;
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//static修饰函数
//改变了函数的作用域
//static 修饰的函数只能在自己所在的.c文件中使用，在其他源文件中不可使用

//声明函数
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//strlen 和sizeof 有什么区别
//1.他们没有任何关联
//2.strlen()是一个库函数，只能用来求字符串的长度（从字符串的开始位置向后数字符的个数，直到'\0',个数中不包含'\0'）
//3.sizeof()是操作符，是用来计算某个变量所占空间大小，单位是字节

//#define 定义标识符常量


int Max(int x, int y)
{
	return (x > y ? x : y);
}
//#define 定义宏
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("max=%d\n", Max(a, b));
//	return 0;
//
//}

//int main()
//{
//	int a = 10;//创建整型变量a，并赋值10
//	//要存储10
//	//要有内存空间
//	//a在创建的时候，向内存申请了4个字节的空间
//	//printf("%p\n", &a);//&取地址操作符
//	int *p = &a;//p是指针变量 保存地址
//	printf("%p\n", p);
//	//%p 以地址的形式进行打印
//
//	return 0;
//}

int main()
{
	int a = 10;
	int* p = &a;
	char c = 'i';
	char* pc = &c;
	*p = 20;//*-解引用操作符 *p 就是a
	printf("%d\n", a);//20
	*pc = 'w';
	printf("%c\n", c);//w

	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(pc));//指针大小在32位机器是4个字节，64位是8个字节
	return 0;
}