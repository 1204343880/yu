#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


#include<stdio.h>

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int i = 0;
	//这里创建数组 后面计算天数方便很多   留一个0是因为 1月不用加；    但其实arr[12]用不到  因为不可能有机会加上12月
	int arr1[13] = { 0,31,28,31,30,31,30,31,31,30,30,30,31 };

	printf("格式为： 年 月 日 （每个数值空格一下）:");
	scanf("%d %d %d", &year, &month, &day);


	if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) //闰年的判断条件
	{
		//闰年 2月是29天
		arr1[2] += 1;
	}

	for (i < 0; i < month; i++)
	{
		day += arr1[i];
	}

	printf("%d", day);



	return 0;
}
