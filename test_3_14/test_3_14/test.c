#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//#define MAX = 1000;
////�Ա�
////����һ���Ա�ö������
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};

//int main()
//{
//	//����
//	//1.���泣��
//	// 300;
//	// 3.1425;
//	//2.const ���εĳ����� ���ܸı���ֵ
//	const int num = 10;
//	num = 40;
//	printf("%d\n",num);
//  const int n = 10;
//	int arr[n] = { 0 };
//	//��Ҳ�ǲ��еģ���Ϊn���ʻ��Ǳ�����ֻ����ֵ���ܸı�
//  // 3.#define  ���εı�ʶ������
//   int a = MAX;
//   printf("a = %d" , a);
//	//4.ö�ٳ���
//	//ö��--- һһ�о�
//	//�Ա��С�Ů������
//	//��ԭɫ���졢�ơ���
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
//	"abc";//�����ַ���
//	"";//���ַ���
//	//�ַ�������
//	//�����ַ�����˵���ַ����Ľ�β�����һ��'\0' ���ַ��������ı�־
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	//ת���ַ�
//	//\t - ˮƽ�Ʊ��
//	//\a - �����ַ�������
//	// \n -����
//	// \r - �س�
//	// \ddd ��ʾ1- 3���˽��Ƶ�����
//	// \xdd dd ��ʾ2��ʮ�����Ƶ�����
//	printf("%d\n",strlen("c:\test\32\test.c"));//13
//	printf("%c\n", '\32');//��8���Ƶ���ת��Ϊ10���ƺ���ΪASCII��ֵ������Ǹ��ַ�
//	printf("%c\n", '\x41');//��16���Ƶ���ת��Ϊ10���ƺ�......
//	return 0;
//
//}


//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0) \n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("�ô���:%d\n",line);
//		line++;
//	}
//
//	return 0;
//}


//����
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
//	int sum = 0;//������ֵ��ʱ����������
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


//����-��һ����ͬ����Ԫ�صļ���
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
//	int a = 5 / 2;//��
//	int b = 5 % 2;//ȡģ
//	int num1 = 20;
//	int num2 = 10;
//
//	num1&num2;//��λ��
//	num1|num2;//��λ��
//	num1^num2;//��λ���
//	
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

int main()
{
	//int a = 0;
	////��ֵ������
	//a = 10;

	//a = a + 1;
	//a += 1;

	//��Ŀ������
	//0-��ʾ��
	//��0-��ʾ�� 1 -1
	//int a = 0;
	//printf("%d\n", !a);//!ȡ��

	//sizeof��λ���ֽڣ���ռ�ռ�Ĵ�С
	int a = 10;
	printf("%d\n",sizeof(a));//4
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40

	int sz = sizeof(arr) / sizeof(arr[0]);//10
	printf("%d\n", sz);

	return 0;
}