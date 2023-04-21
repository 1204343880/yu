#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


//有一张足够大的纸，厚0.09毫米，问将它对折多少次后可以达到珠穆朗玛峰的高度（8848米）

//这纸真会玩

//#include<stdio.h>
//
//int main()
//{
//
//	double  a = 0.09;
//	int sum = 0;
//
//	//  a / 1000 * 2^n = 8848   ----->     a*2^n = 8848000
//	for (a = 0.09; a <= 8848000; sum++)
//	{
//
//		a *= 2; 
//	}
//	printf("%d", sum);
//}