#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)




//     方法一    ：   跟素数类似的方法（ % / ）方法

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int over = 0;    
	int max = 0;



	scanf("%d %d", &a, &b);


	//不用在意大小 因为算不出来整数的 不过判断下 循环次数会减少一些
	// 不要从0开始
	for (over = 1; over <= a; over++)
	{
		if (a % over == 0 && b % over == 0)
		{
			max = over;
		}


	}

	printf("%d", max);
}







//方法二 ： 碾转相除法
/*提示：求最大公约数的“碾转相除法”算法如下：
（1）将两数中大的那个放在m中，小的放在n中
（2）求出m被n除后的余数r
（3）若余数为0则执行步骤（7）；否则执行步骤（4）
（4）把除数作为新的被除数；把余数作为新的除数
（5）求出新的余数r
（6）重复步骤（3）到（5）
（7）输出n，n即为最大公约数。
*/
#include<stdio.h>

int main()
{//可以直接让执行者按规定大在前 小在后输入     也可以   正常判断
	int m = 0;
	int n = 0;
	int r = 1;
	scanf("%d %d", &m, &n);
	if (m < n)
	{
		//保证 m大 n小
		m = m + n;
		n = m - n;
		m = m - n;
	}

	//实现方法一         很简介 但思路更妙一些    他是利用 除数为0也就是上次的余数为0， 上次余数为0  那么上次n就是要输出的结果 上次的n又是这次的m
	//while (n != 0)
	//{
	//	r = m % n;
	//	m = n;
	//	n = r;
	//}


	//实现方法二    完全照着定义来判断
	while (r != 0)
	{
		r = m % n;
		if (r == 0)
		{
			break;
		}
		m = n;
		n = r;
	}
	printf("%d", m);
}