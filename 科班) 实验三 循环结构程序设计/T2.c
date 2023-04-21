//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
///*输入一个正整数data，请编写程序，实现下列功能：
//① 求它的位数；
//② 求各位数字之和；
//③ 从低位开始逐位分割并输出它的各位数字。（20分）
//输入样例：
//请输入一个整数：12345↙
//输出样例：
//count=5,sum=15
//5   4   3   2   1
//*/
//
//
//#include <stdio.h>
//
//int main()
//{
//	int num = 0; //数字大小
//	int i = 0;
//	int count = 0;
//	int sum = 0;
//	int a = 0;
//
//	scanf("%d", &num);
//
//	//实现第一问
//	for (i = num; i > 0; )
//	{
//		i = i / 10;
//		count++;
//
//	}
//	printf("count=%d,", count);
//
//	//实现第二问
//	for (i = num; i > 0; )
//	{
//		a = i % 10;
//		sum += a;
//		i = i / 10;
//	
//	}
//	printf("sum=%d\n", sum);
//
//
//	//实现第三问
//
//	for (i = num; i > 0; )
//	{
//		a = i % 10;
//		printf("%d ", a);
//		i = i / 10;
//
//	}
//
//	      
//	return 0;
//}
