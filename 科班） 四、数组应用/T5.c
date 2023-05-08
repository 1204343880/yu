//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
///*【练习5】将两个字符串连接起来，不要用strcat函数。（20分）
//程序运行结果示例：
//Enter string No.1: abc
//Enter string No.2: defg
//connected string No.1: abcdef*/
//#include<stdio.h>
//
////最开始的想法真是愚蠢 为什 用镶嵌 直接俩一样的就解决了
//// 错误想法
////int main()
////{
////	char ch = 0;
////	printf("Enter string No.1:\n");
////	while((ch = getchar()) != '\n')
////	{
////		printf("%c ", ch);
////		printf("Enter string No.2:\n");
////		while ((ch = getchar()) != '\n')
////			printf("%c ", ch);
////	}
////}
//
//
//int main()
//{
//	char ch = 0;
//	char arr1[100] = { 0 };
//	char i = 0; //数组通过下标查找   并且下标从0开始
//	int end = 0;
//	printf("Enter string No.1:\n");
// //	printf("Enter string No.2:\n");
//	//先存数组里面 再进行下一个 
//	while ((ch = getchar()) != '\n')
//	{
//		arr1[i] = ch;
//		i++;
//	}
//
//	//没必要因为i++写个-1 还是因为下标的问题
//	end = i;
//    for  (i = 0; i < end; i++)
//    {
//		printf("%c", arr1[i]);
//	}
//}
