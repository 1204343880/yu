#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>


     //   这个是 100-200 素数               如果是从1开始 记得特判1
int main()
{
	int i = 0;
	int a = 2;
	int b = 0;
	
	//这个地方可以但没那么好
	b = sqrt(200);
	for (i = 100; i < 201; i++)
	{

		b = sqrt(i);

		for (a = 2; a <= b; a++)
		{

			if (i % a == 0)
			{
				break;
			}



		}
		// 此处也是利用了for循环结束加1       从别人那学到的


		if (a > b)
		{
			printf("%d ", i);
		}




	}

	return 0;
}


//可以输入的那种
#include <math.h>
#include <stdio.h>
void  main()
{
	int m, n, i, j, k, sum;
	sum = 0;
	scanf("%d %d", &m, &n);

	for (i = m; i <= n; i++)
	{
		k = sqrt(i);

		for (j = 2; j <= k; j++)
		{
			if (i % j == 0)
				break;
		}

		if (j > k)
		{
			sum += i;
			printf("非素数 is: %d\n", i);
		}
	}
	printf("Sum is: %d\n", sum);
}