//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
////输入一行字符，分别统计出其中的英文字母，空格，数字和其他字符的个数。
//
//#include<stdio.h>
//
//int main()
//{
//	char ch = 0;
//	int eng = 0;  //english缩写
//	int  space = 0; //空格
//	int mem = 0;  //数字
//	int other = 0;  //别的字符
//	while ((ch = getchar() )!= '\n')       //本题核心在这  getchar  如果只用数组呢？？？
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			eng++;
//		}
//		else if (ch >= '0' && ch <= '9')
//		{
//			mem++;
//		}
//		else if (ch == ' ')
//		{
//			space++;
//		}
//		else
//		{
//			other++;
//		}
//
//	}
//	printf("英文字母：%d  空格：%d 数字：%d 别的字符：%d", eng, space, mem, other);
//
//	return 0;
//}