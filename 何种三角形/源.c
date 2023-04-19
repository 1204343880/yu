#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if ((a + b) > c && (a + c) > b && (b + c) > a)
        {
            if (a == b && b == c && a == c)
            {
                printf("Equilateral triangle!\n");
            }

            else
            {
                if (a == b || a == c || b == c)
                {
                    printf("Isosceles triangle!\n");
                }
                else
                {
                    printf("Ordinary triangle!");
                }
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }

    }
    return 0;
}