#include <stdio.h>

//�ͽ�ԭ��
//int main()
//{
//	int num = 10;
//	{
//		int num = 1;
//		printf("%d\n",num);
//		return 0;
//	}
//}
/**������������
int main()
{
	{
		int num = 8;
	}
	printf("num = %d\n" ,num);
	return 0;
}
�����д���Ϊnum�Ǿֲ�������������ȫ��ʹ��
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
������ȷ��num��ȫ�ֱ���������ȫ��ʹ��
*/

/*c�������ڲ����������͵Ĵ�С ���������С�ĵ�λ��bit 
byte =1�ֽ�=8bit
lKb = 1024 byte 
1Mb = 1024 Kb
Tb ...
int main()
{
	printf("char���͵Ĵ�С = %d ���ֽ�\n" ,sizeof(char));
	printf("short���͵Ĵ�С = %d ���ֽ�\n", sizeof(short));
	printf("int���͵Ĵ�С = %d ���ֽ�\n", sizeof(int));
	printf("long���͵Ĵ�С = %d ���ֽ�\n", sizeof(long));
	printf("long long���͵Ĵ�С = %d ���ֽ�\n", sizeof(long long));
	printf("float���͵Ĵ�С = %d ���ֽ�\n", sizeof(float));
	printf("double���͵Ĵ�С = %d ���ֽ�\n", sizeof(double));
	return 0;
}
*/

//�������
int main()
{
	int num = 0;
	scanf("������һ��������%d\n",&num);
	printf("%d", num);
	return 0;
}