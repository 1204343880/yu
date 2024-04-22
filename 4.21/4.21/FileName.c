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

//肯定是要传地址 不然根本无法实现
void my_strcpy(char* a, char* b)
{

	assert(a != NULL);
	assert(b != NULL);

	while (*b != '\0')
	{
		*a = *b;

		//一定要搞清楚++的意思
		//虽然这样想没问题 但是呢 如果数组本身长度就是已经出现问题的 这样就会有可能会导致栈溢出 数组越界访问变成野指针
		//并且有没有什么办法 直接优化 直接一个循环就可以实现
		a++;
		b++;

		//直接在这里实现 也是很方便 不知道循环次数用while 知道用for (因为多了限制条件)
		if (*b == '\0')
		{
			// \0的拷贝
			*a = '\0';
		}
	}


}

int main()
{
	char arr1[20] = "hello";
	char arr2[20] = "***********";
	char* p = NULL;
	my_strcpy(p, arr1);

	printf("%s", arr2);
	return 0;
}