#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>
//
//int main()
//{
//	int num1 = 10;   //这个语句的实际含义：在内存上创建一个4字节（向内存申请4字节用来储存数据）的名叫num的整形变量变量
//	int num2 = -10;

	//00000000 00000000 00000000 00001010  10的原码
	//00000000 00000000 00000000 00001010  10的反码
	//00000000 00000000 00000000 00001010  10的补码
	

	//10000000 00000000 00000000 00001010 -10的原码
	//11111111 11111111 11111111 11110101 -10的反码
	//11111111 11111111 11111111 11110110 -10的补码
//}

//假设计算 1 - 1

//00000000 00000000 00000000 00000001 1的补码
//11111111 11111111 11111111 11111111 -1的补码
//00000000 00000000 00000000 00000000 结果是0 运算过程正确

//00000000 00000000 00000000 00000001 1的原码
//10000000 00000000 00000000 00000001 -1的原码
//10000000 00000000 00000000 00000010 结果是-2 也就是说运算过程错误


#include <stdio.h>
////代码2
//int check_sys()
//{
//	union
//	{
//		int i;
//		int c;
//	}un;
//	un.i = 2;
//	return un.c;
//}
//
////int check_sys()
////{
////	int i = 1;
////	return (*(char*)&i);
////}
//int main()
//{
//	int ret = check_sys();
//	printf("%d", ret);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int i = 1;
//	if (*(char*)&i == 1)
//	{
//		printf("小端");
//	}
//	else 
//	{
//		printf("大端");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//
//}


#include <stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return *(char*)&i;   //01
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret != 1)
//	{
//		printf("da端\n");
//	}
//	else
//	{
//		printf("xiao端\n");
//	}
//	return 0;
//}

#include <stdio.h>
//
//int  main()
//{
//
//}


//输出什么？
//这个肯定与整型提升有关
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}




#include <stdio.h>
int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	//按照补码的形式进行运算，最后格式化成为有符号整数
	return 0;
}
