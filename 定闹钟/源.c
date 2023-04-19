#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


//                                                                                   我写的 真的很拉跨
//#include <stdio.h>
//
//int main()
//{
//    int hour = 0;
//    int min1 = 0;
//    int min2 = 0;
//    int houradd = 0;
//    int minadd = 0;
//    int num = 0;
//    scanf("%d:%d %d", &hour, &min1, &min2);
//
//    houradd = min2 / 60;
//    minadd = min2 % 60;
//
//    hour += houradd;
//    min1 += minadd;
//    if (min1 > 60)
//    {
//        num = min1 / 60;
//        min1 = min1 % 60;
//        while (num > 0)
//        {
//            ++hour;
//            --num;
//        }
//    }
//    hour = hour % 24;
//    if (hour < 10)
//    {
//        if (min1 > 10)
//        {
//            printf("0%d:%d", hour, min1);
//        }
//        else
//        {
//
//            printf("0%d:0%d", hour, min1);
//        }
//    }
//    else
//    {
//        if (min1 > 10)
//        {
//            printf("%d:%d", hour, min1);
//        }
//        else
//        {
//
//            printf("0%d:0%d", hour, min1);
//        }
//    }
//}
//
// 
              //                                                                别人写的






#include<stdio.h>
int main(void)
{
    int hour, min, howmin;
    scanf("%d:%d %d", &hour, &min, &howmin);//按照格式输入三个数
    hour = (hour + (howmin + min) / 60) % 24;//计算小时，因为不考虑日期，所以先计算得到总共多少小时，再对24取余，以防出现大于24的情况
    min = (howmin + min) % 60;//看剩下多少分钟
    printf("%#02d:%#02d", hour, min);
    return 0;
}