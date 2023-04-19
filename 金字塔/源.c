#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
                 //                                                                        太慢了   思路也不清晰
#include<stdio.h>

int main()
{
	int a = 0;
	int num = 0;  //number次数
	int a1 = 0;
	int a2 = 0;
	int b = 0;
	int b2 = 0;
	int num2 = 0;
	scanf("%d", &num);

	b2 = num;
	for (a = 0; a < num-1; a++)
	{

		for (a1 = num2; a1>0; a1--)   //这个地方也是可以的  那种 输入数逐渐增大一位
		{
			printf(" ");
		}
		num2++;

		for (a2 = 2*b2-1; a2 > 0; a2--)
		{
			printf("%d", b2);
		}
		printf("\n");
		b2--;
		
	}

	b = 1;

    for (a=0 ;a < num ;a++ )
	{

		for (a1 = 0; a1 < num-b; a1++)
		{
			printf(" ");
		}

		for (a2 = 0; a2 < 2*b - 1;a2++ )
		{
			printf("%d",b);
		}
		printf("\n");
		b++;
	}


	return 0;

}
