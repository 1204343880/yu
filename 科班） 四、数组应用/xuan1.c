//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[3][4] = { 0 };
//	int line = 0;
//	int col = 0;
//	int max = 0;
//
//	for (line = 0; line < 3; line++)
//	{
//		for (col = 0; col < 4; col++)
//		{
//			scanf("%d", &arr[line][col]);
//
//			max = arr[0][0];
//
//			if (max < arr[line][col])
//			{
//				max = arr[line][col];
//			}
//		}
//	}
//
//	for (line = 0; line < 3; line++)
//	{
//		for (col = 0; col < 4; col++)
//		{
//			if (max == arr[line][col])
//			{
//				printf("第%d行  第%d列",line + 1, col + 1);
//			}
//		}
//	}
//}