#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 6;
	int len = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到,下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("没有此元素\n");
	}
	return 0;
}

//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("******************\n");
//	printf("******1.play******\n");
//	printf("******0.exit******\n");
//	printf("******************\n");
//}
////RAND_MAX-32676
////rand函数返回0-32676的一个随机整数
////time 函数
////返回一个时间戳
////时间戳指的是
//void game()
//{
//	int guess = 0;
//	//1.电脑生成一个随机数
//	int ret = rand()%100+1;
//	//printf("ret\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//		    break;
//		}	
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}