#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	ch = getchar();//��ȡ�ַ�
//	putchar(ch);//��ӡ�ַ�
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//EOF -and of file - �ļ�������־ - �����ļ�ĩβ
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
//	printf("����������:>");
//	scanf("%s", input);
//	printf("��ȷ������(Y/N):>");
//	while (getchar() != EOF)
//	{
//		ch = getchar();
//	}
//
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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
//	//�����±��Ǵ�0��ʼ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//forѭ���е� ��ʼ�����жϣ����� ����ѡ���Ե�ʡ��
//	//���ж�
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
//		k++;//ѭ��0��	
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