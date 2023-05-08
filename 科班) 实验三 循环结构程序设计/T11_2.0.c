//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
///*平方镜反数。如果一个数的平方数，是其反序数的平方数的反序数，则称该数和其反序数是一对平方镜反数。
//例如，12的平方数是144，其反序数为21，21的平方数是441，其反序数是12的平方数144，故12和21是一对平方镜反数。
//请设计程序找出200以内的所有平方镜反数对*/
//
#include <stdio.h>

int main()
{

	int i = 0;
	int a = 0;
	int mem1 = 0; //倒着的输出
	int mem2 = 0;
	int sqr = 0;  //平方 
 

	for (i = 1; i < 201; i++)
	{
		a = i;
		mem1 = 0;

	//反着输出这个数 也是一个难点
		while (a != 0 )
		{
			//大坑  记得清空 mem
			mem1 = mem1 * 10 + a % 10;
			a /= 10;
		}

		sqr = mem1*mem1;
		mem2 = 0;

		while (sqr != 0)
		{
			mem2 = mem2 * 10 + sqr % 10;
			sqr /= 10;
		}
		if ( (i*i) == mem2)
		{
			printf("%d ", i);
		}
		

	}
}