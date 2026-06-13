#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	//按照补码的形式进行运算，最后格式化成为有符号整数
}