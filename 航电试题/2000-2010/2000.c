//全选取消注释 看原来的代码

//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
////2000.输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
//	//扩展到多组 （利用数组实现）
//	// 方法：冒泡 折半
//
////暴力解题 三个if
//// 思路错误-要将最大的移到后面
////#include<stdio.h>
////
////int main()
////{
////	char arr[3] = { 0 };
////	char temp = 0;
////	scanf("%c %c %c", &arr[0], &arr[1], &arr[2]);//如果时 大 中 小
////
////		if (arr[0]> arr[1]) //交换后为中 大 小
////		{
////			temp = arr[1];
////			arr[1] = arr[0];
////			arr[0] = temp;
////		}
////
////		if (arr[1] > arr[2]) //交换后为中 小 大
////		{
////			temp = arr[2];
////			arr[2] = arr[1];
////			arr[2] = temp;
////		}
////
////		if (arr[0] > arr[1]) //交换后为中 大 小
////		{
////			temp = arr[1];
////			arr[1] = arr[0];
////			arr[0] = temp;
////		}
////
////		printf("%c %c %c", arr[0], arr[1], arr[2]);
////
////	return 0;
////}
//
////暴力解题 三个if
////#include<stdio.h>
////
////int main()
////{
////	char arr[3] = { 0 };
////	char temp = 0;
////	scanf("%c %c %c", &arr[0], &arr[1], &arr[2]);
////
////	//前两个if确保最大的在后面 然后再实现前两个的交换
////	if (arr[0] > arr[2]) 
////	{
////		temp = arr[2];
////		arr[2] = arr[0];
////		arr[0] = temp;
////	}
////	if (arr[0] > arr[1]) 
////	{
////		temp = arr[1];
////		arr[1] = arr[0];
////		arr[1] = temp;
////	}
////
////	if (arr[1] > arr[2]) 
////	{
////		temp = arr[2];
////		arr[2] = arr[1];
////		arr[1] = temp;
////	}
////
////	printf("%c %c %c", arr[0], arr[1], arr[2]);
////
////	return 0;
////}
//
////多组实现的输入
//#include<stdio.h>
//int main()
//{
//	char arr[3] = { 0 };
//	char temp = 0;
//	while (scanf("%c %c %c", &arr[0], &arr[1], &arr[2])  != EOF) //别带分号 空语句了
//	{
//		getchar();//清理缓存区
//		//前两个if确保最大的在后面 然后再实现前两个的交换
//		if (arr[0] > arr[2])
//		{
//			temp = arr[2];
//			arr[2] = arr[0];
//			arr[0] = temp;
//		}
//		if (arr[0] > arr[1])
//		{
//			temp = arr[1];
//			arr[1] = arr[0];
//			arr[1] = temp;
//		}
//
//		if (arr[1] > arr[2])
//		{
//			temp = arr[2];
//			arr[2] = arr[1];
//			arr[1] = temp;
//		}
//
//		printf("%c %c %c", arr[0], arr[1], arr[2]);
//
//	}
//	return 0;
//}
//
//
//////利用数组-冒泡排序
////#include<stdio.h>
////
////int main()
////{
////	char arr[3] = { 0 };
////
////	scanf("%c %c %c", &arr[0], &arr[1], &arr[2]);
////
////	for(int i = 0; i < 3; i++)
////	{
////		for (int j = 0; j < 2; j++)//注意j的大小 小心函数越界访问
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				arr[j] = arr[j] + arr[j + 1];
////				arr[j + 1] = arr[j] - arr[j + 1];
////				arr[j] = arr[j] - arr[j + 1];
////			}
////		}
////	}
////
////	printf("%c %c %c", arr[0], arr[1], arr[2]);
////
////	return 0;
////}
//
//
//
