#include<stdio.h>



//排序的可以做 不排序的不可以做      还要专门写个排序吗    可以但是很麻烦     那么救赎之道在？？？？？
int main()
{
	int  arr[10] = { 0,1,2,3,4,5,6,8,9 };

	int n = 0;
	int i = 0;
	for (int n = 0; n < 10; n++)
	{
			if (arr[i] == n)
			{
				i++;
			}
			else
			{
				printf("%d", n);
			}
		
	}




}