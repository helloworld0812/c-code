#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>



int main()
{
	int n, count=0;
	for (n = 1; n <= 100; n++)
	{
		if (n % 10 == 9)
			count++;
		if (n / 10 == 9)
			count++;
	}
	printf("count=%d\n", count);
	return 0;
}