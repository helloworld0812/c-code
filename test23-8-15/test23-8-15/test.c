#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include  "counter.h"

//做一个计算加减乘除的头文件
int main()
{
	int a, b;
	printf("第一个数是：");
	scanf("%d", &a);
	printf("第二个数是：");
	scanf("%d", &b);
	int c = add(a, b);
	printf("%d+%d=%d\n",a,b,c);
	int d= minus(a, b);
	printf("%d-%d=%d\n", a, b, d);
	int e = product(a, b);
	printf("%d*%d=%d\n", a, b, e);
	int f = divide(a, b);
	printf("%d/%d=%d\n" , a, b, f);
	return 0;
}