#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>

int main()
{
	int line = 0;
	int col = 0;
	double arr[3][5] = { 0 };
	double sum = 0;

	for (line = 0; line < 3; line++)
	{

		for (col = 0; col < 4; col++)
		{
			scanf("%lf", &arr[line][col]);
		}

	}

	for (line = 0; line < 3; line++)
	{

		for (col = 0; col < 4; col++)
		{
			sum += arr[line][col];
			arr[line][4] = sum / 4.0;;
		}
		sum = 0;
	}



	for (line = 0; line < 3; line++)
	{

		for (col = 0; col < 5; col++)
		{
			printf("%-8.2lf", arr[line][col]);
		}
		printf("\n");
	}



	return 0;
}