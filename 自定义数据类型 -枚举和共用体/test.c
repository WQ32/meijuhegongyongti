#include <stdio.h>

//ö������

//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ����
//	MALE,    //0
//	FEMALE=9,  //1
//	SECRET   //2
//};

//��һ��
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//��һ���ã���ö�ٵ��ŵ�

////������
//#define RED 0
//#define GREEN 1
//#define SECRET 2


//int main()
//{
//	/*enum Sex s = MALE;    //����s����ȡ���͵�ֵ����С����4���ֽ�
//	enum Color c = BLUE;*/
//	enum Color c = 2;
//	//�����Ǵ���ģ��������Ͳ�ͬ��ֻ�ܸ��Ѿ������ı���
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//  printf("%d\n",sizeof(s));
//	// 0 1 2   ԭ��
//	// 0 9 10  ��ʼֵ����
//	// 2 3 6
//	return 0;
//}

////������ - ������  --��Ա����һ���ڴ�ռ䣬���С����������Ա�Ĵ�С
//union Un
//{
//	char a;
//	int b;
//};
//
//int main()
//{
//	union Un n;
//	printf("%d\n", sizeof(n));
//	printf("%p\n", &n);
//	printf("%p\n", &n.a);
//	printf("%p\n", &n.b);
//	//��ַ���Ǵ��ڴ�Ŀ�ͷ��ʼ���
//	// a��b����һ��ռ��4���ռ�
//	return 0;
//}

////�жϵ�ǰ������Ĵ�С�˴洢
//
//int check_sys()
//{
//	//��һ��
//	/*int a = 1;
//	return *(char*)&a;*/
//	//������
//	union
//	{
//		char c;
//		int i;
//	} u;
//	u.i = 1;
//	return u.c;
//	//c��i����һ��c�ڿ�ͷ��λ�ã��ɸ������ж���С�˻��Ǵ��
//}
//
//
//int main()
//{
//	int a = 1;
//	// 00 00 00 01
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С�˴洢");
//	}
//	else
//	{
//		printf("��˴洢");
//	}
//	return 0;
//}


//������ - ������ ��С�ļ���
//1.����������Ա�Ĵ�С
//2.������Ա��С��������������������ʱ����Ҫ���뵽����������������

union Un
{
	int a;
	//int���ͣ���������4��8�Ƚϣ��������4
	char arr[5];
	//char���ͣ���������1��8�Ƚϣ��������1
	//��Ϊ5������������4�������������ԣ���Ҫ�˷ѵ�3���ֽڣ�ռ8���ֽڿռ䣬����4�ı�����
};

int main()
{
	union Un n;
	printf("%d\n", sizeof(n));
	return 0;
}