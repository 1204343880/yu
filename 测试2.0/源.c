#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//int main()
//{
////	int line = 0;      
//	int col = 0;     //column 是英语 列 的意思
//	int arr[4][4] = { 0 };
//
//	//循环镶嵌实现输入数组
//	for (line = 0; line < 4; line++)
//	{
//
//		for (col = 0; col < 4; col++)
//		{
//			scanf("%d", &arr[line][col]);
//		}
//	}
//
//	//实现行列交换
//
//	for (line = 0; line < 4; line++)
//	{
//		    // 细节所在：判断条件 
//		for (col = 0; col < line; col++)
//		{
//			/*      a = a + b      b = a - b       a=a-b   同原理        */
//			arr[line][col] = arr[line][col] + arr[col][line];
//			arr[col][line] = arr[line][col] - arr[col][line];
//			arr[line][col] = arr[line][col] - arr[col][line];
//			
//		}
//	}
//
//
//
//
//	//原理同第一个循环   实现输出数组
//	for (line = 0; line < 4; line++)
//	{
//
//		for (col = 0; col < 4; col++)
//		{
//			printf("%d ", arr[line][col]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//
//	      //事实证明 确实不太行     出了这个循环 会接着 下一行输出   而不是第二个for循环 也是第一行输出
//#include<stdio.h>
//
//	int main()
//	{
//		
//		for (int a = 0; a < 3; a++)
//		{
//			printf("111111\n");
//			printf("22222222");
//		}
//		for (int a = 0; a < 3; a++)
//		{
//			printf("111111\n");
//			printf("22222222");
//		}
//
//
//	}


//#include<stdio.h>
//
//	int main()
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		scanf("%d %d %d", &a, &b, &c);
//
//
//	}

//#include<stdio.h>
//
//	int main()
//	{
//		int arr[10] = { 0 };
//		int i = 0;
//		int max = 0;
//
//		for (i = 0; i < 10; i++)
//		{
//			scanf("%d", &arr[i]);
//
//		}
//		max = arr[0];
//
//		for (i = 0; i < 10; i++)
//		{
//			if (max < arr[i])
//			{
//				max = arr[i];
//		    }
//
//		}
//
//		printf("%d", max);
//
//
//
//	}

//#include<stdio.h>
//
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	double sign = 1;
//
//	for (i = 1; i < 101; i++)
//	{
//		sum += sign / i;
//		sign = -sign;
//	}
//
//	printf("%lf", sum);
//		 
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 10 == 9)
//		{
//			num++;
//		}
//
//		if (i / 10== 9)
//		{
//			num++;
//		}
//	}
//	printf("%d", num);
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//
//	}
//	if (a > c)
//	{
//		a = a + c;
//		c = a - c;
//		a = a - c;
//
//	}
//
//	if (b > c)
//	{
//		b = b + c;
//		c = b - c;
//		b = b - c;
//
//	}
//	printf("%d %d %d",c ,b ,a);
//
//}

//#include<stdio.h>
//#include<math.h>
//
//
//int main()
//{
//	int i = 0;
//	int a = 2;
//	int b = 0;
//
//	b = sqrt(200);
//	for (i = 100; i < 201; i++)
//	{
//
//		b = sqrt(i);
//
//		for (a = 2; a <= b; a++)
//		{
//
//			if (i % a == 0)
//			{
//				break;
//			}
//
//
//
//		}
// // 此处也是利用了for循环结束加1
//
//		if (a > b)
//		{
//			printf("%d ", i);
//		}
//
//
//
//
//	}
//
//	return 0;
//}
//


//#include<stdio.h>
//
//int main()
//{
//	int year = 0;
//
//
//
//	for (year = 1000; year < 2001; year++)
//	{
//		// 里面肯定非整年
//
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//
//		if (year % 100 == 0 && year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//
//
//	}
//
//
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//
//	if (x < 1)
//	{
//		printf("%d", a);
//	}
//
//	else if(x >=1 && x<10)
//	{
//		printf("%d", 2 * x - 1);
//	}
//
//	else
//	{
//		printf("%d", 3x - 11);
//	}
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 90 && a <= 100)
//	{
//		printf("A");
//	}
//	else if (a >= 80 && a <= 89)
//	{
//		printf("B");
//	}
//	else if (a >= 70 && a <= 79)
//	{
//		printf("C");
//	}
//	else if (a >= 60 && a <= 69)
//	{
//		printf("D");
//	}
//	else if (a >= 0 && a <= 59)
//	{
//		printf("E");
//	}
//	else
//	{
//		printf("成绩输入错误");
//	}
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a <= 100 && a >= 0)
//	{
//		switch (a / 10)
//		{
//		case 10:
//		case 9:
//			printf("A");
//			break;
//		case 8:
//			printf("B");
//			break;
//		case 7:
//			printf("C");
//			break;
//		case 6:
//			printf("D");
//			break;
//		default:
//			printf("E");
//			break;
//		}
//
//	}
//	else
//	{
//		printf("成绩输入错误");
//	}
//}
//
//#include  <stdio.h>
//void main()
//{
//	double  x, y;
//
//	printf("Enter x:");
//	scanf("%lf", x);
//	if (x != 0)
//	{
//		y = 1 / x;
//	}
//	else
//	{
//		y = 0;
//	}
//	printf("f(%.2f) = %.1f\n", x, y);
//}

//#include<stdio.h>
//
//int main()
//{
//	int kilo = 0;
//	int money = 0;
//	scanf("%d", &kilo);
//
//	if (kilo < 20)
//	{
//		printf("0\n 您不需要支付任何钱");
//	}
//	else if (kilo < 40 && kilo >= 20)
//	{
//		kilo -= 20;
//		money = kilo * 2;
//		printf("您需要额外支付%d元", money);
//
//	}
//	else
//	{
//		//俩思路 一种是先口算算出来前40kg （√）   第二种麻烦点 ，一点点写出来
//
//		money = 20;
//		kilo -= 40;
//		money += kilo * 5;
//		printf("您需要额外支付%d元", money);
//	}
//}

//
////看到这个题 让我想起来通讯增删查改了  可以用枚举变量和函数减少代码量的吧 但忘了
////  后面再去想一想
//
//
////给题目多写一步   当输入不在四则运算符里面的时候
//#include<stdio.h>
//
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	char c = 0;
//	double sum = 0.0;
//	scanf("%lf,%lf%c", &a, &b, &c);
//
//		if (c == '+')
//		{
//			sum = a + b;
//
//		}
//		else if (c == '-')
//		{
//			sum = a - b;
//		}
//		else if (c == '*')
//		{
//			sum = a * b;
//		}
//		else if (c == '/')
//		{
//			sum = a / b;
//		}
//		else
//		{
//			printf("该程序不支持此算法");
//		}
//		printf("%.1lf", sum);
//
//}

//#include<stdio.h>
//
//int main()
//{
//	char a = 0;
//	printf("请输入首字母 且必须大写:");
//	scanf("%c", &a);
//
//	if (a == 'M')
//	{
//		printf("是周一");
//	}
//
//	else if (a == 'T')
//	{
//		printf("仅输入一个字母无法判断 请输入第二个字母：");
//		scanf("%c", &a);
//
//		if (a == 'U')
//		{
//			printf("是周二");
//		}
//		else if (a == 'H')
//		{
//			printf("是周四");
//		}
//		else
//		{
//			printf("输入了错误字母");
//		}
//	}
//
//	else if (a == 'W')
//	{
//		printf("是周三");
//	}
//
//	else if (a == 'F')
//	{
//		printf("是周五");
//	}
//
//	else if (a == 'S')
//	{
//		printf("仅输入一个字母无法判断 请输入第二个字母：");
//		scanf("%c", &a);
//
//		if (a == 'A')
//		{
//			printf("是周六");
//		}
//		else if (a == 'U')
//		{
//			printf("是周日");
//		}
//		else
//		{
//			printf("输入了错误字母");
//		}
//	}
//
//	else
//	{
//		printf("输入了错误字母");
//	}
//
//}


//
//#include<stdio.h>
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0; 
//	int i = 0;
//	//这里创建数组 后面计算天数方便很多   留一个0是因为 1月不用加；    但其实arr[12]用不到  因为不可能有机会加上12月
//	int arr1[13] = { 0,31,28,31,30,31,30,31,31,30,30,30,31 };
//
//	printf("格式为： 年 月 日 （每个数值空格一下）:");
//		scanf("%d %d %d", &year, &month, &day);
//
//
//		if ((year % 4 == 0 && year % 100 != 0 ) || (year % 100 == 0 && year % 400 == 0)) //闰年的判断条件
//		{
//			//闰年 2月是29天
//			arr1[2] += 1;
//		}
//
//		for (i < 0; i < month; i++)
//		{
//			day += arr1[i];
//		}
//		
//		printf("%d", day);
//
//
//
//	return 0;
//}
//
//////
//#include<stdio.h>
//void main()
//{
//	char let1, let2;
//	printf("请输入第一个字母:");
//
//	scanf_s("%c", &let1);
//	switch (let1)
//	{
//	case 'm':printf("monday"); break;
//	case 't':printf("请输入第二个字母:");
//		scanf_s("%c", &let2);
//		if (let2 = getchar() == 'u')
//		{
//			printf("\ntuesday");
//
//		}
//		if (let2 =getchar() == 'h')
//		{
//			printf("\nthurday");
//		}
//		break;
//	case 'w':printf("wednesday"); break;
//	case 'f':printf("friday"); break;
//	case 's':printf("请输入第二个字母:");
//		scanf_s("%c", &let2);
//		if (let2 = getch() == 'a')
//		{
//			printf("\nsaturday");
//		}
//		if (let2 = getch() == 'u')
//		{
//			printf("\nsunday");
//		}
//		break;
//	}
//
//}
//// 
////#define  _CRT_SECURE_NO_WARNINGS  1
////#pragma warning(disable:6031)
////
////#include<stdio.h>
////	  //     switch语句会方便很多
////int main()
////{
////	char a = 0;
////	printf("请输入首字母 且必须大写:");
////	scanf("%c", &a);
////
////	if (a == 'M')
////	{
////		printf("是周一");
////	}
////
////	else if (a == 'T')
////	{
////		printf("仅输入一个字母无法判断 请输入第二个字母：");
////		getchar();
////		scanf("%c", &a);
////
////		if (a == 'U')
////		{
////			printf("是周二");
////		}
////		else if (a == 'H')
////		{
////			printf("是周四");
////		}
////		else
////		{
////			printf("输入了错误字母");
////		}
////	}
////
////	else if (a == 'W')
////	{
////		printf("是周三");
////	}
////
////	else if (a == 'F')
////	{
////		printf("是周五");
////	}
////
////	else if (a == 'S')
////	{
////		printf("仅输入一个字母无法判断 请输入第二个字母：");
////		scanf("%c", &a);
////
////		if (a == 'A')
////		{
////			printf("是周六");
////		}
////		else if (a == 'U')
////		{
////			printf("是周日");
////		}
////		else
////		{
////			printf("输入了错误字母");
////		}
////	}
////
////	else
////	{
////		printf("输入了错误字母");
////	}
////
////}


//
//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)


//                                        编写程序，要求输入x，计算并输出y值。    那个分段函数

//
//#include<stdio.h>
//
//int a = 20;  //全局变量
//int main()
//{
//	int a = 10;  //局部变量
//	printf("%d\n", a);
//}



//
//#include<stdio.h>
//
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//
//	// 可以输入两个变量   
//scanf("%d %d", &a, &b);
//
//sum = a + b;  //变量可以运算
//
//return 0;
//}

//#include <stdio.h>
//
//int main()
//
//{
//    int arr[4] = { 0 };
//    int i = 0;
//    int max = 0;
//
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%d", &arr[i]);
//
//        static max = arr[0];
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//
//    printf("%d", max);
//
//    return 0;
//}


//
//
//
//#include<stdio.h>
//
//int main()
//{
//	enum DAY
//	{
//		MON,
//		TUE=0, 
//		WED, 
//		THU, 
//		FRI, 
//		SAT, 
//		SUN
//	};
//
//	printf("%d\n", MON);
//	printf("%d\n", TUE);
//	printf("%d\n", WED);
//	
//	return 0;
//}
//
////
//
//
//#include <stdio.h>
//
//int main()
//{
//
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int a[3][4] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	int min = a[0][0];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (a[i][j] < min)
//			{
//				min = a[i][j];
//			}
//		}
//	}
//	printf("min= %d", min);
//	return 0;
//}

//#include <stdio.h>
//int a[20][20];
//
//void hengqiuhe(int s, int N, int a1[20][20]) { //横行求和
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//		sum += a[s][i];
//	a1[s][N] = sum;
//}
//
//void shuqiuhe(int s, int N, int a1[20][20]) { //竖列求和
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//		sum += a[i][s];
//	a1[N][s] = sum;
//}
//
//void zhuqiuhe(int N, int a1[20][20]) { //主对角线求和
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//		sum += a[i][i];
//	a1[N][N] = sum;
//}
//
//int main() {
//	int  N, sum = 0, rsum1, rsum2, duijiao, n = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)//此处是为了输入数组
//		for (int j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//
//	for (int i = 0; i < N; i++)//此处是求出一个值作为参照值，这个参考值为次对角线的和
//		sum += a[i][N - 1 - i];
//
//	for (int i = 1; i < N; i++) { //将每一行每一列的值都计算出来储存在行列末尾最后一个
//		hengqiuhe(i, N, a[20][20]);
//		shuqiuhe(i, N, a[20][20]);
//	}
//	zhuqiuhe(N, a[19][19]);//计算主对角线的和
//	duijiao = a[N][N];
//
//
//	for (int i = 0; i < N; i++) {//判断是否相等，如果相等则n=0，如果不相等则大于0
//		rsum1 = a[N][i];
//		rsum2 = a[i][N];
//		if (rsum1 == rsum2 && rsum2 == duijiao && duijiao == sum) {
//		}
//		else {
//			n++;
//		}
//	}
//	if (n)//判断进行输出
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}
//
//#include <stdio.h>
//int a[20][20];
//
//void hengqiuhe(int s, int N, int a[20][20]) { //横行求和
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//		sum += a[s][i];
//	a[s][N] = sum;
//}
//
//void shuqiuhe(int s, int N, int a[20][20]) { //竖列求和
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//		sum += a[i][s];
//	a[N][s] = sum;
//}
//
//void zhuqiuhe(int N, int a[20][20]) { //主对角线求和
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//		sum += a[i][i];
//	a[N][N] = sum;
//}
//
//int main() {
//	int  N, sum = 0, rsum1, rsum2, duijiao, n = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)//此处是为了输入数组
//		for (int j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//
//	for (int i = 0; i < N; i++)//此处是求出一个值作为参照值，这个参考值为次对角线的和
//		sum += a[i][N - 1 - i];
//
//	for (int i = 1; i < N; i++) { //将每一行每一列的值都计算出来储存在行列末尾最后一个
//		hengqiuhe(i, N, a);
//		shuqiuhe(i, N, a);
//	}
//	zhuqiuhe(N, a);//计算主对角线的和
//	duijiao = a[N][N];
//
//
//	for (int i = 0; i < N; i++) {//判断是否相等，如果相等则n=0，如果不相等则大于0
//		rsum1 = a[N][i];
//		rsum2 = a[i][N];
//		if (rsum1 == rsum2 && rsum2 == duijiao && duijiao == sum) {
//		}
//		else {
//			n++;
//		}
//	}
//	if (n)//判断进行输出
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}
//


#include<stdio.h>

int main()
{
	char arr[] = { 'b', 'i', 't' };


		printf("%d",strlen(arr));

}