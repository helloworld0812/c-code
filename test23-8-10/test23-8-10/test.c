#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//实现每调用一次函数，num值加1


void motion(int* p)
{
	(*p)++;

}
int main()
{
	int num=1;
	motion(&num);
	printf("%d\n", num);
	motion(&num);
	printf("%d\n", num);
	motion(&num);
	printf("%d\n", num);
	return 0;
}