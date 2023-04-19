#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//int main()
//{
////	int line = 0;      
//	int col = 0;     //column 是英语 列 的意思
//	int arr[4][4] = { 0 };
//
//	//循环镶嵌实现输入数组
//	for (line = 0; line < 4; line++)
//	{
//
//		for (col = 0; col < 4; col++)
//		{
//			scanf("%d", &arr[line][col]);
//		}
//	}
//
//	//实现行列交换
//
//	for (line = 0; line < 4; line++)
//	{
//		    // 细节所在：判断条件 
//		for (col = 0; col < line; col++)
//		{
//			/*      a = a + b      b = a - b       a=a-b   同原理        */
//			arr[line][col] = arr[line][col] + arr[col][line];
//			arr[col][line] = arr[line][col] - arr[col][line];
//			arr[line][col] = arr[line][col] - arr[col][line];
//			
//		}
//	}
//
//
//
//
//	//原理同第一个循环   实现输出数组
//	for (line = 0; line < 4; line++)
//	{
//
//		for (col = 0; col < 4; col++)
//		{
//			printf("%d ", arr[line][col]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//
//	      //事实证明 确实不太行     出了这个循环 会接着 下一行输出   而不是第二个for循环 也是第一行输出
//#include<stdio.h>
//
//	int main()
//	{
//		
//		for (int a = 0; a < 3; a++)
//		{
//			printf("111111\n");
//			printf("22222222");
//		}
//		for (int a = 0; a < 3; a++)
//		{
//			printf("111111\n");
//			printf("22222222");
//		}
//
//
//	}


//#include<stdio.h>
//
//	int main()
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		scanf("%d %d %d", &a, &b, &c);
//
//
//	}

//#include<stdio.h>
//
//	int main()
//	{
//		int arr[10] = { 0 };
//		int i = 0;
//		int max = 0;
//
//		for (i = 0; i < 10; i++)
//		{
//			scanf("%d", &arr[i]);
//
//		}
//		max = arr[0];
//
//		for (i = 0; i < 10; i++)
//		{
//			if (max < arr[i])
//			{
//				max = arr[i];
//		    }
//
//		}
//
//		printf("%d", max);
//
//
//
//	}

//#include<stdio.h>
//
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	double sign = 1;
//
//	for (i = 1; i < 101; i++)
//	{
//		sum += sign / i;
//		sign = -sign;
//	}
//
//	printf("%lf", sum);
//		 
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 10 == 9)
//		{
//			num++;
//		}
//
//		if (i / 10== 9)
//		{
//			num++;
//		}
//	}
//	printf("%d", num);
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//
//	}
//	if (a > c)
//	{
//		a = a + c;
//		c = a - c;
//		a = a - c;
//
//	}
//
//	if (b > c)
//	{
//		b = b + c;
//		c = b - c;
//		b = b - c;
//
//	}
//	printf("%d %d %d",c ,b ,a);
//
//}

//#include<stdio.h>
//#include<math.h>
//
//
//int main()
//{
//	int i = 0;
//	int a = 2;
//	int b = 0;
//
//	b = sqrt(200);
//	for (i = 100; i < 201; i++)
//	{
//
//		b = sqrt(i);
//
//		for (a = 2; a <= b; a++)
//		{
//
//			if (i % a == 0)
//			{
//				break;
//			}
//
//
//
//		}
// // 此处也是利用了for循环结束加1
//
//		if (a > b)
//		{
//			printf("%d ", i);
//		}
//
//
//
//
//	}
//
//	return 0;
//}
//


#include<stdio.h>

int main()
{
	int year = 0;



	for (year = 1000; year < 2001; year++)
	{
		// 里面肯定非整年

		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
		}

		if (year % 100 == 0 && year % 400 == 0)
		{
			printf("%d ", year);
		}


	}



	return 0;
}