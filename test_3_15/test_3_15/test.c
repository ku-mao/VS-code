#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = --a;//ǰ��-- ��--�� ��ʹ��
//	//printf("a = %d b = %d/n", a, b);//9 9
//	//int b = a--;//����-- ����ʹ�ã���--
//	//printf("a = %d b = %d/n", a, b);//9 10
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	//int a = (int)3.14;//double
//	//�߼���&& �߼���||
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

//typedef ����������
//typedef unsigned int u_int;
//int main()
//{
//	//����һ���������
//	unsigned int age;
//	u_int age2;
//	return 0;
//}

//int main()
//{
//	 register int a = 0;//����aδ���ᱻƵ��ʹ��
//	 //register ���ǽ����a���ڼĴ�����
//	return 0;
//}

// static 1.���ξֲ�����
//		  2.����ȫ�ֱ���
//        3. ���κ���
//�ı��˱������������������� - �䳤
//���˾ֲ���ΧҲ������
//void test()
//{
//	int a = 1;//10��2 //�ֲ�����
//	static int a = 1;// 2��11 //���ξֲ�����
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

//static ����ȫ�ֱ���
//�ı���ȫ�ֱ�����������-��С��
//static ���ε�ȫ�ֱ���ֻ�����Լ����ڵ�.c�ļ���ʹ�ã�������Դ�ļ��в���ʹ��
//����һ��ȫ�ֱ���
//extern �����ⲿ����
//extern int g_val;
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//static���κ���
//�ı��˺�����������
//static ���εĺ���ֻ�����Լ����ڵ�.c�ļ���ʹ�ã�������Դ�ļ��в���ʹ��

//��������
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//strlen ��sizeof ��ʲô����
//1.����û���κι���
//2.strlen()��һ���⺯����ֻ���������ַ����ĳ��ȣ����ַ����Ŀ�ʼλ��������ַ��ĸ�����ֱ��'\0',�����в�����'\0'��
//3.sizeof()�ǲ�����������������ĳ��������ռ�ռ��С����λ���ֽ�

//#define �����ʶ������


int Max(int x, int y)
{
	return (x > y ? x : y);
}
//#define �����
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
//	int a = 10;//�������ͱ���a������ֵ10
//	//Ҫ�洢10
//	//Ҫ���ڴ�ռ�
//	//a�ڴ�����ʱ�����ڴ�������4���ֽڵĿռ�
//	//printf("%p\n", &a);//&ȡ��ַ������
//	int *p = &a;//p��ָ����� �����ַ
//	printf("%p\n", p);
//	//%p �Ե�ַ����ʽ���д�ӡ
//
//	return 0;
//}

int main()
{
	int a = 10;
	int* p = &a;
	char c = 'i';
	char* pc = &c;
	*p = 20;//*-�����ò����� *p ����a
	printf("%d\n", a);//20
	*pc = 'w';
	printf("%c\n", c);//w

	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(pc));//ָ���С��32λ������4���ֽڣ�64λ��8���ֽ�
	return 0;
}