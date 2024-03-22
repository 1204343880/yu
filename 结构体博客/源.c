#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>
//
//int a = 10;
//
//struct S
//{
//	int name[8];
//	int sex;   //男生1 女生0
//	int age;
//}s = { {1234} , 0, 18};
//
//
//
//int main()
//{
//
//	printf("%s %d %d %p", s.name, s.sex, s.age);  //不必犯蠢 因为%s也只能访问字符型数组 
//	return 0;
//
//}

#include<stdio.h>
//
//struct S
//{
//	char name[8];
//	int sex;   //男生1 女生0
//	int age;
//}s1 = { "yu" , 0, 18};
//
////想通过函数来改变原来的结构体中的变量
//void change(struct S s2)
//{
//	s2.sex = 1;
//	s2.age = 19;
//	s2.name = "zhang"; //err
//
//}
//
//int main()
//{
//	change(s1);
//
//	printf("%s %d %d", s1.name, s1.sex, s1.age);
//}

#include<stdio.h>
//
//struct C
//{
//	int grade;
//	int class;
//};
//
//struct S
//{
//	char name[8];
//	int sex;   //男生1 女生0
//	struct C s;
//	int age;
//};
//
//
//
//int main()
//{
//	struct S stu = { "yu", 1,{9,1},18 };
//	
//	printf("%s %d %d %d %d", stu.name, stu.sex, stu.s.grade, stu.s.class, stu.age);
//	return 0;
//}


#include<string.h>
#include<stdio.h>

struct S
{
	char name[8];
	int sex;   //男生1 女生0
	int age;
}s1 = { "yu" , 0, 18 };

change1(struct S s2)
{
	s2.sex = 1;
	s2.age = 19;
	strcpy(s2.name, "zhang");
	printf("%s %d %d\n", s1.name, s1.sex, s1.age);
}
//想通过函数来改变原来的结构体中的变量
void change2(struct S* s2)
{
	(*s2).sex = 1;
	(*s2).age = 19;
	strcpy((*s2).name, "zhang");

	printf("%s %d %d", s1.name, s1.sex, s1.age);
}

int main()
{
	change1(s1);
	change2(&s1);

	return 0;
}


