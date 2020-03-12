#include <stdio.h>

//就近原则
//int main()
//{
//	int num = 10;
//	{
//		int num = 1;
//		printf("%d\n",num);
//		return 0;
//	}
//}
/**变量的作用域
int main()
{
	{
		int num = 8;
	}
	printf("num = %d\n" ,num);
	return 0;
}
编译有错，因为num是局部变量，不能再全局使用
*/

/*
int main()
{
	int num = 8;
	{
		printf("num = %d\n",num);
	}
	return 0;
}
编译正确，num是全局变量可以在全局使用
*/

/*c语言中内部的数据类型的大小 计算机中最小的单位是bit 
byte =1字节=8bit
lKb = 1024 byte 
1Mb = 1024 Kb
Tb ...
int main()
{
	printf("char类型的大小 = %d 个字节\n" ,sizeof(char));
	printf("short类型的大小 = %d 个字节\n", sizeof(short));
	printf("int类型的大小 = %d 个字节\n", sizeof(int));
	printf("long类型的大小 = %d 个字节\n", sizeof(long));
	printf("long long类型的大小 = %d 个字节\n", sizeof(long long));
	printf("float类型的大小 = %d 个字节\n", sizeof(float));
	printf("double类型的大小 = %d 个字节\n", sizeof(double));
	return 0;
}
*/

//输入输出
int main()
{
	int num = 0;
	scanf("请输入一个整数：%d\n",&num);
	printf("%d", num);
	return 0;
}