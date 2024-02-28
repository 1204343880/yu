#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	
//	scanf("%d", &line);
//
//
//	for (int i = 1; i <= line; i++)
//	{
//		for (int i2 = 1; i2 <= i; i2++)
//		{
//			printf("%2d*%2d=%4d  ",i ,i2 ,i*i2);  
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void Mult(int line)
//{
//
//	for (int i = 1; i <= line; i++)
//	{
//		for (int i2 = 1; i2 <= i; i2++)
//		{
//			printf("%2d*%2d=%4d  ", i, i2, i * i2);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//
//	scanf("%d", &line);
//
//	Mult(line);
//
//	return 0;
//}


//#include<stdio.h>
//
//void Mult(int*pa, int*pb)
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//
//	printf("%d %d", *pa, *pb);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("请输入想要交换的数：");
//	scanf("%d %d", &a ,&b);
//	int* pa = &a;
//	int* pb = &b;
//
//	//怎么传地址来着？
//	Mult(pa,pb);
//
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//
//void	is_prime()
//{
//	int begin = 100;
//	int i2 = 0;
//
//	for (int i1 = begin; i1 <= 200; i1++)
//	{
//		// sqrt函数需要头文件吗？ 
//		//还有要理解清除 为什么 不是 到i1这个具体数字 到sqrt(i1)就可以了
//		//还有 sqrt是取根号 向下取整  又为什么向下取整就可以实现呢 而不是向上
//		for (i2 = 2; i2 <= sqrt(i1); i2++)
//		{
//			if (i1 % i2 == 0)
//			{
////				printf("不是素数");
//				break;
//			}
//		}
//
//
//		if (i2 > sqrt(i1))
//		{
////				printf("是素数");
//			printf("%d ", i1);
//		}
//	}
//}
//
//int main()
//{
//	is_prime();
//	return 0;
//}


////非递归
//#include<stdio.h>
//
//int fac(number)
//{
//	int arr[1000] = { 1, 1 };
//
//	for (int i = 2; i<number; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//
//	printf("%d\n", arr[number - 1]);
//
//}
//
//int main()
//{
//	int Number = 0;
//
////如果想实现多组输入 还需要一些限制条件 可我又忘了 等下再回顾下
//
//	while (scanf("%d", &Number) != EOF)
//	{
//		fac(Number);
//	}
//
//	return 0;
//}

//递归
#include<stdio.h>

int fac(int number)
{
	//先排除 0和1 两种情况
	if (number == 1 || number == 2)
	{
		return 1;
	}
	else
	{
		return fac(number - 1)+fac(number-2);
	}

}

int main()
{
	int Number = 0;
	int flag = 0;
	//如果想实现多组输入 还需要一些限制条件 可我又忘了 等下再回顾下

	while (scanf("%d", &Number) != EOF)
	{
		flag = fac(Number);
		printf("%d\n", flag);
	}

	return 0;
}
