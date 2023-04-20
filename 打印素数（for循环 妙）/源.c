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