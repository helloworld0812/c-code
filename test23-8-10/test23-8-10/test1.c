#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//构建函数,用二分法找值，找到返回数组下标，找不到返回-1
int search(int a[], int l, int f)
{
	int left, right,average;
	left = 0;
	right = l - 1;
	while (left<=right)          
	{
		average = (left + right) / 2;
		if (f > a[average])
			left = average + 1;
		else if (f < a[average])
			right = average - 1;
		else
			return average;
	}
	return -1;
}


int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int find = 7;
	int len = sizeof(a) / sizeof(a[0]);
	int num=search(a, len, find);
	if (num == -1)
		printf("找不到指定的数\n");
	else
		printf("找到了,下标是%d\n",num);

			
	return 0;
}