#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 10;
	&a;  //取出a的地址
	printf("%p\n", &a);   //"%p"是以地址的形式打印
	int* p = &a;  //存储a的地址，类型为int*
	//p就是指针变量

	char ch = 'w';
	char* e = &ch;
	

	*p = 20;  //通过p中存放的地址，找到p指向的对象,在这里*p相当于a
	printf("%d ", a);   //20

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	//结果均是8
	//指针变量用来存放地址，一个指针变量
	//的大小取决于一个地址存放时需要多大的空间
	//32位机器上的地址—32bite位—4byte
	//故指针变量的大小为4byte
	//64位机器上的地址—64bite位—8byte
	//故指针变量的大小为8byte

	
return 0;
}