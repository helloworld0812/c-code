#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//求前50个素数
int main()
{

	int n, i, count, prime;
	n = 1, count = 0;
	while (count < 50)
	{

		prime = 0;
		for (i = 2; i < n; i++)
		{

			if (n % i == 0)
			{
				prime = 1;
				break;
			}
		}
		if (prime == 0)
		{
			printf("%-10d", n);
			count++;
			if (count % 5 == 0)          //每输入5个换行
			{
				printf("\n");
			}
		}
		n++;
	}

	return 0;
}