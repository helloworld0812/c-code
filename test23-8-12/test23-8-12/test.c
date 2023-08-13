#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



//实现一元二次方程求解
int main()
{
	
	double a,b,c,d,x1,x2;           //定义部分
	char input;
	
	do
	{
		printf("请输入一元二次方程的三个系数：\n");
		printf("a=");
		scanf("%lf", &a);
		printf("b=");      
		scanf("%lf", &b);
		printf("c=");
		scanf("%lf", &c);
		d = b * b - 4 * a * c;
		if (d > 0)
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("有两个解，x1=%lf,x2=%lf\n", x1, x2);
		}
		else if (d == 0)
		{
			x1 = (-b) / (2 * a);
			x2 = x1;
			printf("有一个解,x1=x2=%lf\n", x1);
		}
		else
		{
			printf("无解\n");
		}
		printf("还需要继续输入吗?(Y继续，任意键结束):");
		scanf(" %c", &input);
	} while (input=='Y'||input=='y');


	return 0;
}