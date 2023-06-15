#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


//结构体定义
typedef struct Node
{
	int id;//学号
	char name[100];//姓名
	char sex[10];//性别
	int age[50];//年龄
	char class[100];//班级
	int ch, ma, en;//语数英
	int sum;//总分

	struct Node* next;//
}node;//用链表将信息储存
node* List;//链表
//读取文件
int readFile(node* L);

//主菜单界面
void welcome();

void addStuInfo();   //增加学生信息
void deleteStuInfo();//删除学生信息
void fixStuInfo();   //修改学生信息
void searchStuInfo();//查询学生信息
void printfStuInfo(node* L);//输出学生信息
void goodbye();      //退出程序

int main()
{
	int choice = 0;//对应主菜单页面的选择
	readFile(&List);
	scanf("%d", &choice);
	while (1)
	{
		welcome();  //制作主菜单页面，放入welcome函数中
		//各功能实现所用函数
		scanf("%d", &choice);//用户输入选择
		//功能框架
		switch (choice)
		{
		case 1:
			addStuInfo();
			break;//增加学生信息

		case 2:
			deleteStuInfo();
			break;//删除学生信息

		case 3:
			fixStuInfo();
			break;//修改学生信息

		case 4:
			searchStuInfo();
			break;//查询学生信息

		case 5:
			printfStuInfo(&List);
			break;//输出学生信息

		case 0:
			goodbye();
			break;//退出程序

		}
		printf("是否需要继续操作？（yes:1/no:0）：");
		scanf("%d", &choice);
		if (choice == 0)
		{
			break;
		}

	}



	return 0;
}
//主菜单页面
void welcome()
{
	system("cls");
	printf("****************************\n");
	printf("**    学生成绩管理系统    **\n");
	printf("**    作者：越写越牛组    **\n");
	printf("**    增加学生信息---1    **\n");
	printf("**    删除学生信息---2    **\n");
	printf("**    修改学生信息---3    **\n");
	printf("**    查询学生信息---4    **\n");
	printf("**    输出学生信息---5    **\n");
	printf("**    退出管理系统---0    **\n");

	printf("请输入对应的功能键（数字）：");



}//增加学生信息
void addStuInfo()
{
	printf("增加学生信息");
}
//删除学生信息
void deleteStuInfo()
{
	printf("删除学生信息");
}
//修改学生信息
void fixStuInfo()
{
	printf("修改学生信息");
}
//查询学生信息
void searchStuInfo()
{
	printf("查询学生信息");
}
//输出学生信息
void printfStuInfo(node* L)
{
	printf("输出学生信息");
}
//退出程序
void goodbye()
{
	printf("退出程序");
}

//文件输入
int readFile(node* L)
{
	FILE* fpr = fopen("StudentInfo.txt", "r");//r代表读取，w代表存储
	node st;
	node* s;
	node* t = L;//尾指针
	if (fpr == NULL)
	{
		return 0;
	}

	else
	{
		//fcanf()函数
		while (fscanf(fpr, "%d %s %s %s %s %d %d %d %d", &st.id, st.name, st.sex, st.age, st.class, &st.ch, &st.ma, &st.en, &st.sum) != EOF)
		{
			printf("%d %s %s %d %s %d %d %d %d", st.id, st.name, st.sex, st.age, st.class, st.ch, st.ma, st.en, st.sum);
			//尾插法增加
			s = (node*)malloc(sizeof(node));
			*s = st;
			t->next = s;
			t = s;
			t->next = NULL;

		}

	}
}
