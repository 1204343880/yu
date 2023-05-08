#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


//不用二维数组硬写失败
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = 0;
//	int i = 0;
//	int ii = 0;
//	int k = 0;
//	int k1 = 0;
//	int n = 0;
//	int n1 = 0;
//
//
//	for (i = 0; i < 10; i++)
//	{
//		ii = i % 2;
//
//		//确实可以实现，但这样写麻烦要死 emm
//		//瞬间没有写的动力了 相当于要写n的阶乘这种 还要初始化 还不止初始化一次
//
//		//所以论二维数组的重要性  这样硬写会出事的 emm
//
//		if (ii == 1)//奇数
//		{
//			k = i / 2 + 1;
//			for (n = i; n > k; n--)
//			{
//				n1 *= n;
//			}
//			for (k; k > 0; k--)
//			{
//				k1 *= k;
//			}
//			arr[i] = n1 / k1;
//		}
//		else
//		{
//
//		}
//	}
//}



//二维数组利用

//#include<stdio.h>
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int line = 0;
//	int col = 0;   //列,也就是第几个元素
//
//	//十层   也就是10行
//
//	//第一行直接为1就行
//	// 而且每一行第一个都是1
//	for (line = 0; line < 10; line++)
//	{
//		col = 0;
//		arr[line][col] = 1;
//		//写成line加1原因是 第几层就只有第几个元素 没必要太多
//		for (col=1; col < line+1; col++)
//		{
//			arr[line][col] = arr[line - 1][col] + arr[line - 1][col - 1];
//		}
//	}
//
//
//	for (line = 0; line < 10; line++)
//	{
//
//		for (col = 0; col < line + 1; col++)
//		{
//			printf("%d ", arr[line][col]);
//		}
//		printf("\n");
//	}
//
//	//打印数组
//
//		return 0;
//}