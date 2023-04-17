#include<stdio.h>
struct stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct stu s = { "ÕÅÈý",20,85.5 };
	printf("%s %d %lf\n", s.name, s.age, s.score);

	struct stu* ps = &s;
		printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

		printf("%s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}