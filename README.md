#include<stdio.h>

int main()
{
	int i = 0;

	float a = 0;
	float b = 0;
	float sign = 1;
	//float d=0;


	for (i = 1; i <= 99; i += 2,sign=-sign)//i<=100也是可行的 因为不可能出现刚好等于100这个情况
	{
	  //在引入第三变量可以写为:
	  //   a = sign * (i) / (i + 1);
	  //   a= a + d;
	  //   d= a;


		a += sign * (i) / (i + 1);


	}
	printf("输出结果为结果是%f\n", a);
	return 0;
}
