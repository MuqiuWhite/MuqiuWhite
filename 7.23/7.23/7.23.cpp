#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//#define DEA(x, y) ((x)-(y))
	
int main()
{
	/*int sum = DEA(2, 3);
	printf("sum = %d\n", sum);
	sum = 100 * DEA(2, 3);
	printf("sum = %d\n", sum);*/
	/*int a = 5;
	int* p = &a;
	*p = 3;
	printf("%p\n", &a);*/
	struct stu
	{
		char name[20];
		char sex[20];
		int age[20];
	};
	struct stu a = { "张三","男",100 };
	struct stu* b = &a;
	printf("%s  %s  %d\n", b->name, b->sex, b->age);
	printf("%s  %s  %d\n", a.name, a.sex, a.age);
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
		return 0;
}
//int i = 0;
	/*while (i < 366)
	{
		printf("%d天\n", i);
		i++;
	}	printf("一年有多少天应该在认认真真的学习并且收获到知识呢？\n");*/
//int in = 0;
//printf("喜欢编程吗？\n0.不喜欢。1.喜欢\n");
//scanf("%d", &in);
//if (in == 0)
//{
//	printf("呜呜\n");
//}
//else
//{
//	printf("加油！\n");
//}