//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void play()
//{
//	int wan, input;
//	
//	printf("请猜1到100的数字\n");
//	wan = rand()%100+1;
//	printf("%d\n", wan);
//	while (1)
//	{
//		scanf("%d", &input);
//		if (input > wan)
//		{
//			printf("大了\n");
//		}
//		else if (input < wan)
//		{
//			printf("小了\n");
//		}
//		else
//		{
//			printf("恭喜你，答对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int n;
//	do
//	{
//		printf("**********1.玩******0.不玩**********\n");
//		scanf("%d", &n);
//		if (n == 1)
//			play();
//		else if (n == 0)
//			break;
//		else
//			printf("输入有错，请重新输入：\n");
//	} while (1);
//
//	return 0;
//}