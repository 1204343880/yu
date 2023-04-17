//#include<stdio.h>
////////int main()
//////{
//////	int a = 0;
//////	scanf_s("%d", &a);
//////	printf("%d", a);
//////}
////
////
////#include<stdio.h>
//
//int main()
//{
//    char arr[] = { 0 };
//
//    char* p = arr;
//
//    scanf_s("%s", arr);
//
//    printf("%d", strlen(arr));
//
//
////
////    return 0;
////
//////}
////
////#include <iostream>
////using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    int i = 0;
//    while (str[i] != '\0') {
//        i++;
//    }
//    printf("%d", i);
//    return 0;
//}



//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    int len = 0;
//    char* p = str;
//    //只要指针没有指向换行符位置
//    while (*p != '\0') {
//        //长度加1，指针p后移
//        len++;
//        p++;
//    }
//    cout << len << endl;
//
//    return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "helloworld";
//	printf("%d", strlen(arr));
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int myself_strlen(int arr[])
//{
//    while (*p != 0)
//    {
//        p++;
//        ++d;
//    }
//    return d;
//}
//char s = 0;
//int d = 0;
// *p = s;
//int main()
//{
//    char arr[1000] = { 0 };
//    scanf_s("%s", s);
//    printf("%d", myself_strlen(arr));
//}

////#include<stdio.h>
//
//int myself_strlen(int arr[])
//{
//    int d = 0;
//    char* p = arr[1000];
//    while (*p != 0)
//    {
//        p++;
//        ++d;
//    }
//    return d;
//}
//int main()
//{
//    char arr[1000];
//    scanf_s("%s", arr);
//    myself_strlen(arr);
//    printf("%d", myself_strlen(arr));
//}
//
////#include<stdio.h>
////int my_strlen(char s[])
////
////{
////    int len = 0;
////    char* p = s;
////    while (*p != '\0')
////    {
////        len++;
////        p++;
////    }
////    return len;
////}
////int main()
////{
////    char str[100];
////    scanf_s("%s", str);
////    my_strlen(str);
////    printf("%d\n", my_strlen(str));
//////    return 0;
//////}
//
//int main()
//{
//	char a = 230;
//
//	printf("%d", a);
//}
//
//
//int main()
//{
//	int x = 10;
//	int n = 10;
//
//	x += ++n;
//	printf("%d",x);
////}
//
//int main()
//{
//	int a = 1;
//	int b = 0;
//	if (a = 0)
//	{
//		printf("111111");
//	}
//	else
//	{
//		printf("22222\n");
//		printf("%d", a);
////	}
////	
//
//
//}

//#include<stdio.h>
//
//
//int a,b,c;
//
//int main()
//{
//    scanf_s("%d%d", &a, &b);
//    c = a + b;
//
//    printf("%d+%d=%d", a, b, c);
//
//    return 0;
////}
//
//#include<stdio.h>
//
//#include<math.h>
//int main()
//{
//    double a = 3.0;
//    double b = 0.5;
//    double pow(a,b);
//
//    printf("%lf",pow(a, b));
//    return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	/*********Begin*********/
//#define PI 3.14
//	double r, h, c1, Sb, Vb;
//	scanf_s("%lf %lf", &r, &h);
//	c1 = 2 * r * PI;
//	Sb = 4 * PI * r * r;
//	Vb = PI * r * r * h;
//
//	printf("C1=%.2f\nSb=%.2f\nVb=%.2f", c1, Sb, Vb);
//	/*********End**********/
//	return 0;
//}




//
//
//
//#include<stdio.h>
//
//int main()
//{
//    int a, i = 0;
//    scanf_s("%d", &a);
//    if (a == 0)
//        printf("1\n");
//    else
//    {
//        while (a != 0)
//        {
//            i++;
//            a = a / 10;
//        }
//        printf("%d", i);
//    }
//
//}
//
//
//
//












//
//
//#include<stdio.h>
//
//int main(void)
//{
//	/*********Begin*********/
//	int a, b, c, d;
//	scanf_s("%d,%d", &a, &b);
//	if (a < b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	while (b != 0)
//	{
//		d = a % b;
//		a = b;
//		b = d;
//	}
//
//	printf("%d\n", a);
//	/*********End**********/
//	return 0;
//}
//
//
//
//#include<stdio.h>
////int MaxCommonFactor(int a, int b)
//{
//	int c;
//	if (a <= 0 || b <= 0)
//		return -1;
//	while (b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	return a;
//}
//int main(void)
//{
//	/*********Begin*********/
//	int a, b, c, d;
//	scanf_s("%d,%d", &a, &b);
//	if (a < b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	while (b != 0)
//	{
//		d = a % b;
//		a = b;
//		b = d;
//	}
//
//	printf("%d\n", a);
//	/*********End**********/
//	return 0;
//}
////
//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf_s("%d%d",&a,&b );
//	printf("%d,%d", a, b);
//}
//
//
//#include<stdio.h>
////
//int main()
//
//{
//	int input = 1;
//	do
//	{
//		int input = 0;
//		scanf_s("%d", &input);
//		printf("hehe\n");
//
//	}
//
//	while (input);
////	printf("%d", input);
////
////}
////
//
//
//#include<stdio.h>
//
//int main()
//{
//	int x = 0;
//	x++;
//	printf("%d", x);
//}

#define _CRT_SECURE_NO_WARNINGS



//3.1


//#include<stdio.h>
//
//int main()
//{
//
//	int a, b, c,d;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	if (a > c)
//	{
//		a = a + c;
//		c = a - c;
//		a = a - c;
//	}
//	if (b > c)
//	{
//		b = b + c;
//		c = b - c;
//		b = b - c;
//
//
//	}
//	d = c + b;
//
//	printf("%d", d);
//
//}
//

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	float b, c;
//
//
//	scanf("%d", &a);
//
//	if (a <= 26)
//	{
//		b = 1.98;
//		c = a * b;
//	}
//	else if(a > 26 || a <= 37)
//	{
//		b = 2.97;
//		c = a * b;
//	}
//	else
//	{
//		b = 3.96;
//		c = a * b;
//	}
//
//	printf("%.2f", c);
//}
//
//#include<stdio.h>
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = a / 10;
//
//	switch (b)
//	{
//	case 9:
//		printf("A");
//		break;
//	case 8:
//		printf("B");
//		break;
//	case 7:
//		printf("C");
//		break;
//	case 6:
//		printf("D");
//		break;
//	default:
//		printf("E");
//		break;
////	}
////}
//
//#include <stdio.h>
//int main()
//{
//	double a = 0, b = 0, c = 0, d = 0;
//	printf("请按顺序输入作业成绩，期中成绩，期末成绩:\n");
//	scanf_s("%.1lf %.1lf %.1lf", &a, &b, &c);
//	d = 0.2 * a + 0.3 * b + 0.5 * c;
//	printf("总成绩为%.1f", d);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//
//	int nums[300] = {0};
//	int k = 0;
//	int b = 0;
//	int i = 0;
//	int c = 0;
//	int sum = 0;
//
//	scanf_s("%d", &i);
//	for (int a = 0; a < i; a++)
//	{
//		scanf_s("%d ", &nums[a]);
//	}
//
//	scanf_s("%d", &k);
//
//
//	//这个地方的for循环真是小丑行为    这种转移思想很拉跨     照着这种思想 还需要创造三个新变量来存储这个其中用到的变量
//	//for (b = 0; b < k; b++)
//	//{
//	//	sum = nums[c];
//	//	for (int c =i-1 ; c >0; c--)
//	//	{
//	//		nums[c -1] = nums[c];
//	//	}
//	//	nums[0] = sum;
//
//	//}
//
//	for (b = 0; b < k; b++)
//	{
//	
//		for (int c = i - 1; c > 0; c--)
//		{
//			sum = nums[c - 1] + nums[c];
//			nums[c - 1] = sum - nums[c - 1];
//			nums[c] = sum - nums[c - 1];
//
//		}
//	
//	}
//
//	for (int c = 0; c < i; c++)
//	{
//		printf("%d ", nums[c]);
//	}
//}

//
//
//
//#include<stdio.h>
//
//int main()
//{
//	printf("Hello world!");
//
////}
//
//#include <stdio.h>
//
//int  add(int x, int y)
//{
//    int i = 0;
//    if (x <= 12)
//    {
//        y = 2;
//    }
//    else
//    {
//        i = x / 12;
//        y = i * 4 + 2;
//    }
//
//    return y;
//}
//
//int main()
//{
//
//    int human = 0;
//    int miu = 0;
//    int c = 0;
//
//    scanf_s("%d", &human);
//    c = add(human, miu);
//
//
//    printf("%d", c);
//    return 0;
//}
//
//
//
//#include<stdio.h>
//int main()
//{
//    int a = printf("Hello world!");
//    printf("\n%d", a);
//    return 0;
//}






//                           3*4数组的输入输出
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4] = { 0 };
//	int a = 0;
//	int b = 0;
//
//	for (int a = 0; a < 3; a++)
//	{
//		for (int b = 0; b < 4; b++)
//		{
//			scanf_s("%d ", &arr[a][b]);
//
//		}
//		printf("\n");
//
//	}
//	for (int a = 0; a < 3; a++)
//	{
//		for (int b = 0; b < 4; b++)
//		{
//			printf("%d ", arr[a][b]);
//
//		}
//		printf("\n");
//
//	}
//
////}
//
//
//
#include<stdio.h>
int main()
{

    for (int a = 6; a < 10; a++)
    {
        printf("%d", a);

        a = 5;
    }
    return 0;
}


