#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//结构体struct()

struct stu  //创建学生stu类型
{
	//成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct stu* ps)
{
	//ps为&s的指针
	//->
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
	struct stu s = { "zhangsan",20,"nan","237687163871" };
	//printf("%s %d %s %s \n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}