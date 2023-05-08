#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//输入一个字符串，然后将其逆序存放
//#include<stdio.h>
//
//int main()
//{
//	char ch = 0;
//	char arr1[200] = { 0 };
//	int i = 199;      //找到在最后一位的下标  
//	while ((ch = getchar()) != '\n')
//	{
//		//getchar输入后 直接存后面的数组元素里面   emm 解题关键
//		arr1[i] = ch;
//		i--;
//	}
//
//	for (i; i < 200; i++)
//	{
//		printf("%c", arr1[i]);
//	}
//
//
//	return 0;
//}

//# include <stdio.h>
//int main()
//{
//	char str1[80], str2[40];
//	int i = 0, j = 0;
//	printf("first string:");
//	gets(str1);
//	printf("\nsecond strings:");
//	gets(str2);
//	while (str1[i] != '\0')
//		i++;
//	while (str1[j] != '\0')
//	{
//		str1[i] = str2[j];
//		i++;
//		j++;
//	}
//	str1[i] = '\0';
//	printf("\nAfter some  characters string is：%s \n", str1);
//}
//

