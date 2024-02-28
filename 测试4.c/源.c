#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
//
////#include<stdio.h>
////int main()
////{
////    int a;
////    int arr[10][10];
////    int max = 0;
////
////
////    scanf("%d", &a);
////    for (int i = 0; i < a; i++)
////    {
////        scanf("%d-%d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
////        arr[i][3] = arr[i][2];
////    }
////
////    for (int i = 0; i < (a / 2); i++)
////    {
////        for (int j = (a / 2); j < a && j >= (a / 2); j++)
////        {
////
////            if (arr[i][0] == arr[j][0])
////            {
////                arr[i][3] += arr[j][2];
////            }
////        }
////    }
////
////    for (int i = 0; i < (a / 2); i++)
////    {
////        if (max < arr[i][3])
////        {
////            max = arr[i][3];
////        }
////    }
////
////    for (int i = 0; i < (a / 2); i++)
////    {
////        if (max == arr[i][3])
////        {
////            printf("%d %d", arr[i][0], arr[i][3]);
////        }
////    }
////
////}
//
////
////#include<stdio.h>
//
////typedef  unsigned long un_64;
////
////int main()
////{
////	unsigned long a = 1;
////	un_64 b = 1;
////
////	return 0;
////}
//
//
//
//////define定义标识符常量
////#define MAX 1000
////
//////define定义宏
////#define ADD(x, y) (x)+(y)
////int main()
////{
////
////		int sum = ADD(2, 3);
////		printf("sum = %d\n", sum);
////		sum = 10 * ADD(2, 3);
////		printf("sum = %d\n", sum);
////
////		return 0;
////		return 0;
////	}
////
////
//
////
////#include <stdio.h>
////
////
////#define fun(a,b) a<b?a:b
////
////int main()
////{
////	int x = 5;
////	int y = 8;
////	int z = 0;
////	int h = 0;
////
////	h = fun(x, y);
////	z = 4 + fun(x, y);
////
////	printf("%d\n", h);
////	printf("%d", z);
////	
////}
//
////动态版本
//void Addsystem(MIS* pc)
//{
//	assert(pc);
//
//	Checksystem(pc);
//	printf("请输入学生学号:> ");
//	char findsno[17] = { 0 };
//	int ch = 0;
//	int i1 = 0;
//	while ((ch = getchar()) != )
//	{
//		findsno[i1] = ch;
//		i1++;
//	}
//	findsno[i1] = '\0';
//	int a = Findbysno2(pc, findsno);
//
//	if (a == -1)
//	{
//		*(pc->data[pc->count].sno) = findsno;
//		printf("请输入学生姓名:> ");
//		scanf("%s", pc->data[pc->count].name);
//		printf("请输入学生英语成绩:> ");
//		scanf("%d", &(pc->data[pc->count]).eng);
//		printf("请输入学生数学成绩:> ");
//		scanf("%d", &(pc->data[pc->count]).math);
//		printf("请输入学生专业课成绩:> ");
//		scanf("%d", &(pc->data[pc->count]).pro);
//		//计算总分
//		(pc->data[pc->count]).sum = (pc->data[pc->count]).eng + (pc->data[pc->count]).math + (pc->data[pc->count]).pro;
//		(pc->count)++;
//	}
//
//	else
//	{
//		printf("此学号已存在，添加失败！\n");
//	}
//}
//

//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//	}
//
//	printf("%d", i);
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//
//		ret = ret * i;
//		sum += ret;
//	}
//
//	printf("%d", sum);
//}



//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == a)
//		{
//			printf("查找到为%d",a);
//			break;
//		}
//	}
//
//	if (i == 10)
//	{
//		printf("不存在");
//	}
//}


/*
二分查找
我从思路上就不是很清晰
*/
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int a = 0;
//	int centre = 0;
//	int right = 0;
//	int left = 0;
//	scanf("%d", &a);
//	
//	left = 0;
//	right = 9;
//	for (int i = 0; i < 10; i++)//循环应该多少次呢？用什么循环？     
//	{
//		centre = (left + right) / 2;
//		if (arr[centre] > a)
//		{
//			right = centre-1;
//		}
//		else if (arr[centre] < a)
//		{
//			left = centre+1;
//		}
//		else
//		{
//			printf("已经找到是%d\n",arr[centre]);
//		}
//	}
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//printf("%d ", i);
//i = i + 1;
// }
// return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//	}
//
//	printf("%d ", i);
//
//	return 0;
//}
//



//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//代码1
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//}
//	//for循环中的初始化部分，判断部分，调整部分是可以省略的，但是不建议初学时省略，容易导致问题。
//
//#include <stdio.h>
//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
//


//#include<stdio.h>
//
//int main()
//{
//	char a = 0;
//
//	while (1)
//	{
//		scanf("%c", &a);
//
//		printf("%c\n", a);
//
//	}
//
//
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2, 3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//输出结果
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 0;
//
//	b = a / 2;
//
//	printf("%d", b);
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 7;
//	int b = 0;
//
//	b = a % 2.0;
//
//	printf("%d\n", b);
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d", &a);
//
//	while (1)
//	{
//		b = a % 10;
//		a = a / 10;
//
//		printf("%d ", b);
//
//		if (a == 0)
//			break;
//	}
//}
//
//#include<stdio.h>
//
//void test(int b)
//{
//	if(b >= 10)
//	{
//		test(b / 10);
//		printf("%d ", b % 10);
//	}
//	else if(b < 10)
//	{
//		printf("%d ",b);
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
//
//int main()
//{
//    int a = 0;
//
//    while ((a = getchar()) != EOF)
//    {
//        printf("%d", a);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    float a = 0;
//    while (scanf("%f", &a) != EOF)
//    {
//        printf("%.3f\n", a);
//    }
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//	printf("%c", a);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//
//	scanf("%4d %2d %2d", &y, &m, &d);
//
//	printf("year=%d\nmonth=%12d\ndate=%d", y, m, d);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a = 0;
//	while ((a = getchar()) != EOF)
//	{
//
//		a = a + 32;
//
//		printf("%c\n", a);
//
//		getchar();
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//
//    for (int i = 1; i < 7; i++)
//    {
//        for (int j = 1; j < 13; j++)
//        {
//            if (i == 1 && (j == 6 || j == 7))
//                printf("*");
//
//            else if (i == 2 && (j == 6 || j == 7))
//                printf("*");
//
//            else if (i == 3 || i == 4)
//                printf("*");
//
//            else if (i == 5 && (j == 5 || j == 8))
//                printf("*");
//
//            else if (i == 6 && (j == 5 || j == 8))
//                printf("*");
//
//            else
//                printf(" ");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
//


//while (scanf("%d", &a) != EOF)
//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//
//
//    scanf("%d%d", &a, &b);
//
//
//        printf("%d", b);
//
//    return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	a = -1;
//	a = a >> 1;
//
//	printf("%d", a);
//}\


//#include<stdio.h>
//
//int main()
//{
//	int a = 3;
//	// 0000 0011 原/反/补
//	int b = -5;
//	// 1000 0101 原
//	// 1111 1010 反
//	// 1111 1011 补
//
//	int c = 0;
//
//	c = a ^ b;
//	// 0000 0011
//	// 1111 1011
//    // 1111 1000 补码
//	// 1111 0111 反码
//	// 1000 1000 原码
//
//	printf("%d", c);
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("%d %d",a ,b);
//}

//这个方法二就是一种新的思路 新的思考！！！
//#include<stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d %d", a, b);
//}
//








//题目：求一个整数存储在内存中的二进制中1的个数

//思路：
//1. 先知道到底是64x还是32x的操作系统 然后再求
//2.（实现方面）思路1：就看他负数的时候有多少次    思路2：怎么获得32位的每一位? 说起来很简单 但是实现却想不到！！













//
// 
// 
//#include<stdio.h>
//
//int main()
//{
//	int weight = 120; //不满意
//	weight = 89;
//
//	printf("%d", weight);
//	return 0;
//}


//
//#include<stdio.h>
//
//int main()
//{
//	int x = 5;
//	int y = 0;
//	int z = 0;
//
//	x = y= z + 1;
//
//	printf("%d %d %d", x, y, z);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a = 2;
//	int b = 0;
//
//	printf("%d\n", !a);
//	printf("%d", !b);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int flag = 5;
//
//	if (flag == 5)
//	{
//		printf("11111\n");
//	}
//
//	if (!flag)
//	{
//		printf("jiajiajia\n");
//	}
//
//	if (flag)
//	{
//		printf("duiduidui!\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 1;
//
//	int* pa = &a;
//
//	printf("%p", pa);
//
//	return 0;
//}
//

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int ab = 1;
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//这样写行不行？
//	printf("%d\n", sizeof int);//这样写行不行？
//	printf("%d\n", sizeof ab);
//
//	return 0;
//}
//


//这个题不仅
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("(2)%d\n", sizeof(arr));//(2)  
//}
//void test2(char ch[])
//{
//	printf("(4)%d\n", sizeof(ch));//(4)  
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("(1)%d\n", sizeof(arr));//(1) 
//	printf("(3)%d\n", sizeof(ch));//(3) 
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("(1)%d\n", sizeof( arr[2]));//(1) 
//	printf("(3)%d\n", sizeof(char [10]));//(3) 
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//
//		a = ~a;
//		//a 的原/反/补码： 00000000 00000000 00000000 00000011
//		// ~a之后 的补码    11111111 11111111 11111111 11111100
//		// ~a之后 的反码    11111111 11111111 11111111 11111011
//		// ~a之后 的原码    10000000 00000000 00000000 00000100     -> -4
//	printf("%d", a);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = 0;
//
//	b = ++a;  
//	c = --a;     
//
//	printf("%d\n", b);
//	printf("%d", c);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = 0;
//
//	b = a++; //3
//	c = a--;   //4
//
//	printf("%d\n", b);
//	printf("%d", c);
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = 0;
//
//	b = a++; //3
//	c = a--;   //4
//
//	printf("%d\n", b);
//	printf("%d", c);
//	return 0;
//}


//
//#include <stdio.h>
//
//int main()
//{
//	char a = 'A';
//	char b = 'B';
//
//	if(a < b)
//	printf("%c %c", a, b);
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	while(scanf("%d %d",&a ,&b) != EOF)
//	{
//		if (a == 3 && b == 3)
//		{
//			printf("haha\n");
//		}
//	
//
//		if (a == 3 || b == 3)
//		{
//			printf("hehe\n");
//		}
//
//	}
//	
//	return 0;
//}
//
//


//
//#include <stdio.h>

//int main()
//{
//	int year = 0;
//
//	while (scanf("%d", &year) != EOF)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d是闰年！\n", year);
//		}
//
//		else
//		{
//			printf("%d不是闰年\n",year);
//		}
//	}
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 90;
//
//	int c = 1;
//		
//		c=(a ? a=2 : b=3);
//
//		printf("%d", c);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	printf("%d", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1); 
//
//	printf("%d %d %d",a ,b ,c);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//
//	if (a = b + 1, c = a / 2, d > 0)
//	{
//		printf("%d %d %d %d", a, b, c, d);
//	}
//
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int arr[10];//创建数组
//	arr[9] = 10;//实用下标引用操作符。
//	//[ ]的两个操作数是arr和9。
//
//	return 0;
//}



//#include <stdio.h>
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();
//	//实用（）作为函数调用操作符。
//
//	test2("hello world.");
//	//实用（）作为函数调用操作符。
//	return 0;
//}


//. 结构体.成员名
//->结构体指针->成员名


//#include<stdio.h>
//
//int main()
//{
//	struct Stu
//	{
//		char name[10];
//		int year;
//		int id[20];
//	};
//
//	struct Stu stu;
//	struct Stu* pStu = &stu;//结构成员访问
//
//
//	printf("%s", stu.name);
//
////
//}




//#include <stdio.h>
//
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//
//	void set_age1(struct Stu stu)
//	{
//		stu.age = 28;
//		printf("%d\n", stu.age);
//	}
//
//	void set_age2(struct Stu* pStu)
//	{
//		pStu->age = 18;//结构成员访问
//		printf("%d\n", pStu->age);
//	}
//
//	int main()
//	{
//		struct Stu stu;
//		struct Stu* pStu = &stu;//结构成员访问
//
//		stu.age = 30;//结构成员访问
//		printf("%d\n", stu.age);
//		set_age1(stu);
//
//		printf("\n");
//
//		pStu->age = 20;//结构成员访问
//		printf("%d\n", stu.age);
//		set_age2(pStu);
//		return 0;
//	}




//这个地方记住了 ascii最大就是127 
//因为char类型就一个字节 一个字节是8byte 就是8位二进制 第一个是符号位 所有只有7位2进制 而二进制最大 就是 2^7 -1 也就是127
//#include<stdio.h>
//
//int main()
//{
//	char a = 5;
//	//因为是正数所以 原/反/补 三码相同
//	//00000000 00000000 00000000 00000101
//	//00000101 -a
//	char b = 127;
//	//因为是正数所以 原/反/补 三码相同
//	//00000000 00000000 00000000 01111111
//	//01111111-b
//	char c = 0;
//
//	c = a + b;
//	//先进行整形提升：
//	//00000000 00000000 00000000 00000101
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000000 10000100 补码
//
//	
//	//10000100     （截断后补码）
//	//11111100 -c （原码）
//
//	printf("%d\n", c);
//
//	return 0;
//}


//
////实例1
//int main()
//{
//	struct Book
//	{
//		char name1[20];
//		char name2[20];
//		float price;
//    };
//
//	struct Book book1 = { "数据结构", "严蔚敏", 50.5};
//
//	printf("%s\n", book1.name1);
//	printf("%s\n", book1.name2);
//	printf("%f\n",book1.price);
//
//
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	struct Book
//	{
//		char name1[20];
//		char name2[20];
//		float price;
//	};
//
//	struct Book book1;
//
//	strcpy(book1.name1, "数据结构");
//
//	printf("%s\n", book1.name1);
//
//
//
//	return 0;
//}


//实例1

//#include<stdio.h>
//int main()
//{
//	char a = 0xb6; //0x是16进制数
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//char  a = -1; //0x是16进制数
//
//	printf("%d", a);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}

//
////实例1
//
//
//#include<stdio.h>
//
//struct Book
//{
//	char name1[20];
//	char name2[20];
//	float price;
//};
//
//
//void Printf(struct Book* p)
//{
//
//	//printf("%s\n", p->name1);
//	//printf("%s\n", p->name2);
//	//printf("%f\n", p->price);
//
//	printf("%s\n", (*p).name1);
//	printf("%s\n", (*p).name2);
//	printf("%f\n", (*p).price);
//}
//
//int main()
//{
//
//	struct Book book1 = { "数据结构", "严蔚敏", 50.5 };
//
//
//	Printf(&book1);  //这个地方到底要求什么形式呢？  之前还会 现在全忘了！
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	float f = 3.14;
//	int num = f;//隐式转换，会有精度丢失
//
//	printf("%d", num); 
//}


//#include<stdio.h>
//
//int main()
//{
//	float f = 3.14f;
//	int n = 2;
//
//
//	printf("%f", n+f);
//}

//#include<stdio.h>
//
//int main()
//{
//	float f = 3.14f;
//	int n = 2;
//
//
//	printf("%f", n + f);
//}

////代码3-非法表达式
//#include<stdio.h>
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}
//代码4

//#include<stdio.h>
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//输出多少？  
//
//    return 0;
//}


////代码5
//#include <stdio.h>
//int main()
//{
//int i = 1;
//int ret = (++i) + (++i) + (++i);
//printf("%d\n", ret);
//printf("%d\n", i);
//return 0;
//}
//
////尝试在linux 环境gcc编译器，VS2013环境下都执行，看结果


//#include <stdio.h>
//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//	//a变量占用4个字节的空间，这里是将a的4个字节的第一个字节的地址存放在p变量中，p就是一个之指针变量。
//
//	printf("%p\n", &a);
//	printf("%p", p);
//		return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	printf("%p", pa);
//
//	*pa = 0;
//
//	return 0;
//}

//#include <stdio.h>
////演示实例
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", &n);   
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	
//	int arr1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int* pa = NULL;
//
//	pa = &arr1[0];
//
//	printf("%d\n", *pa);
//	printf("%d", *pa+1);
//
//	printf("%d", pa);
//	printf("%d", pa + 1);
//
//	return 0;
//}
