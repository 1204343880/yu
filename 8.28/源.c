#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//#include<stdio.h>
//#include<limits.h>
//
//int main()
//{
//	INT_MAX;
//
//	int num1 = 10; //以创建num为例，创建一个整形变量，叫num，这时num向内存申请4个字节来存放数据
//	//4个字节 32个比特位
//	// 正数 原反补码相同
//	//00000000 00000000 00000000 00001010 --原码
//	//00000000 00000000 00000000 00001010 --反码
//	//00000000 00000000 00000000 00001010 --补码
//
//	int num2 = -10;
//	//负数按下面的操作
//	//10000000 00000000 00000000 00001010 --原码
//	//11111111 11111111 11111111 11110101 --反码 （除了符号位全部取反）
//	//11111111 11111111 11111111 11110110 --补码 （在最后一位+1）
//}

////代码1
//#include <stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);  //原理：对i进行取地址（int形式） 然后强制类型转化成char类型指针，char类型在解引用的时候又只读取一个字节，就可以知道先读取到的是哪个字节，进而就可以判断还是大端还是小端
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//代码2
//#include <stdio.h>
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;    //这个利用的是结构体的特征，也就是字节按最小的倍数来？
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 0x00000001;
	int b = (char)a;
		if (b == 1)
		{
			printf("小端\n");
		}
		else
		{
			printf("大端\n");
		}
		return 0;
}