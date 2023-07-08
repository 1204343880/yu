//#define  _CRT_SECURE_NO_WARNINGS  1
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//
//
////结构体定义
//typedef struct Node
//{
//	int id;//学号
//	char name[100];//姓名
//	char sex[10];//性别
//	int age[50];//年龄
//	char class[100];//班级
//	int ch, ma, en;//语数英
//	int sum;//总分
//
//	struct Node* next;//
//}node;//用链表将信息储存
//node* List;//链表
////读取文件
//int readFile(node* L);
//
////主菜单界面
//void welcome();
//
//void addStuInfo();   //增加学生信息
//void deleteStuInfo();//删除学生信息
//void fixStuInfo();   //修改学生信息
//void searchStuInfo();//查询学生信息
//void printfStuInfo(node* L);//输出学生信息
//void goodbye();      //退出程序
//
//int main()
//{
//	int choice = 0;//对应主菜单页面的选择
//	readFile(&List);
//	scanf("%d", &choice);
//	while (1)
//	{
//		welcome();  //制作主菜单页面，放入welcome函数中
//		//各功能实现所用函数
//		scanf("%d", &choice);//用户输入选择
//		//功能框架
//		switch (choice)
//		{
//		case 1:
//			addStuInfo();
//			break;//增加学生信息
//
//		case 2:
//			deleteStuInfo();
//			break;//删除学生信息
//
//		case 3:
//			fixStuInfo();
//			break;//修改学生信息
//
//		case 4:
//			searchStuInfo();
//			break;//查询学生信息
//
//		case 5:
//			printfStuInfo(&List);
//			break;//输出学生信息
//
//		case 0:
//			goodbye();
//			break;//退出程序
//
//		}
//		printf("是否需要继续操作？（yes:1/no:0）：");
//		scanf("%d", &choice);
//		if (choice == 0)
//		{
//			break;
//		}
//
//	}
//
//
//
//	return 0;
//}
////主菜单页面
//void welcome()
//{
//	system("cls");
//	printf("****************************\n");
//	printf("**    学生成绩管理系统    **\n");
//	printf("**    作者：越写越牛组    **\n");
//	printf("**    增加学生信息---1    **\n");
//	printf("**    删除学生信息---2    **\n");
//	printf("**    修改学生信息---3    **\n");
//	printf("**    查询学生信息---4    **\n");
//	printf("**    输出学生信息---5    **\n");
//	printf("**    退出管理系统---0    **\n");
//
//	printf("请输入对应的功能键（数字）：");
//
//
//
//}//增加学生信息
//void addStuInfo()
//{
//	printf("增加学生信息");
//}
////删除学生信息
//void deleteStuInfo()
//{
//	printf("删除学生信息");
//}
////修改学生信息
//void fixStuInfo()
//{
//	printf("修改学生信息");
//}
////查询学生信息
//void searchStuInfo()
//{
//	printf("查询学生信息");
//}
////输出学生信息
//void printfStuInfo(node* L)
//{
//	printf("输出学生信息");
//}
////退出程序
//void goodbye()
//{
//	printf("退出程序");
//}
//
////文件输入
//int readFile(node* L)
//{
//	FILE* fpr = fopen("StudentInfo.txt", "r");//r代表读取，w代表存储
//	node st;
//	node* s;
//	node* t = L;//尾指针
//	if (fpr == NULL)
//	{
//		return 0;
//	}
//
//	else
//	{
//		//fcanf()函数
//		while (fscanf(fpr, "%d %s %s %s %s %d %d %d %d", &st.id, st.name, st.sex, st.age, st.class, &st.ch, &st.ma, &st.en, &st.sum) != EOF)
//		{
//			printf("%d %s %s %d %s %d %d %d %d", st.id, st.name, st.sex, st.age, st.class, st.ch, st.ma, st.en, st.sum);
//			//尾插法增加
//			s = (node*)malloc(sizeof(node));
//			*s = st;
//			t->next = s;
//			t = s;
//			t->next = NULL;
//
//		}
//
//	}
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>      
#include<windows.h>
#include<stdlib.h>
#include<string.h>


int n = 0, course = 0;         //The number of students; The number of courses


struct student //结构体类型数组：数组中每个元素均可视为同类型的结构体类型变量，便于数据处理
{
	char id[18];        //student id：学号
	char name[10];      //student name：姓名
	float score[6];    //student score：分数
	float sum;         //student sum score：总分
	float ave_stu;     //student course average course：平均分
} stu[50], temp;//temp为临时变量


void welcome();           //The start page：主菜单页面
void inputinfo();         //Input student`s information：学生信息录入
void addinfo();           //Add student`s information：学生信息增添
void deleteinfo();        //Delete student`s information：学生信息删除
void changeinfo();        //Change student`s information：学生信息修改
void searchinfo();        //Search student`s information：学生信息查询（用到下列findstu函数）
void infocount();         //Information count：学生成绩分析
void quitapp();           //Quit the application：推出学生成绩管理系统
void output(char name[]); //Output the information：学生成绩表
void outtxt();            //Output text：学生信息输出

void showinfo(char str[4]);          //Show student`s information on display：学生成绩信息显示
int findstu(char a[2]);              //Find student`s information：学生信息查找
void ave();                          //Course average score：各科平均分
void sum();                          //Course sum score：各个学科成绩总和
void max_();                         //Each courses` highest score：各科最高分
void htl();                          //High score to low score：成绩从高到低排名
void lth();                          //Low score to high score：成绩从低到高排名
void full();                         //Full student information：新增学生信息
void eachcour();                     //Each student`s new score：
void namesort();                     //Studet`s name sort：根据姓名排序
void idsort();                       //student`s id sort根据学号排序
void presents();                     //Each courses` each scores` present成绩等级表

void readfile();                     //Readfile：学生信息读取
void save();                        //Save the information：学生信息储存


int main()                                           // main
{
	int choice = 0, re;//choice便于选择每一步的两个分支（yes or no），
begin: welcome();
	scanf("%d", &choice);
	switch (choice)
	{
	case 0: inputinfo();    //Input student information
		break;
	case 1: addinfo();      //Add student information
		break;
	case 2: deleteinfo();   //Delete student information
		break;
	case 3: changeinfo();   //Change student information
		break;
	case 4: searchinfo();   //Search student information
		break;
	case 5: infocount();    //Information count
		break;
	case 6: outtxt();                  //Output txt
		break;
	case 7: readfile();
		showinfo("全班信息");      //Show classmates information
		break;
	case 8: quitapp();                 //Quit the application
		break;
	}
	printf("-------------------------------------\n");
	printf("        操作成功，是否继续操作       \n");
	printf("-------------------------------------\n");
	printf("        是：1            否：0       \n");
	scanf("%d", &re);
	switch (re)
	{
	case 1: goto begin;
		break;
	case 0: quitapp();
		break;
	}
	return 0;
}


void welcome()                                       // The start page
{
	system("cls");//清屏，使显示页面更加简洁
	printf("-------------------------------------\n");
	printf("          学生成绩管理系统           \n");
	printf("-------------------------------------\n");
	printf("请输入数字序列号，选择您要执行的操作\n");
	printf("0.录入学生信息\n");
	printf("1.添加学生信息\n");
	printf("2.删除学生信息\n");
	printf("3.修改学生信息\n");
	printf("4.查询学生信息\n");
	printf("5.成绩分析\n");
	printf("6.输出全班同学信息\n");
	printf("7.显示全班同学信息\n");
	printf("8.退出学生管理系统\n");
	printf("-------------------------------------\n");
}


void inputinfo()                                       // Input students` information
{
	int i, j, re;
	system("cls");//清屏
	printf("-------------------------------------\n");
	printf("           0.学生信息录入            \n");
	printf("-------------------------------------\n");
	printf("输入学生个数:\n");
	scanf("%d", &n);
	printf("输入考试科目个数:\n");
	scanf("%d", &course);
	printf("输入学生信息:\n");
	printf("(eg:XXXXXXX(学号) XXXXXXXXX（姓名） XXX XXX XXX XXX（各科成绩） )\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 18; j++)//增加学生学号
		{
			scanf("%c", &stu[i].id[j]);
			if (stu[i].id[j] == ' ')//找到学号成员中空着的地方储存新同学的学号
			{
				stu[i].id[j] = '\0';//在结尾加上结束标志
				break;
			}
		}
		for (j = 0; j < 10; j++)//增加学生姓名
		{
			scanf("%c", &stu[i].name[j]);//找到姓名成员中空着的地方储存新同学的姓名
			if (stu[i].name[j] == ' ')
			{
				stu[i].name[j] = '\0';//在结尾加上结束标志
				break;
			}
		}
		stu[i].sum = 0;//总分初始化为0
		for (j = 0; j < course; j++)//用下标遍历各个科目，获取各个分数，并进行求和等操作
		{
			scanf("%f", &stu[i].score[j]);
			stu[i].sum = stu[i].sum + stu[i].score[j];
		}
		stu[i].ave_stu = stu[i].sum / course;//求一个学生的平均分
	}
	save();
}


void addinfo()                                       // Add students` information
{
	int j, choice;
	readfile();
	system("cls");
	printf("-------------------------------------\n");
	printf("           1.学生信息增添            \n");
	printf("-------------------------------------\n");
	printf("    请输入需要添加学生信息的类型：\n");
	printf("一个新的学生（1） 一门新的科目（2）\n");
	printf("-------------------------------------\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1: full();
		break;
	case 2: eachcour();
		break;
	}
	save();
	printf("-------------------------------------\n");
	printf("   是否输出数据：是（1）     否（0）\n");
	printf("-------------------------------------\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1: output("学生成绩表.txt");
		break;
	case 0: break;
	}
}


void deleteinfo()                                   // Delete information from the file
{
	int s, i, j, choise;
	char name[30] = { '\0' };
	readfile();
	system("cls");
	printf("-------------------------------------\n");
	printf("           2.学生信息删除            \n");
	printf("-------------------------------------\n");
	s = findstu("删除");
	strcpy(name, stu[s].name);
	printf("-------------------------------------\n");
	printf(" 是否将%s的信息删除：是（1）  否（0） \n", name);
	printf("-------------------------------------\n");
	scanf("%d", &choise);
	switch (choise)
	{
	case 1: for (i = s; i < n - 1; i++)
	{
		stu[i] = stu[i + 1];
	}
		  n--;
		  save();
		  printf("-------------------------------------\n");
		  printf("        已将%s的信息删除\n", name);
		  printf("-------------------------------------\n");
		  printf("   是否输出数据：是（1）     否（0）\n");
		  printf("-------------------------------------\n");
		  scanf("%d", &choise);
		  switch (choise)
		  {
		  case 1: output("学生成绩表.txt");
			  break;
		  case 0: break;
		  }
	case 0: break;
	}
}


void changeinfo()                                   // Change the information from the file
{
	int i, j, s, choice;
	char change[30] = { '\0' };
	float ch = 0.00;
	readfile();
	system("cls");
	printf("-------------------------------------\n");
	printf("           3.学生信息修改            \n");
	printf("-------------------------------------\n");
	s = findstu("修改");
	printf("-------------------------------------\n");
	printf("请选择需要修改%s的信息选项：\n", stu[s].name);
	printf("学号（1）， 姓名（2），成绩（3）\n");
	printf("-------------------------------------\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:printf("请输入新的学号：\n");
		scanf("%s", &stu[s].id);
		printf("-------------------------------------\n");
		printf("         已成功修改%s同学学号\n", stu[s].name);
		printf("-------------------------------------\n");
		break;
	case 2:printf("请输入修改后的姓名：\n");
		scanf("%s", &stu[s].name);
		printf("-------------------------------------\n");
		printf("         已成功修改%s同学姓名\n", stu[s].name);
		printf("-------------------------------------\n");
		break;
	case 3:printf("请输入想要修改的科目位号：（eg：科目一：1）\n");
		scanf("%d", &choice);
		printf("请输入修改后科目%d的分数：\n", choice);
		stu[s].sum = stu[s].sum - stu[s].score[choice - 1];
		scanf("%f", &stu[s].score[choice - 1]);
		stu[s].sum = stu[s].sum + stu[s].score[choice - 1];
		stu[s].ave_stu = stu[s].sum / course;
	}
	save();
	printf("-------------------------------------\n");
	printf("   是否输出数据：是（1）     否（0）\n");
	printf("-------------------------------------\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1: output("学生成绩表.txt");
		break;
	case 0: break;
	}
}


void searchinfo()                                    // Search information
{
	int i, j;
	readfile();
	system("cls");
	printf("-------------------------------------\n");
	printf("           4.学生信息查询            \n");
	printf("-------------------------------------\n");
	i = findstu("查询");
	printf("-------------------------------------\n");
	printf("总排名    学号        姓名");
	for (j = 1; j < course; j++)
	{
		printf("%5d  ", j);
	}
	printf("%5d", course);
	printf("   总分  平均分\n");
	printf("-------------------------------------\n");
	printf("\n%3d、", i + 1);
	printf(" %10s ", stu[i].id);
	printf("%10s ", stu[i].name);
	for (j = 0; j < course; j++)
	{
		printf("%5.2f ", stu[i].score[j]);
	}
	printf("%5.2f %5.2f\n", stu[i].sum, stu[i].ave_stu);
}


void infocount()                                    // Information count
{
	system("cls");
	readfile();
	printf("-------------------------------------\n");
	printf("           5.学生成绩分析            \n");
	printf("-------------------------------------\n");
	int i, j, n, m, choice;
	printf("选择您需要的信息：(请输入数字)\n");
	printf("1. 各个学科的成绩总和\n");
	printf("2. 各个学科的平均分\n");
	printf("3. 各个学科的最高分\n");
	printf("4. 将成绩从低到高排序\n");
	printf("5. 将成绩从高到低排序\n");
	printf("6. 各科各个分数段组成占比\n");
	printf("-------------------------------------\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1: sum();
		break;
	case 2: ave();
		break;
	case 3: max_();
		break;
	case 4: lth();
		break;
	case 5: htl();
		break;
	case 6: presents();
		break;
	}
	if (choice == 4 || choice == 5)
	{
		printf("-------------------------------------\n");
		printf("   是否显示信息：是（1）    否（0）\n");
		printf("-------------------------------------\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: switch (choice)
		{
		case 4: showinfo("从低到高");
			break;
		case 5: showinfo("从高到低");
			break;
		}
		case 0: break;
		}
		printf("-------------------------------------\n");
		printf("   是否输出数据：是（1）     否（0）\n");
		printf("-------------------------------------\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: switch (choice)
		{
		case 4: output("从低到高排序的成绩单.txt");
			break;
		case 5: output("从高到低排序的成绩单.txt");
			break;
		}
		case 0: break;
		}
	}

}


void outtxt()                                    // Output information
{
	int choice;
	readfile();
	system("cls");
	printf("-------------------------------------\n");
	printf("           6.学生信息输出            \n");
	printf("-------------------------------------\n");
	printf("请输入输出模式：（填写数字）\n");
	printf("1.成绩从高到低\n");
	printf("2.成绩从低到高\n");
	printf("3.按姓名首字母排序\n");
	printf("4.按学号大小排序\n");
	printf("-------------------------------------\n");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1: htl();
		output("从高到低排序的成绩单.txt");
		break;
	case 2: lth();
		output("从低到高排序的成绩单.txt");
		break;
	case 3: namesort();
		output("按名称首字母排序的成绩单.txt");
		break;
	case 4: idsort();
		output("按学号排序的成绩单.txt");
		break;
	}
}


void quitapp()                                      // Quitapp
{
	system("cls");//清屏
	printf("\n\n\n\n-------------------------------------\n");
	printf("       欢迎下次使用（￣︶￣）↗      \n");
	printf("-------------------------------------\n\n\n\n");
	system("pause");//暂停
	exit(0);//调用exit函数正常终止进程，退出程序
}


void full()                                        // Add a new student
{
	int j;
	printf("(eg:XXXXXXX(学号) XXXXXXXXX（姓名） XXX XXX XXX XXX（各科成绩） )\n");
	printf("注意：当前可以输入的科目个数数为%d\n", course);
	for (j = 0; j < 18; j++)//增加学号
	{
		scanf("%c", &stu[n].id[j]);
		if (stu[n].id[j] == ' ')
		{
			stu[n].id[j] = '\0';
			break;
		}
	}
	for (j = 0; j < 10; j++)//增加姓名
	{
		scanf("%c", &stu[n].name[j]);
		if (stu[n].name[j] == ' ')
		{
			stu[n].name[j] = '\0';
			break;
		}
	}
	stu[n].sum = 0;
	for (j = 0; j < course; j++)//增加科目及其分数
	{
		scanf("%f", &stu[n].score[j]);
		stu[n].sum = stu[n].sum + stu[n].score[j];
		stu[n].ave_stu = stu[n].sum / course;
	}
	n++;
	printf("-------------------------------------\n");
	printf("      已将该同学信息增加到程序中     \n");
	printf("-------------------------------------\n");
}


void eachcour()                                    // Add a new course
{
	printf("-------------------------------------\n");
	printf("      请在出现的名字后面填写\n      该同学的新增科目的成绩\n");
	printf("-------------------------------------\n");
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s ", stu[i].name);
		scanf("%f", &stu[i].score[course]);
		stu[i].sum = stu[i].sum + stu[i].score[course];
		stu[i].ave_stu = stu[i].sum / (course + 1);
	}
	course++;
}


void showinfo(char str[4])                         // Show student information
{
	int i, j;
	printf("-------------------------------------\n");
	printf("          学生成绩信息显示           \n");
	printf("-------------------------------------\n");
	printf("当前显示模式为%s\n", str);
	printf("总排名    学号        姓名");
	for (j = 1; j < course; j++)
	{
		printf("%6d  ", j);
	}
	printf("%6d", course);
	printf("      总分   平均分\n");
	printf("-------------------------------------\n");
	for (i = 0; i < n; i++)
	{
		printf("\n%3d、", i + 1);
		printf(" %10s ", stu[i].id);
		printf("%10s  ", stu[i].name);
		for (j = 0; j < course; j++)
		{
			printf("%-7.2f ", stu[i].score[j]);
		}
		printf("%-7.2f %-7.2f\n", stu[i].sum, stu[i].ave_stu);
	}
}


int findstu(char a[2])                             //Find student information
{
	int i, j, choise = 0, t = 0;
	char ex[30] = { '\0' };
	printf("-------------------------------------\n");
	printf("  请选择查询类型:学号（1）;姓名（2）\n");
	printf("-------------------------------------\n");
	scanf("%d", &choise);
	if (choise == 1)
	{
	again: printf("-------------------------------------\n");
		printf("    请输入需要%s学生信息的学号\n", a);
		printf("-------------------------------------\n");
		scanf("%s", ex);
		for (i = 0; i < n; i++)
		{
			if (strcmp(ex, stu[i].id) == 0)//用strcmp函数逐个进行ex，id的大小比较
			{
				break;
			}
		}
		if (i == n)
		{
			printf("-------------------------------------\n");
			printf(" 输入学生信息有误或不存在，请重新输入\n");
			goto again;//结束多层嵌套
		}
		else
		{
			return i;
		}
	}
	else if (choise == 2)
	{
		printf("-------------------------------------\n");
		printf("     请输入需要%s学生信息的姓名\n", a);
		printf("-------------------------------------\n");
		scanf("%s", ex);
		for (i = 0; i < n; i++)
		{

			if (strcmp(ex, stu[i].name) == 0)
			{
				break;
			}
		}
		if (i == n)
		{
			printf("-------------------------------------\n");
			printf(" 输入学生信息有误或不存在，请重新输入\n");
			goto again;
		}
		else
		{
			return i;
		}
	}
}


void ave()                                        //Each courses` average score
{
	printf("-------------------------------------\n");
	printf("         各个学科的平均分为\n");
	printf("-------------------------------------\n");
	int i, j;
	float sum[6] = { 0 };
	for (i = 0; i < course; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum[i] = sum[i] + stu[j].score[i];
		}
	}
	for (i = 0; i < course; i++)
	{
		printf("%d.科目%d：%.2f\n", i + 1, i + 1, sum[i] / n);
	}
}


void sum()                                       // Each courses` sum
{
	printf("-------------------------------------\n");
	printf("        各个学科的成绩总和为\n");
	printf("-------------------------------------\n");
	int i, j;
	float sum[6] = { 0 };
	for (i = 0; i < course; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum[i] = sum[i] + stu[j].score[i];
		}
	}
	for (i = 0; i < course; i++)
	{
		printf("%d.科目%d：%.2f\n", i + 1, i + 1, sum[i]);
	}
}


void max_()                                     // Each courses` maxscore
{
	printf("-------------------------------------\n");
	printf("        各科最高分如下：\n");
	printf("-------------------------------------\n");
	int i, j, max = 0;
	float t;
	for (i = 0; i < course; i++)//打擂台方式比较大小，得出最大值
	{
		max = 0;
		t = stu[0].score[i];
		for (j = 0; j < n; j++)
		{
			if (t < stu[j].score[i])
			{
				t = stu[j].score[i];
				max = j;
			}
		}
		printf("%d.科目%d的最高分是：%s %.2f\n", i + 1, i + 1, stu[max].name, stu[max].score[i]);
	}
}


void htl()                                     //High to low：冒泡排序
{
	int i, j;
	float a[6];
	char t[30];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (stu[j].sum < stu[j + 1].sum)
			{
				temp = stu[j + 1];
				stu[j + 1] = stu[j];
				stu[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (strcmp(stu[j].name, stu[j + 1].name) > 0 && stu[j].sum == stu[j + 1].sum)
			{
				temp = stu[j + 1];
				stu[j + 1] = stu[j];
				stu[j] = temp;
			}
		}
	}
}


void lth()                                     //Low to high：冒泡排序
{
	int i, j;
	float a[6];
	char t[30];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (stu[j].sum > stu[j + 1].sum)
			{
				temp = stu[j + 1];
				stu[j + 1] = stu[j];
				stu[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (strcmp(stu[j].name, stu[j + 1].name) > 0 && stu[j].sum == stu[j + 1].sum)
			{
				temp = stu[j + 1];
				stu[j + 1] = stu[j];
				stu[j] = temp;
			}
		}
	}
}


void idsort()   //利用学号排序：冒泡排序
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (strcmp(stu[j].id, stu[j + 1].id) > 0)
			{
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}


void namesort()                               // The first name sort：冒泡排序
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (strcmp(stu[j].name, stu[j + 1].name) > 0)
			{
				temp = stu[j + 1];
				stu[j + 1] = stu[j];
				stu[j] = temp;
			}
		}
	}
}


void output(char name[])                       // Save information to file
{
	int i, j;
	FILE* fp;
	fp = fopen("D:\\code\\StudentMangerSystem_2.0.txt", "w+");//打开文件
	fprintf(fp, "———————————学生成绩表——————————————\n");
	fprintf(fp, "总排名       学号         姓名");
	for (j = 1; j < course; j++)
	{
		fprintf(fp, "%9d  ", j);
	}
	fprintf(fp, "%9d", course);
	fprintf(fp, "         总分      平均分\n");
	fprintf(fp, "——————————————————————————————\n");
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "\n%3d、", i + 1);
		fprintf(fp, " %10s ", stu[i].id);
		fprintf(fp, "%10s ", stu[i].name);
		for (j = 0; j < course; j++)
		{
			fprintf(fp, "%7.2f ", stu[i].score[j]);
		}
		fprintf(fp, "%7.2f %7.2f\n", stu[i].sum, stu[i].ave_stu);
	}
	fclose(fp);//关闭文件
	printf("-------------------------------------\n");
	printf("已将文件存入%s\n", name);
	printf("-------------------------------------\n");
}


void presents()                                // Each course earch present：对学生成绩进行排序
{
	int i, j, nine, eight, seven, six, fail, t;
	for (i = 0; i < course; i++)
	{
		t = 0;
		nine = 0;
		eight = 0;
		seven = 0;
		six = 0;
		fail = 0;
		for (j = 0; j < course; j++)
		{
			if (stu[j].score[i] > 100.00)
			{
				t = 1;
				break;
			}
		}
		for (j = 0; j < n; j++)
		{
			//多选一的选择
			if (t == 1)
			{
				stu[j].score[i] = stu[j].score[i] / 1.50;
			}
			if (stu[j].score[i] <= 100.00 && stu[j].score[i] >= 90.00)
			{
				nine++;
			}
			else if (stu[j].score[i] < 90.00 && stu[j].score[i] >= 80.00)
			{
				eight++;
			}
			else if (stu[j].score[i] < 80.00 && stu[j].score[i] >= 70.00)
			{
				seven++;
			}
			else if (stu[j].score[i] < 70.00 && stu[j].score[i] >= 60.00)
			{
				six++;
			}
			else if (stu[j].score[i] < 60.00)
			{
				fail++;
			}
		}
		printf("-------------------------------------\n");
		printf("%d、科目%d输出结果如下：\n", i + 1, i + 1);
		printf("90-100:优秀的人数为%3d    占比为%.2f\n", nine, nine / (float)n);
		printf("80-90: 良好的人数为%3d    占比为%.2f\n", eight, eight / (float)n);
		printf("70-80: 一般的人数为%3d    占比为%.2f\n", seven, seven / (float)n);
		printf("60-70: 及格的人数为%3d    占比为%.2f\n", six, six / (float)n);
		printf("0-60:  不及格的人数为%3d  占比为%.2f\n", fail, fail / (float)n);
		printf("-------------------------------------\n");
	}
}

void save()                                    // Save information to file
{
	int i, j;
	htl();
	for (i = 0; i < n; i++)
	{
		if (stu[i].id[0] == '\n')
		{
			for (j = 0; j < 18; j++)
			{
				stu[i].id[j] = stu[i].id[j + 1];
			}
		}
	}
	FILE* fp;//对文件进行写操作
	fp = fopen("D:\\code\\StudentMangerSystem_2.0.txt", "w+");
	fprintf(fp, "%d %d\n", n, course);
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "%s %s ", stu[i].id, stu[i].name);
		for (j = 0; j < course; j++)
		{
			fprintf(fp, "%.2f ", stu[i].score[j]);
		}
		fprintf(fp, "%.2f ", stu[i].sum);
		fprintf(fp, "%.2f\n", stu[i].ave_stu);
	}
	fclose(fp);
}


void readfile()                                // Read file information
{   //读取文件数据
	FILE* fpp;
	fpp = fopen("D:\\code\\StudentMangerSystem_2.0.txt", "r+");
	int i, j;
	char t;
	while (!feof(fpp))
	{
		fscanf(fpp, "%d%d", &n, &course);
		fscanf(fpp, "%c", &t);
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 18; j++)
			{
				fscanf(fpp, "%c", &stu[i].id[j]);
				if (stu[i].id[j] == ' ')
				{
					stu[i].id[j] = '\0';
					break;
				}
			}
			for (j = 0; j < 10; j++)
			{
				fscanf(fpp, "%c", &stu[i].name[j]);
				if (stu[i].name[j] == ' ')
				{
					stu[i].name[j] = '\0';
					break;
				}
			}
			for (j = 0; j < course; j++)
			{
				fscanf(fpp, "%f", &stu[i].score[j]);
			}
			fscanf(fpp, "%f", &stu[i].sum);
			fscanf(fpp, "%f\n", &stu[i].ave_stu);
		}
	}
	for (i = 0; i < n; i++)
	{
		if (stu[i].id[0] == '\n')
		{
			for (j = 0; j < 18; j++)
			{
				stu[i].id[j] = stu[i].id[j + 1];
			}
		}
	}
	fclose(fpp);
}