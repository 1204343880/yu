#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int max = 0;
	int min = 0;
	int i = 0;
	int sum = 0;


	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];
	for (i = 0; i < 10; i++)
	{
		
		if (max < arr[i])
		{
			max = arr[i];
		}


		if (min > arr[i])
		{
			min = arr[i];
		}

		sum += arr[i];
	}


	printf("%f", (sum-min-max)/8.0);

	
}