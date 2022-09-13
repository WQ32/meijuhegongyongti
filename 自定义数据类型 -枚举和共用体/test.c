#include <stdio.h>

//枚举类型

//enum Sex
//{
//	//枚举的可能取值 - 常量
//	MALE,    //0
//	FEMALE=9,  //1
//	SECRET   //2
//};

//法一：
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//法一更好，看枚举的优点

////法二：
//#define RED 0
//#define GREEN 1
//#define SECRET 2


//int main()
//{
//	/*enum Sex s = MALE;    //这里s就是取整型的值，大小就是4个字节
//	enum Color c = BLUE;*/
//	enum Color c = 2;
//	//这里是错误的，两边类型不同，只能赋已经给过的变量
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//  printf("%d\n",sizeof(s));
//	// 0 1 2   原本
//	// 0 9 10  初始值设置
//	// 2 3 6
//	return 0;
//}

////联合体 - 共用体  --成员公用一块内存空间，其大小至少是最大成员的大小
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
//	//地址都是从内存的开头开始算的
//	// a和b放在一起，占用4个空间
//	return 0;
//}

////判断当前计算机的大小端存储
//
//int check_sys()
//{
//	//法一：
//	/*int a = 1;
//	return *(char*)&a;*/
//	//法二：
//	union
//	{
//		char c;
//		int i;
//	} u;
//	u.i = 1;
//	return u.c;
//	//c和i放在一起，c在开头的位置，可根据它判断是小端还是大端
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
//		printf("小端存储");
//	}
//	else
//	{
//		printf("大端存储");
//	}
//	return 0;
//}


//联合体 - 共用体 大小的计算
//1.至少是最大成员的大小
//2.当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍

union Un
{
	int a;
	//int类型，对齐数是4和8比较，结果就是4
	char arr[5];
	//char类型，对齐数是1和8比较，结果就是1
	//因为5不是最大对齐数4的整数倍，所以，就要浪费掉3个字节，占8个字节空间，就是4的倍数了
};

int main()
{
	union Un n;
	printf("%d\n", sizeof(n));
	return 0;
}