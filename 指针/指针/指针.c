#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 10;
	&a;  //ȡ��a�ĵ�ַ
	printf("%p\n", &a);   //"%p"���Ե�ַ����ʽ��ӡ
	int* p = &a;  //�洢a�ĵ�ַ������Ϊint*
	//p����ָ�����

	char ch = 'w';
	char* e = &ch;
	

	*p = 20;  //ͨ��p�д�ŵĵ�ַ���ҵ�pָ��Ķ���,������*p�൱��a
	printf("%d ", a);   //20

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	//�������8
	//ָ�����������ŵ�ַ��һ��ָ�����
	//�Ĵ�Сȡ����һ����ַ���ʱ��Ҫ���Ŀռ�
	//32λ�����ϵĵ�ַ��32biteλ��4byte
	//��ָ������Ĵ�СΪ4byte
	//64λ�����ϵĵ�ַ��64biteλ��8byte
	//��ָ������Ĵ�СΪ8byte

	
return 0;
}