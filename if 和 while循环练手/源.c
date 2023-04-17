#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		printf("eeeeee");//这里就是我的错误所在 跟那个典题考察一样      因为带printf所以才会 让他输出hehe    因为只管一句原则
//	if (b==1)
//	                                //如果不带这个eeeeee  那么if带的是一句if（b==2）
//		printf("hehe\n");
//	
//	else
//		printf("haha\n");                //这一句跟的谁？？    证明可得  else跟最近的if  所以打印出haha
//
//	return 0;
//
//} 





//这里全变注释    先CTRL+K 再CTRL+C




//int teat()
//{
//	if (1)
//		return 1;
//}
//
//int main()
//{
//	teat();
//}



//int main()
//{
//	int a = 3;
//
//	if (a = 5)
//		printf("66666666\\n\n");
//	printf("%d", a);
//}



//此处有一点for的用法
//int main()
//{
//	for (int i = 1; i < 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//此处是switch switch switch switch switch switch switch switch switch switch switch switch switch switch switch switch switch switch 
//int main()
//{
//	int day;
//	scanf_s("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//			printf("星期一");
//			break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	default:
//			printf("你小子不知道一星期几天?");
//
//	}
//
//}



//int main()
//{
//	int i = 1;
//
//	while (i < 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//			i++;
//	}
//}



//// getchar
//
//int main()
//{
//	int ch = 0;
//	while((ch = getchar() )!= EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//比较典型的题目 比较典型的题目 比较典型的题目 比较典型的题目 比较典型的题目 比较典型的题目 比较典型的题目 比较典型的题目 比较典型的题目 比较典型的题目 比较典型的题目 
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", password);   //密码定为一个数组 可以的 这一点我也没想到
//	printf("请确认密码（Y/N）：");//此处用到getchar因为需要输入一个字符
//	int emmm = getchar();
//	while ((emmm = getchar()) != '\n')
//	{
//		getchar();
//	}
//	int ch = getchar();
//	if(ch =='Y')
//	{
//		printf("确认密码");
//	}
//	else
//	{
//		printf("重新打一次不会？菜！");
//	}




//字符打印且只能打印固定范围
int main()
{
	int ch = 0;
	while ((ch = getchar() )!= EOF)
	{
		if (ch < '0' || ch>'9')//	打印出来的也是字符
			continue;
		putchar(ch);
	}

	return 0;
}



