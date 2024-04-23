#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)



#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[20] = { 0 };
//
//	strcpy(arr2,arr1);
//
//	printf("%s", arr2);
//	return 0;
//}










#include<stdio.h>
//
////肯定是要传地址 不然根本无法实现
//void my_strcpy(char* a, char* b)
//{
//	while (*b !='\0')
//	{
//		*a = *b;
//
//		//一定要搞清楚++的意思
//		//虽然这样想没问题 但是呢 如果数组本身长度就是已经出现问题的 这样就会有可能会导致栈溢出 数组越界访问变成野指针
//		//并且有没有什么办法 直接优化 直接一个循环就可以实现
//		a++;
//		b++;
//
//        //直接在这里实现 也是很方便 不知道循环次数用while 知道用for (因为多了限制条件)
//		if (*b=='\0')
//		{
//			*a = '\0';
//		}
//	}
//
//
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[20] = "***********";
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s", arr2);
//	return 0;
//}






#include<stdio.h>
#include<assert.h>
//
////肯定是要传地址 不然根本无法实现
//void my_strcpy(char* a, char* b)
//{
//
//	assert(a != NULL);
//	assert(b != NULL);
//
//	while (*b != '\0')
//	{
//		*a = *b;
//
//		//一定要搞清楚++的意思
//		//虽然这样想没问题 但是呢 如果数组本身长度就是已经出现问题的 这样就会有可能会导致栈溢出 数组越界访问变成野指针
//		//并且有没有什么办法 直接优化 直接一个循环就可以实现
//		a++;
//		b++;
//
//		//直接在这里实现 也是很方便 不知道循环次数用while 知道用for (因为多了限制条件)
//		if (*b == '\0')
//		{
//			// \0的拷贝
//			*a = '\0';
//		}
//	}
//
//
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[20] = "***********";
//	char* p = NULL;
//	my_strcpy(p, arr1);
//
//	printf("%s", arr2);
//	return 0;
//}


#include<stdio.h>
#include<assert.h>

////肯定是要传地址 不然根本无法实现
//char* my_strcpy(char* a, char* b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//
//	//原地址 这个地方很细节 很牛的！！
//	char* flag = a;
//	while (*a++ = *b++); //空语句
//
//	//这个这个地方 对指针理解需要加深 虽然是函数 但是函数名更像变量的类型 
//	// 也就是返回值要和其对应 char* 后面缺的是一个指针 指针里面存放的就是地址 也就是flag/a/b
//	return flag;
//}
//
//int main()
//{
//	char arr1[20] = "hello world";
//	char arr2[20] = "***********";
//	char* p = NULL;
//
//	//这个地方是否正确呢？ 这个想法是否合理？ 你返回的应该是指针的地址 没问题 那么指针地址 能直接打印这个字符串？
//	printf("%s", my_strcpy(arr2, arr1));
//	return 0;
//}/



#include<stdio.h>
#include<assert.h>
//
//
//char* my_strcpy(char* a,const char* b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//
//	char* flag = a;
//	while (*a++ = *b++); //空语句
//
//	return flag;
//}
//
//int main()
//{
//	char arr1[20] = "hello world";
//	char arr2[20] = "***********";
//	char* p = NULL;
//
//	//这个地方是否正确呢？ 这个想法是否合理？ 你返回的应该是指针的地址 没问题 那么指针地址 能直接打印这个字符串？
//	printf("%s", my_strcpy(arr2, arr1));
//	return 0;
//}

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int m = 20;
//	int  * const p = &a;
//	p = &m;
//	*p = 10;
//
//	printf("%d", *p);
//}


#include<stdio.h>
#include<assert.h>

//int my_strlen(const char*a)
//{
//	assert(a != NULL);
//	int num = 0;
//	while (*a++ != '\0')
//	{
//		num++;
//	}
//
//	return num;
//}
//
//int main()
//{
	//char arr1[100] = { 0 };
	//int i = 0;

	//while (1)
	//{
	//	scanf("%c", &arr1[i]);
	//	if (arr1[i] != '\n')
	//	{
	//		i++;
	//	}
	//	else
	//	{
	//		arr1[i] = '\0';
	//		break;
	//	}
	//}
//
//	printf("%d", my_strlen(arr1));
//}


//#include <stdio.h>
//int my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//	while (*str++)	//判断字符串是否结束
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr1[100] = { 0 };
//	int i = 0;
//
//	while (1)
//	{
//		scanf("%c", &arr1[i]);
//		if (arr1[i] != '\n')
//		{
//			i++;
//		}
//		else
//		{
//			arr1[i] = '\0';
//			break;
//		}
//	}
//	//测试
//	size_t len = my_strlen(arr1);
//	printf("len = %zd\n", len);
//	return 0;
//}