//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
///*哥德巴赫猜想中写到，一个充分大的偶数（大于等于6），它可以分解为两个素数（质数）的和。请将输入的偶数n ，分解为两个素数的所有可能打印出来。
//  素数就是只能被1和自身整除的正整数。
//
//*/
//
//
////思路： 先写出从0到sqrt之间所有质数 然后n-质数 = m  判断m是不是质数
//#include <stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	int  num = 0;
//	printf("请将输入的偶数n(大于等于6):");
//		scanf("%d", &n);
//		for (i = 2; i <= n/2; i++)
//		{
//
//			k = sqrt(i);
//			for (j = 2; j <= k; j++)
//				if (i % j == 0)
//				{
//					break;
//				}
//			//这里面保证是质数
//			if (j > k)
//			{
//				//再次镶嵌    判断num是不是质数
//				num = n - i;
//				k = sqrt(num);
//				for (j = 2; j <= k; j++)
//					if (num % j == 0)
//					{
//						break;
//					}
//				if (j > k)
//				{
//					printf("可以分成%d+%d\n", i, num);
//				}
//			}
//		}
//
//
//
//
//}