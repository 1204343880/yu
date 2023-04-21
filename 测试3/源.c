#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
//
//
//#include<stdio.h>
//#include<math.h>
//void main()
//{
//	int k, m, i, n = 0;
//	printf("非素数为：\n");
//	for (m = 2; m <= 20; m++)
//	{
//		k = (int)sqrt(m);
//		for (i = 2; i <= k; i++)
//			if (m % i == 0)
//			{
//				printf("%-5d", m);
//				n++;
//				if (n % 8 == 0)
//					printf("\n");
//				break;
//			}
//	}
//}

//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<cmath>
//
//using namespace std;
//
//int main()
//{
//    int T;
//    int n;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d", &n);
//        printf("%d=", n);
//        int i = 2;
//        int j = 0; //下面的 j 只是为了输出格式的控制。
//        while (i * i <= n)
//        {
//            while (n % i == 0)
//            {
//                if (!j)
//                    printf("%d", i);
//                else
//                    printf("*%d", i);
//                n /= i;
//                j = 1;
//            }
//            i++;
//        }
//        if (n != 1 && j == 0)
//        {
//            printf("%d", n);
//        }
//        else if (n != 1 && j == 1)
//        {
//            printf("*%d", n);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


# include<stdio.h>
int main()
{
	int m, n;
	for (m = 10; ; m++)
	{
		if ((m % 5 == 1) && (m % 6) == 5 && (m % 7) == 4 && (m % 11) == 10)
		{
			printf("%d", m); break;
		}
	}
	return 0;
}
