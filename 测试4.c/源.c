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

