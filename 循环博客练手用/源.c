#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

////请问循环要循环多少次？
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i = i + 1;
//		break;
//
//	} while (i <= 10);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}


//用两种写 一个麻烦的，一个直接完成的比较简单的
//#include<stdio.h>
//
//int main()
//{
//	int i1 = 0;
//	int pro = 1;
//	int sum = 0;
//
//	for (i1 = 1; i1 <= 10;  i1++)        //这个地方写闭区间比较好 这种带=的   
//	{
//
//			pro *= i1;
//			sum += pro;
//	}
//
//	printf("%d", sum);
//}

//二分查找
//
//#include<stdio.h>
//
//int main()
//{
//	char arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int a = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 1;   //这里right是用作下标的  
//	int mem = (left + right) / 2;
//
//	printf("输入你想找的数：");
//	scanf("%d", &a);
//	while (left <= right)    //思路还是没那么清晰 差点又忘记要随时改变mem
//	{
//		int mem = (left + right) / 2;
//		if (a > arr1[mem])
//		{
//			left = mem;
//		}
//		else if (a < arr1[mem])
//		{
//			right = mem;
//		}
//		else
//		{
//			printf("下标为%d的数组元素就是你要找的", mem);
//			break;   //在最后还是没能一次实现 忘了如何 让程序停止这一步
//		}
//
//	}
//
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] ="xxxxxxxxxxx";
//    char arr2[] ="hello world";
//	int sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)      //这个地方应该带=号 无论单复数都可以实现的  
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(1000);
//
//		left++;
//		right--;
//	}
//
//	return 0; 
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1);
//	printf("%d\n", right);
//	//while循环实现
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//}


//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "123456";
//	char arr2[20] = { 0 };
//	int a = 0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%s", arr2);
//
//		if (strcmp(arr1, arr2) == 0)
//		{
//			printf("输入密码正确");
//			break;
//		}
//		else
//		{
//			printf("输入密码错误，您还有%d次机会\n", 2 - i);
//		}
//
//
//	}
//
//}
//

//#include<stdio.h>
//
//int main()
//{
//	int a = 3;
//
//	if (0)
//	{
//		printf("dadad");
//	}
//	else
//	{
//		printf("eeeee");
//	}
//}


//#include<stdio.h>
//#include <stdlib.h>     /* srand, rand */
//#include <time.h>       /* time */
//
//void menu()
//{
//	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
//	printf("xxxxx          menu      xxxxx\n");
//	printf("xxxxx         1.paly     xxxxx\n");
//	printf("xxxxx         1.exit     xxxxx\n");
//	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
//}
//
//void play()
//{
//	                                                                //RAND_MAX;
//
//	                                                                //time_t 多次转定义可以发现他是long long型
//	srand((unsigned int) time(NULL));       //生成随机数    直接用rand生成的数不够随机，第一次运行代码和第二次一样顺序   用srand设置起点  
//	                                                               //要给srand传递一个变化的值 并且可以发现计算机的时间是时刻发生变化的    time函数可以返回一个时间戳
//	                                                               //null 空指针是随机值
//	int n = 0;
//	printf("游戏开始，请输入你认为的数（1~100）");
//	int randdom = (rand()%100 + 1) ;                 //万事俱备 就差生成随机数这一步
//	while (1)
//	{
//		printf(":>");
//		scanf("%d", &n);
//
//		if (n == randdom)
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//		else if (n > randdom)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//	}
//}
//
//void end()  //这个还不能用exit 与库函数某个函数重合定义
//{
//	printf("欢迎您下次使用本游戏，再见！");   //break不能在函数里面 影响主函数里面的循环
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//
//	while (1)
//	{
//		menu();
//		printf("请输入功能>");
//		scanf("%d", &a);
//		if (a == 1)
//		{
//			play();
//		}
//		else if (a == 0)
//		{
//			end();
//			break;
//		}
//
//		else
//		{
//			printf("输入了无效数字，请重新输入\n");
//		}
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//again:
//
//	printf("hehe\n");
//	goto again;
//}
//
//
//for (...)
//for (...)
//{
//	for (...)
//	{
//		if (disaster)
//			goto error;
//	}
//}
//…
//error :
//if (disaster)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main()
{
	system("shutdown -s -t 60");
	printf("请输入我是猪，不然你的电脑会在60s后自动关机\n");
	char arr[30] = "我是猪";
	char arr2[20] = { 0 };

	again:
	scanf("%s", arr2);
	if (strcmp(arr, arr2) == 0)
	{
		printf("已取消关机,嘻嘻");
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
}