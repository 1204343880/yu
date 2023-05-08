#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

///*
//已有一排好序的数组a（键盘输入），现输入一个数，要求按原来排序的规律将它插入数组中
//*/
//
////我要是不知道多长呢？？
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[20] = { 0 };
//	int i1= 0;
//	int i2 = 0;
//	int n = 0;
//	int insert = 0;            //插入的意思
//	int  tem1 = 0;            //temporary   临时的意思
//	int  tem2 = 0;
//	int a = 1;
//	printf("你想让这个已经排序好的数组里面有几个元素:\n");
//		scanf("%d", &n);
//			printf("开始输入:\n");
//	for (i1 = 0; i1 <n ; i1++)
//	{
//		scanf("%d", &arr[i1]);
//	}
//
//	printf("输入想插入的数:\n");
//	scanf("%d", &insert);

	//从前往后想
	////麻烦方法   正常简单点的再后面
	//for (i1 = 1; i1< n+1; i1++)
	//{
	//	// 虽然是麻烦方法 但这样写，就能少往后延申用不到的数组   让i从1开始  arr[i-1]

	//	if (insert > arr[i1-1] && insert < arr[i1])  //这样写更好 不然需要 只因为打印>arr[i]就插入后面往后挤的话 可能要因此多执行好几次
	//	{
	//		                                                          //但即使这样写 正向想 也要创建俩变量 用来储存数组中的元素
	//		for (i1; i1 < 6; i1++)
	//		{
	//			tem1 = arr[i1];
	//			tem2 = arr[i1 + 1];

	//			while (a == 1)
	//			{
	//				a++;
	//			 arr[i1] = insert;

	//			}
	//			arr[i1 + 1] = tem1;
	//		}
	//		continue;
	//	}
	//}
	//// n+1

	//for (i1 = 0; i1 < n + 1; i1++)
	//{
	//	printf("%d ", arr[i1]);
	//}



//	//从后往前想更简单 逆向思维
//	//这题和 数据结构初阶中的扭转数组最麻烦那个处理方法很像
//	
//}

#include <stdio.h>

//int main()
//{
//
//	int a[11];
//	int i, j, b, swap;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	printf("请插入一个数\n");
//	scanf("%d", &b);
//	a[10] = b;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - i; j++)
//			if (a[j] > a[j + 1])
//			{
//				swap = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = swap;
//			}
//	}
//	for (i = 0; i < 11; i++)
//		printf("%d ", a[i]);
//
//
//	return 0;
//}