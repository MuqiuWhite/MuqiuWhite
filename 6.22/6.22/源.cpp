#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("1.play\n");
//	printf("0.exist\n");
//}
//void game()
//{
//	int s = 0;
//	s = rand() % 100 + 1;
//
//}
//time_t
int main()
{
	//int a;
	//do
	//{
	//	menu();
	//	srand((unsigned)time(NULL));
	//	printf("选择\n");
	//	scanf("%d", &a);
	//	switch (a)
	//	{
	//	case 1:
	//	//	play();
	//		break;
	//	case 2:
	//		break;
	//	default:
	//		break;

	//	}
	//} while (a);

	/*int i = 0;
	for (i = 3; i < 200; i += 3)
		printf("%d", i);*/
	//暴力求解
	int m = (a > b ? b : a);
	while (1)
	{
		if (a % m == 0 && b % m == 0)
		{
			printf("%d", m);
			break;
		}
		m--;
	}

	//辗转相除
	int r = 0;
	while (r = m % n)
	{
		m = n;
		n = r;
	}
	printf("%d", n);


	//素数
	flag = 1;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			flag = 0;
		}

	}
	if (flag == 1)
	{
		printf("%d  ", i);
		count++;
	}
	prinf("%d", count);
	return 0;



}


