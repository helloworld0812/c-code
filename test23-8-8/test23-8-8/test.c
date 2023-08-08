#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//求100到200之间的素数

int main()                                //First manner
{
	int n,i;
	for (n = 100; n <= 200; n++)
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
				break;
		}
		if (i == n)
		{
			printf("素数是%d\n", n);
		}
	}
	return 0;
}


int main()                               //Second manner
{                                          
	int n,i;
	for (n = 100; n <= 200; n++)
	{
		for (i = 2; i <= sqrt(n); i++)
	{
			if (n % i == 0)
				break;
		}
		if (i >sqrt(n))
		{
			printf("素数是%d\n", n);
		}
	}
	return 0;
}

int main()                                //Third manner
{
	int n,i;
	
	for (n = 100; n <= 200; n++)
	{
		 int digital = 0;
		for (i = 2; i <=sqrt(n); i++)
		{
			if (n % i == 0)
			{
				digital = 1;
				break;
			}
		}
		if(digital==0)
		{
			printf("素数是%d\n", n);
		}
	}
	return 0;
}


bool s_prime(int n)                  //fourth manner
{
	int i;
	for (i = 2; i <=sqrt(n); i++)
	{
		if (n % i == 0)
			break;
	}
	if (i > sqrt(n))
		return true;
	else
		return false;

}
int main()                               
{
	int n;
	for (n = 100; n <= 200; n++)
	{
		if (s_prime(n))
			printf("素数是%d\n", n);
	}
	return 0;
}