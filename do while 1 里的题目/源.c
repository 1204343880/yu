#include<stdio.h>

//n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 n的阶乘 
//第一种               while循环 while循环 while循环 while循环 while循环
//错误
//int main()
//{
//	int b = 0;
//	int a = 0;
//	scanf_s("%d", a);
//	b = a * (a - 1);
//	a--;
//	a--;
//	while (a != 0)
//	{
//		b = b * a;
//	}
//	printf("%d", b);
//	return 0;
//}

//待存
/*
int main()
{
	int b = 0;
	int a = 0;
	scanf_s("%d", &a);
	while (a>0)
	{

		b = b * a;
		a--;

	}
	printf("%d", b);
	return 0;
}
*/



//第二种 第二种 第二种 第二种 第二种 第二种 第二种
//for for for for for for for for for for for for


/*
int main()
{
	int n = 0;
	int i = 0;
	int sum = 1;
	scanf_s("%d", &n);
	for (i = 1; i<=n; i++)
	{
		sum = sum *i;
	}
	printf("%d", sum);
	return 0;
}


*/

















//题目2 题目2 题目2 题目2 题目2 题目2 题目2 题目2 题目2 题目2 题目2 题目2 题目2 题目2 题目2 题目2                     计算n!+n2!+n3!.........n10!

//方法1 方法1 方法1 方法1 方法1 方法1 方法1 
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	int sum2 = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//		sum2 = sum2 + sum;
//	}
//	printf("这个总和是%d", sum2);
//	return 0;
//}


//方法2 方法2 方法2 方法2 方法2 方法2 方法2 方法2 方法2

//for函数镶嵌 for函数镶嵌 for函数镶嵌 for函数镶嵌 （理解不行）（理解不行）（理解不行）（理解不行）（理解不行）（理解不行）（理解不行）

//错误示范


//int main()               //我真的菜哦！！！！   忘了这个for循环用法 我服了！！ 不对，事情比这严重 我是 循环 都没理解对！！！！！！！！！！！！！！！
//{                                     
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	int sum2 = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		for (i = 1; i <= n; i++)     //循环理解不行！！！！！！ n等于几，这个小循环就进行几次，记住 小循环！！！！！！！！！！！  n=3这个里面小循环会执行三次！！！1
//		{
//			sum = sum * i;
//
//		}
//		sum2 =sum2 + sum;
//	}
//	printf("这个总和是%d", sum2);
//	return 0;
//}
//////////////////////////////正确答案
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	int sum2 = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		sum = 1;
//	for (i = 1; i <= n; i++)  //i<n这个小细节也要注意
//		{
//			sum = sum * i;
//
//		}
//		sum2 = sum2 + sum;
//	}
//	printf("这个总和是%d", sum2);
//	return 0;
//}




//   T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 T3 
//在一个有序数组中查找具体的某个数字n，编写int binsearch(int x,int v[],int n);功能：在v[0]<=v[1]<=v[2].......<=[n-1]的数组查找x

//完全不会，真不错！！！！！！！！！！！！！！！！！！！！

//数字数组int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

//int main()
//{            //   0  1  2  3  4  5  6  7  8  9
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);       //数组的元素个数              其中注意 sizeof（arr）是40                 sizeof（arr[0]）是4
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)                                //那么这个循环怎么处理嘞？？？？      (arr[mid] != 7??
//	{
//		i++;
//
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)         //麻了想到用脚标还是菜啊
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("总共找了%d次\n", i);//也搞懂为什么是五次了
//			printf("踩了狗屎运，居然真的找到了，下表为：%d", mid);
//			break;                                                      //我居然想起来用break 舒服了！！！！1
//		}
//	}
//
//	if (left > right)   //原因：left在while循环里会越来越大  然后就会出现这个 
//	{
//		printf("找不到");
//	}
//	return 0;
//}














//T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 T4 
//编写代码，演示多个字符从两端移动，向中间聚拢
//真不戳！！！ 给我看不懂了呢！！！！
//还行 半看半做 做出来了

//
//#include<windows.h>
//
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int n = 0;     
//	while (n <= 10)                                  //原因在于 你看到arr[21]但实际上双引号里只有20个  因为还有个\0没算呢                       
//	{
//
//		 arr2[n] =  arr1[n];
//		 n = n + 1;
//		 arr2[20 - n] = arr1[20 - n];
//		 printf("%s\n", arr2);
//		 Sleep(1000);              //延迟多久输出 单位是毫米    用前加上 #include<windows.h>
//		 system("cls");//清空屏幕
//	}
//	printf("%s\n", arr2);//细节防止为了丢失 在循环外搞一个   我甚至还顿了一下 循环理解还是不行   
//	return 0;
//}







//T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 T5 
//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示成功，如果三次都失败，退出程序）

//int main()
//
////我设置密码为abcd
////想的没什么问题 就是触及到了知识盲区
// 失败了 但我到死不知道为什么错
//{
//	int n = 1;
//	while (n <= 3)
//	{
//		++n;
//		char arr[20] = { 0 };
//
//		printf("请输入密码>：");                                //什么时候带括号 什么时候不带 我真的会谢
//		scanf_s("%s", arr);
//		if (strcmp(arr,"abcd")==0)                                                                            //俩字符串比较用 strcmp 俩字符串比较用 strcmp 俩字符串比较用 strcmp 
//		{
//			printf("密码输入正确"); //什么时候才需要清除缓冲区呢？
//				break;
//		}
//		else
//		{
//			printf("需要您重新输入密码>:");
//			//在else里面设置一个循环？可行？？？？？？？？？
//
//		   //退出程序怎么搞？？我不会 泪目了！？！？！？！？！
//		}
//	}
//	if (n == 4)
//	{
//		printf("密码忘了？好的，三秒后爆炸！");
//	}
//	return 0;
//}
//





