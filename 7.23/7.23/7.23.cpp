#define _CRT_SECURE_NO_WARNINGS 1

//#include "add.h"
//#pragma comment(lib,"qq.lib")
//int add(int a, int b)
//{
//	return a + b;
//}
//#define DEA(x, y) ((x)-(y))
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//123
//
//	}
//	printf("%d ", n % 10);
//}
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a /10);
//		
//	}
//	printf("%d ", a % 10);
//}
//int size(char* a)
//{
//	if (*a != '\0')
//	{
//		return(1 + size(a + 1));
//	}
//	else
//		return 0;
//}
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*fac(n - 1);
//}
//int fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n>2)
//	{
//		
//		a = b;
//		b = c;
//		c = a + b;
//		n--;
//	}
//	return c;
//
//}
#include <stdio.h>
#include <math.h>
//int jud(int a)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//			return 0;
//	}
//	if (i > sqrt(a))
//		return 1;
//}
//int year(int a)
//{
//	if ((a % 400 == 0) || ((a % 100 != 0) && (a % 4 == 0)))
//
//		return 1;
//	else
//		return 0;
//}
//void change(int* a, int* b)
//{
//	int c;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
void mul(int n)
{
	int a = 1, b = 1, c = 1;
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%-2d*%2d=%-3d  ", a,b,c);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	mul(n);
	return 0;
}
/*int a = 2, b = 3;
	change(&a, &b);
	printf("a=%d,b=%d", a, b);*/
/*int a = 0;
	for (a = 1000; a <= 2000; a++)
	{
		if (year(a) == 1)
		{
			printf("%d ", a);
		}
	}*/
/*int a = 0;
for (a = 100; a < 200; a++)
{
	int t = jud(a);
	if (t == 1)
		printf("%d ", a);
}
printf("\n");
printf("�����룺>\n");

int b = 0;
scanf("%d", &b);
if (jud(b) == 1)
	printf("%d������\n",b);
else
	printf("%d��������\n",b);*/
/*int n = 0;
scanf("%d", &n);
printf("%d,%d ", n, fib(n));*/
//char a[] = "abcde";
//int s=size(a);
//printf("%d ", s);
//int n = 0;
//scanf("%d", &n);
//int s = fac(n);
//printf("%d ", s);
//for (i = 1; i <= n; i++)
//{
//	r = r * i;
//}
/*int a = 0;
	scanf("%d", &a);
	print(a);*/
//unsigned int num = 0;
	//scanf("%d", &num);
	//int a = 3, b = 4;
	//printf("%d",add(a, b));
//int i = 0;
	/*while (i < 366)
	{
		printf("%d��\n", i);
		i++;
	}	printf("һ���ж�����Ӧ�������������ѧϰ�����ջ�֪ʶ�أ�\n");*/
//int in = 0;
//printf("ϲ�������\n0.��ϲ����1.ϲ��\n");
//scanf("%d", &in);
//if (in == 0)
//{
//	printf("����\n");
//}
//else
//{
//	printf("���ͣ�\n");
//}
	/*int sum = DEA(2, 3);
	printf("sum = %d\n", sum);
	sum = 100 * DEA(2, 3);
	printf("sum = %d\n", sum);*/
	/*int a = 5;
	int* p = &a;
	*p = 3;
	printf("%p\n", &a);*/
	//struct stu
	//{
	//	char name[20];
	//	char sex[20];
	//	int age[20];
	//};
	//struct stu a = { "����","��",100 };
	//struct stu* b = &a;
	//printf("%s  %s  %d\n", b->name, b->sex, b->age);
	//printf("%s  %s  %d\n", a.name, a.sex, a.age);
	//int a = 2, b = 5;
	/*int num=add(a, b);
	printf("%d\n", num);*/
	//	int a[3] = { 1,2,3 };
		//int i = 0;
		//for (i = 0; i < 3; i++)
		//{
		//	printf("%d  ", a[i]);
		//}

		/*unsigned int a = 2;
		printf("%d\n", a);
		typedef unsigned int ti;
		ti b = 3;
		printf("%d\n", b);
	#define min 100;*/
	/*char b[] = "hello";*/