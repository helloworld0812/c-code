#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



//ʵ��һԪ���η������
int main()
{
	
	double a,b,c,d,x1,x2;           //���岿��
	char input;
	
	do
	{
		printf("������һԪ���η��̵�����ϵ����\n");
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
			printf("�������⣬x1=%lf,x2=%lf\n", x1, x2);
		}
		else if (d == 0)
		{
			x1 = (-b) / (2 * a);
			x2 = x1;
			printf("��һ����,x1=x2=%lf\n", x1);
		}
		else
		{
			printf("�޽�\n");
		}
		printf("����Ҫ����������?(Y���������������):");
		scanf(" %c", &input);
	} while (input=='Y'||input=='y');


	return 0;
}