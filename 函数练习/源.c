#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//#include<stdio.h>
//#include<string.h>
//
//
//int swap(int* pa, int* pb)
//{
//
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 10;
//
//
//	printf("交换前 a = %d b = %d\n",a, b);
//    swap(&a, &b);
//	printf("交换前 a = %d b = %d", a, b);
//}


//#include<stdio.h>
//#include<math.h>
//
//int find(int x)
//{
//	int i1 = 0;
//
//	for (i1 = 2; i1 < sqrt(x); i1++)
//	{
//		if (x % i1 == 0)
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (find(i) == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//		else
//		{
//			printf("%d不是素数\n", i);
//		}
//	}
//}

//#include<stdio.h>
//
//int judge(int a)
//{
//	if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
//	{
//		return 1;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//
//	for (int year = 1000; year < 2000; year++)
//	{
//		if (judge(year) == 1)
//		{
//			printf("%d\n", year);
//		}
//	}
//}


//二分查找的函数要怎么实现？
//arr++这种？
//
////传过来的地址 形参里的地址可以实现实参的改变嘛？ 我个人认为是可以的，毕竟就是传址嘛。
//
//#include<stdio.h>
//
//
////传参这个地方不能传arr1[0]?
//void binary_search(int arr2[], int y, int sz)
//{
//	//int sz = sizeof(arr2) / sizeof(arr2[0]);     
//	int left = 0;
//	int right = sz - 1 ;   
//	int mid = 0;
//
//	while (left <= right)   
//	{
//		mid = (left + right) / 2;    
//
//		if (y > arr2[mid])
//		{
//			left = mid+1;
//		}
//		else if (y < arr2[mid])
//		{
//			right = mid - 1;     
//
//		}
//		else
//		{
//			printf("数组中下标为%d的元素就是要找的数\n", mid);           
//			break;                        //记得break停下来。
//		}
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1 , 2, 3, 4, 5, 6, 7, 8 };
//	int a = 0;
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	scanf("%d", &a);
//	binary_search(arr1, a, sz);
//
//	return 0;
//}



//#include<stdio.h>
//
//void add(int* num)
//{
//	(*num)++;
//}
//
//int main()
//{
//	int num = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		int* pnum = &num;
//		add(&num);
//	}
//
//	printf("%d", num);
//}

//#include<stdio.h>
//
//int add()
//{
//	static int num = 0;
//	num++;
//
//	return num;
//}
//
//int main()
//{
//
//	add();
//	int a = add();   //此处也算调用了函数
//	printf("%d", a);
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "hello ";
//	int num = strlen( strcat(arr, "bit") );//这里介绍一下strlen函数
//	printf("%d\n", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d ", printf("%d ", 43)));
//	//结果是啥？
//	//注：printf函数的返回值是打印在屏幕上字符的个数
//	return 0;
//}


//#include<stdio.h>
//
//int func1();
//
//int main()
//{
//	func1();
//}
//
//int func1()
//{
//	printf("haha\n");
//}


//#include<stdio.h>
//
//int test(int x)
//{
//	if (x > 10)
//	{
//		int y = (x % 10);
//		printf("%d", y);     //这里还真是要先printf再return    为什么反过来会报错呢？？？？？
//
//		return test(x / 10);
//	}
//	else
//	{
//		printf("%d", x);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	test(a);
//
//	return 0;
//}

//
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}
//

//#include<stdio.h>
//
//int my_strlen(char* str)     
//{
//	while ((*str) != '\0')                 
//	{ 
//		return 1 + my_strlen(str++);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "hello world";
//	int len = my_strlen(arr1);
//	printf("%d", len);
//}


//int Strlen(const char* str)
//{
//    if (*str == '\0')
//        return 0;
//    else
//        return 1 + Strlen(str + 1);
//}

//int factorial(a)
//{
//	while (a > 1)                       //这里理解最初是有问题的 他并不会一直乘乘乘   9*8*7*6*5*4*3*2*1*1一直循环这种 这样是根本不会停下的，
//		                                         //实际是在a =1时候返回值已经是1，不会再执行fatorial函数
//	{
//		return a * factorial(a - 1);     //这里我是否没有设置限制条件？     果然在循环外面再次搞一个return就行 这是为了让所有语句/分支都有返回值
//	}
//	return 1;
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int mem = 0;
//	scanf("%d", &a);
//	mem = factorial(a);
//
//	printf("%d", mem);
//}
//


#include<stdio.h>

int fib(int a)
{
	if ((a == 1) || (a == 2))
	{
		return 1;
	}

	return fib(a - 1) + fib(a - 2);
}
int main()
{
	int n = 0;
	printf("请输入你想打印的第n个斐波那契数：");
		scanf("%d", &n);
	fib(n);

	printf("%d", fib(n) );
}