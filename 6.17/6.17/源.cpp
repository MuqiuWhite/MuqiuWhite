#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0, j = 0;
	for (a = 101; a < 200; a++)
	{
		for (j = 2; j < a; j++)
		{
			if (a % j == 0)
				break;
		}
		if (j == a)
			printf("%d  ", a);

	}

	return 0;
}



//int a, b, c, t = 0;
//while (scanf("%d%d%d", &a, &b, &c) != EOF)
//{
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//}

/*int i = 0;
for (i = 1; i < 100; i++)
{
	if (i % 3 == 0)
	{
		printf("%d  ", i);
	}
}*/


//int i = 0, j = 0;
//int t = 0, a = 0;
//int c, d;
//while (scanf("%d%d", &i, &j) != EOF)
//{
//	if (i < j)
//	{
//		t = i;
//		i = j;
//		j = t;
//	}
//	c = i;
//	d = j;
//	while (i % j)
//	{
//		a = i % j;
//		i = j;
//		j = a;
//	}
//	printf("%d\n", j);//���Լ��
//	printf("%d\n", c * d / j);//��С������
//}


/*int a = 0;
	for (a = 1000; a <= 2000; a++)
	{
		if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0)
		{
			printf("%d  ", a);
		}

	}*/

