//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
//#include <stdio.h>
//
//int main()
//{
//	//由于已经知道个数 可以直接列
//	//进阶一点是  不知道多少个      先设置个define定义的标识符常量  然后 改
//	//进阶二点又是旋转数组   emmmm 这破题是给我留下阴影？  怎么做数组就想的起来?
//
//	int arr[9] = { 12, 11, 13, 14, 15, 16, 17, 18, 19 };
//	int begin = 0;
//	int end = 0;
//	int n = 0;
//	//知道9个不用多废话
//
//	//可以用第一个和最后一个数组元素等于 begin 和 end
//	//也可以指针 ·········
//
//	//已经知道要进行几次交换了 
//	//如果是进阶一点交换次数 根据元素数/2就行
//
//	for (begin = 0, end = 8; begin < 4; begin++, end--)
//	{
//		//如果用 a=a+b  b=a-b  a=a-b   因为要写数组arr[]相加减这种 太麻烦 直接找个第三变量
//
//		n = arr[begin];
//		arr[begin] = arr[end];
//			arr[end] = n;
//
//	} 
//	for (begin = 0; begin < 9; begin++)
//	{
//		printf("%d ", arr[begin]);
//	}
//	}
//	