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
//	int* p = &a;//p����һ��ָ�����
//	*p = 20;//* �����ò���
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

//����һ���������
//struct Book
//{
//	//���������ϸ��Ϣ
//	char name[30];//����
//	double price;//����
//	char id[30];//���
//};
////(*ָ��).����
//// ָ��->����
////������д���ȼ�
//
//int main()
//{
//	//����һ����
//	struct Book b1 = { "���", 55.6, "ISBN-101000" };
//	struct Book * ps = &b1;
//	printf("����: %s\n", (*ps).name);
//	printf("����: %s\n", ps->name);
//
//	printf("����: %s\n", b1.name);
//	printf("����: %lf\n", b1.price);
//	printf("���: %s\n", b1.id);
//
//	return 0;
//}
//
//int main()
//{
	/*int age = 10;
	if (age < 18)
		printf("δ����\n");*/

	/*int age = 10;
	if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");*/

//	int age = 10;
//	if (age < 18){
//		printf("δ����\n");
//		printf("����̸����\n");
//	}	
//	else if (age < 30 && age >= 18)
//		printf("����\n");
//	else if (age >= 30 && age < 60)
//		printf("������\n");
//	else if (age >= 60 && age < 90)
//		printf("����\n");
//	else
//		printf("����\n");
//
//	return 0;
//}

//int main()
//{
//	/*for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d������\n", i);
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
//	default://Ĭ��ѡ������ܱ�case��������
//		printf("�������\n");
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


//continue��������ѭ��������ִ�б���ѭ���������䣬�����´�ѭ��
//��ѭ��
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

//break ����ѭ�� ����ִ��ѭ�����
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