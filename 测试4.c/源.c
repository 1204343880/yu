#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//#include<stdio.h>
//int main()
//{
//    int a;
//    int arr[10][10];
//    int max = 0;
//
//
//    scanf("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d-%d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//        arr[i][3] = arr[i][2];
//    }
//
//    for (int i = 0; i < (a / 2); i++)
//    {
//        for (int j = (a / 2); j < a && j >= (a / 2); j++)
//        {
//
//            if (arr[i][0] == arr[j][0])
//            {
//                arr[i][3] += arr[j][2];
//            }
//        }
//    }
//
//    for (int i = 0; i < (a / 2); i++)
//    {
//        if (max < arr[i][3])
//        {
//            max = arr[i][3];
//        }
//    }
//
//    for (int i = 0; i < (a / 2); i++)
//    {
//        if (max == arr[i][3])
//        {
//            printf("%d %d", arr[i][0], arr[i][3]);
//        }
//    }
//
//}

//
//#include<stdio.h>

//typedef  unsigned long un_64;
//
//int main()
//{
//	unsigned long a = 1;
//	un_64 b = 1;
//
//	return 0;
//}



////define定义标识符常量
//#define MAX 1000
//
////define定义宏
//#define ADD(x, y) (x)+(y)
//int main()
//{
//
//		int sum = ADD(2, 3);
//		printf("sum = %d\n", sum);
//		sum = 10 * ADD(2, 3);
//		printf("sum = %d\n", sum);
//
//		return 0;
//		return 0;
//	}
//
//


#include <stdio.h>


#define fun(a,b) a<b?a:b

int main()
{
	int x = 5;
	int y = 8;
	int z = 0;
	int h = 0;

	h = fun(x, y);
	z = 4 + fun(x, y);

	printf("%d\n", h);
	printf("%d", z);
	
}