#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	printf("%d", arr[1]);
//}
//

#include <stdio.h>
//int main()
//{
//	int arr[10] 
//
//	printf("
//}

#include <stdio.h>
//
//int* test()
//{
//	int a = 100;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//
//	printf("%d\n", *p);
//	printf("%d", *p);
//	return 0;
//}
//

#include <stdio.h>
//
//int main()
//{
//	int* p = NULL;
//}

#include <stdio.h>
//
//int* test()
//{
//	int a = 100;
//	return a;
//}
//int main()
//{
//	int p = test();
//
//	printf("%d\n", p);
//	return 0;
//}

//
////不用下标访问数组
#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//
//	//数组名在大部分情况下都是代表首元素地址 
//   //	int* p = &arr[0]; 
//	int* p = arr;
//  
//
//	for (int i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++; //这个地方++到底应该是哪个加加 还是*p
//	}
//
//	p = arr;
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p++) );
////		printf("%d ", *(p+i)); 这个可行的原因是 只是+而已 对指针p没有进行实际性的处理
////		printf("%d ", *(arr+i) );这个形式也是可以的 但是不能和上面一样进行arr++ 因为arr就已经代表首元素地址，是固定的 不能操作
////		printf("%d ", i[arr]);
//	}
//
//}


#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//
//	for (int i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	p = arr;
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}


#include <stdio.h>
//
//int main()
//{
//#define N_VALUES 5
//
//	//这个有点抽象啊 老弟   明明都是float类型 
//	
//	//但我这样想就错了 因为虽然数值上不能乱加 但是地址都是以字节为单位 可以随意处理的  
//	// 我看到 vp = &values[0]居然下意识认为这是错的 低级错误
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//}

#include<stdio.h>
//
//int main()
//{
//	char a = 8;
//	int b = 120;
//
//
//	printf("%d",a);
//}

#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	//来判断一下 他俩相当于地址的减法
//	//刚好差36位地址  %d又是读取整形的 所以不是36而是9 等等绝对不可以这样理解
//	//因为整形只是个形式 并不会因为 你本来是36   %d一次读4个 所以是9
//	printf("%c\n", &arr[9]-&arr[0]);
//}



#include<stdio.h>
//
//int main()
//{
//	int b = 100;
//	char a = 'a';
//
//	a = b;
//	printf("%c\n", a);
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	printf("%d\n", &arr1[9] - &arr1[0]);
//	printf("%d\n", &arr2[9] - &arr2[0]);
//
//	printf("%d\n", &arr2[9] - &arr1[0]);
//}



#include<stdio.h>
//
////循环实现
//int my_strlen1(char* s)
//{
//	int num = 0;
//	while (*s != '\0')
//	{
//		num++;
//		s++;   //昨天刚研究了指针 今天就用错 真是失败啊    //话说这个++跳过几个地址 我好像还真没研究过 *p++ 和 p++ 又或者是 *（p++）的情况
//	}
//
//	return num;
//}
//
////递归实现
//int my_strlen2(char* s)
//{
//	if(*s != '\0')
//	{
//		return my_strlen2(++s)+1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";    //说到这个又想起来了 \0也算一位的  字符数组中
//
//	//strlen是求长度的 还有一个求长度的来着 是啥来着 我都忘了！ sizeof 他俩区别都忘了
//
//	//strlen是用来求一个字符串（string）的长度，因此strlen不能用来求int类型的数组长度，只能求char类型的数字长度。 且不会算\0
//	//sizeof能计算变量或者数据类型所占用的内存（以字节为单位）。用sizeof计算数组长度时，sizeof不关心数组内部存储的是什么类型的数据。 并且会算\0那个位置
////	int length = my_strlen1(arr);
//	int length = my_strlen2(arr);
//
//	printf("%d", length);
//	return 0;
//}


//指针-指针实现

//#include<stdio.h>
//int my_strlen3(char* s)
//{
//	char* a = s;
//	while (*s != '\0')
//	{
//		s++; 
//	}
//	return s - a;
//}
//
//int main()
//{
//	char arr[] = "abcdef";    
//	int length = my_strlen3(arr);
//
//	printf("%d", length);
//	return 0;
//}

#include<stdio.h>
//int my_strlen3(char* s)
//{
//	char* a = s;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - a;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int length = my_strlen3(arr);
//
//	printf("%d", length);
//	return 0;
//}



//实现下 用指针访问数组
#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int  length = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//
//	for (int i = 0; i < length; i++)
//	{
//		printf("%p = %p\n", p + i, &arr[i]);
//	}
//
//	return 0;
//}


#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp =&p;
//	**pp = 100;
//
//	printf("%d", a);
//
//	return 0;
//}


#include<stdio.h>
//
//int main()
//{
//
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j= 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//
//	int** p = parr;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", *(*(parr+i)+j));
//		}
//printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//typedef struct Stu
//{
//	//一个学生信息由 学号+姓名+性别构成
//	int sno[15];
//	char name[20];
//	int age;
//}Stu;
//
//int main()
//{
//	Stu s1;
//	return 0;
//}

//#include<stdio.h>
//
//struct Stu
//{
//	//一个学生信息由 学号+姓名+性别构成
//	int sno[15];
//	char name[20];
//	int age;
//}s1 = { 123456, "wudi", 18};
//
//int main()
//{
//	struct Stu s2 = { 654321, "yao", 19 };
//	return 0;
//}

#include<stdio.h>

struct Stu
{
	//一个学生信息由 学号+姓名+性别构成
	int sno[15];
	char name[20];
	int age;
}s1 = { 123456, "wudi", 18 };  //s1属于第一种初始化

//提醒一下 如果这样创建 s3就是全局变量
struct Stu s3 = { 111111, "yu", 20 };

int main()
{
	struct Stu s2 = { 654321, "yao", 19 }; //s2属于第二种初始化
	return 0;

	printf("%d", s2.age);
}