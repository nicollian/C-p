#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//while�������
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//while�е�break
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//while�е�continue
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d ", i);
		
	}
	return 0;
}