#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//                                                           由键盘输入三个整数a、b、c，要求输出其中最大的数。


//方法1    比较麻烦  先排序 再找对应最大值
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;

	}
	if (a > c)
	{
		a = a + c;
		c = a - c;
		a = a - c;

	}

	if (b > c)
	{
		b = b + c;
		c = b - c;
		b = b - c;

	}
	printf("%d", c);

}




//方法2         利用数组储存
#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);

	}
	max = arr[0];

	for (i = 0; i < 3; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}

	}

	printf("%d", max);



}
