#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//int main()
//{
//	//int arr1[10] = { 1,2,3 };
//	//int arr2[] = { 1,2,3,4 };
//	//int arr3[5] = { 1,2,3,4,5 };
//	//char arr4[3] = { 'a',98, 'c' };
//	//char arr5[] = { 'a','b','c' };
//	//char arr6[] = "abcdef";
//
////	int count = 10;
////	int arr2[count];
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%p\n" ,&arr1[i]);
//	}
//}

//#include<stdio.h>
//
//int main()
//{
//	////数组创建
//	//int arr[3][4];
//	//char arr[3][5];
//	//double arr[2][4];
//
//
//	//	//数组创建
//	//	int arr[3][4];
//	//char arr[3][5];
//	//double arr[2][4];
//	// 
//	// 
//	//数组初始化
//	int arr[3][4] = { 1,2,3,4 };
//	int arr[3][4] = { {1,2},{4,5} };
//	int arr[][4] = { {2,3},{4,5} };
//}



//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
// }
// }
// for (i = 0; i < 3; i++)
// {
//	 int j = 0;
//	 for (j = 0; j < 4; j++)
//	 {
//		 printf("%p\n", &arr[i][j]);
//	 }
// }
// return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", arr[i]);//当i等于10的时候，越界访问了
//	}
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int sz = 0;
//	int arr1[10] = { 0, 1, 2, 3, 4};
//
//	sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	printf("%d", sz);
//
//	return 0;
//}




//1.0版本
// 
////冒泡函数
//#include<stdio.h>
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int a = 0;
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	//初始化数组
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//
//	 //原理：每次通过两两交换 都可以是这个数组中当时最大的回到自己的应该在的位置上
//	 // 
//	//冒泡函数的实现
//
//	for (int j = 0; j<sz; j++)
//	{
//		int flag = 0;
//		for (int i2 = 0; i2 < sz - 1 - j; i2++)                    //为什么是 i2 < sz - 1 - j   因为 sz -1 是为了让i2最大就是8就行  因为后面有i2+1 不需要用到9    再-j的原因是 下一次比上一次要交换的次数-1
//		{
//
//			if (arr1[i2] > arr1[i2 + 1])
//			{
//				arr1[i2] = arr1[i2] + arr1[i2 + 1];
//				arr1[i2 + 1] = arr1[i2] - arr1[i2 + 1];
//				arr1[i2] = arr1[i2] - arr1[i2 + 1];
//				flag = 1;
//			}
//
//			//这个地方的flag应该不是这样想的 判断条件错了   这个地方上下刚好想反了 没进去一次 没发生变化一次才应该是已经有序的判断条件
//		}
//
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//
//	//打印数组
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//
//	return 0;
//}




//2.0版本
//int bubble_sort(int arr2[10],int sz)
//{	
//   //冒泡函数的实现
//
//	for (int j = 0; j < sz; j++)
//	{
//		int flag = 0;
//		for (int i2 = 0; i2 < sz - 1 - j; i2++)                    
//		{
//
//			if (arr2[i2] > arr2[i2 + 1])
//			{
//				arr2[i2] = arr2[i2] + arr2[i2 + 1];
//				arr2[i2 + 1] = arr2[i2] - arr2[i2 + 1];
//				arr2[i2] = arr2[i2] - arr2[i2 + 1];
//				flag = 1;
//			}
//		}
//
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//
////冒泡函数
//#include<stdio.h>
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int a = 0;
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//初始化数组
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	bubble_sort(arr1, sz);
//
//	//打印数组
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));

	printf("%p\n", arr );
	printf("%p\n", arr+1);
	printf("\n");
	printf("%p\n", &arr [0]);
	printf("%p\n", &arr[0]+1);
	printf("\n");
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

	return 0;
}


//int bubble_sort(int* arr2, int sz)
//{
//	//冒泡函数的实现
//
//	for (int j = 0; j < sz; j++)
//	{
//		int flag = 0;
//		for (int i2 = 0; i2 < sz - 1 - j; i2++)
//		{
//
//			if (arr2[i2] > arr2[i2 + 1])
//			{
//				arr2[i2] = arr2[i2] + arr2[i2 + 1];
//				arr2[i2 + 1] = arr2[i2] - arr2[i2 + 1];
//				arr2[i2] = arr2[i2] - arr2[i2 + 1];
//				flag = 1;
//			}
//		}
//
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//
////冒泡函数
//#include<stdio.h>
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int a = 0;
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//初始化数组
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	bubble_sort(arr1, sz);
//
//	//打印数组
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//
//	return 0;
//}