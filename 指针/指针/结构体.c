#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ṹ��struct()

struct stu  //����ѧ��stu����
{
	//��Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct stu* ps)
{
	//psΪ&s��ָ��
	//->
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
	struct stu s = { "zhangsan",20,"nan","237687163871" };
	//printf("%s %d %s %s \n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}