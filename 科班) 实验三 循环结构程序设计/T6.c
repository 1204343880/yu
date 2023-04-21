#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

/*试下面程序，找出程序中的错误（10分）。
求两个正整数m，n之间的非素数之和（包含m和n）。
例如：如果m=2,n=20,则程序的输出为：Sum is:132
#include <math.h>
#include <stdio.h>
void  main()
{  int m,n,i,j,k,sum;
sum=0;
for ( i=m; i<=n; i++)
{   k=sqrt(i);
for (j=2;j <= k; j++)
       if (i % j == 0)   break;
if(j>k )    {  sum += i; printf("非素数 is: %d\n",i);}
}
printf("Sum is: %d\n",sum);
}*/


////这个地方求的素数
//#include <math.h>
//#include <stdio.h>
//void  main()
//{
//    int m, n, i, j, k, sum;
//    sum = 0;
//    scanf("%d %d", &m, &n);
//
//    for (i = m; i <= n; i++)
//    {
//        k = sqrt(i);
//
//        for (j = 2; j <= k; j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//
//        //原来求的是素数
//        if (j > k) 
//        {
//        }
//        else
//        {
//            sum += i;
//            printf("非素数 is: %d\n", i);
//        }
//
//    }
//    printf("Sum is: %d\n", sum);
//}