//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
////
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i1 = 0;
//	int i2 = 0;
//	int i3 = 0;
//	int i4 = 1;
//
//	scanf("%d", &n);
//	i4 = n;
//	//控制整层数
//	for (i1 = 0; i1 < n; i1++)
//	{
//		//此处细节：n-i1  刚好利用外循环加1 让里面的空格逐渐少打一个
//		for (i2=n-i1;i2>0;i2--)
//		{
//			printf(" ");
//		}
//
//		//  在第一层和其他层区分开
//		if (i1 == 0)
//		{
//			for (i3 = n - i1; i3 > 0; i3--)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//最后一层
//		else if (i1 == n - 1)
//		{
//			for (i3 = 0; i3 < 3 * n - 2; i3++)
//			{
//				printf("*");
//			}
//		}
//		//中间层
//		else
//		{
//			printf("*");
//			for (i3 = 0; i3 <i4 ; i3++)
//			{
//				printf(" ");
//			}
//			i4 += 2;
//			printf("*\n");
//		}
//	}
//}