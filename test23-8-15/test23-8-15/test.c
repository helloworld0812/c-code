#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include  "counter.h"

//��һ������Ӽ��˳���ͷ�ļ�
int main()
{
	int a, b;
	printf("��һ�����ǣ�");
	scanf("%d", &a);
	printf("�ڶ������ǣ�");
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