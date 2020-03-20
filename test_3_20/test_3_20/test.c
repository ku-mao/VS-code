#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	ch = getchar();//获取字符
//	putchar(ch);//打印字符
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//EOF -and of file - 文件结束标志 - 放在文件末尾
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码:>");
//	scanf("%s", input);
//	printf("请确认密码(Y/N):>");
//	while (getchar() != EOF)
//	{
//		ch = getchar();
//	}
//
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//数组下标是从0开始
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//for循环中的 初始化，判断，调整 可以选择性的省略
//	//当判断
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;//循环0次	
//	return 0;
//}


//0 1 2 3 4
//int main()
//{
//	int i = 0;
//	do 
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	} while (i < 10);
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int ret = 1;
	while (i <= n)
	{
		ret = ret * i;
		i++;
	}
	printf("%d\n", ret);
	return 0;
}