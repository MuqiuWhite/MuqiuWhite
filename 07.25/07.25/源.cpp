#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	char s[100][100];
	while (gets_s(a) && a[0] != '#')
	{	
		int i=0, j=0, m=0;//i行j列
		int size = strlen(a);
		while (m<size)//遍历数组
		{
			if (a[m] == ' ')
			{
				m++;//前面为空格，则后移一位
			}
			else  
			{
				while (a[m] != ' ' && a[m] != '\0')//出现单词
				{				
					s[i][j] = a[m];//单词每一个字母放入二维数组
					m++;//后移一位
					j++;//在一行放入一个单词，列数增加
				}
				//单词存放完毕
				s[i][j] = '\0';//每一行结尾
				i++;//换行
				j = 0;//列数清零，存储新一行的单词
			}
		}

		int count = 0;//不同的单词计数
		int c = 0, v = 0;
		for (c = 0; c < i; c++)//遍历每行的单词
		{			
			int flag = 0;
			for (v = c+1; v < i; v++)
			{
				if (strcmp(s[c], s[v]) == 0)
					flag = 1;//一行一行比较，如果相同，则flag=1
			}
			//每一行单词与剩下的单词比较完后
			if (flag != 1)
				count++;//这个单词和其他不同
		}
		printf("%d\n", count);		
	}

	return 0;
}

//int n = 0;
//while (scanf("%d", &n) != EOF)
//{
//	getchar();
//	while (n--)
//	{
//		char a;
//		int b;
//		int sum = 0;
//		scanf("%c%d", &a,&b);
//		if (a >= 'A' && a <= 'Z')
//		{
//			sum = a - 'A' + 1 ;
//		}
//		else
//		{
//			sum = -(a - 'a' + 1);
//		}
//		printf("%d\n", sum+b);
//		
//	}
//}

/*
char a[100000];
	char b[100000];
	while (scanf("%s %s", a, b) != EOF)
	{
		s(a);
		s(b);
		if (!strcmp(a, b))
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}*/

//double a, b;
//while (scanf("%lf%lf", &a, &b) != EOF)
//{
//	if()
//	if (a == b)
//		printf("YES\n");
//	else if
//		printf("NO\n");
//}

//int n = 0;
//int sum = 3;
//int a = 0,i=0;
//while ((scanf("%d", &n)!= EOF))
//{
//	while (n--)
//	{
//		scanf("%d", &a);
//		sum = 3;
//		for (i = 0; i < a; i++)
//		{
//			sum = (sum - 1) * 2;
//		}
//		printf("%d\n", sum);
//	}
//}
//void s(char* a)
//{
//	
//	int i = 0;
//	int size = strlen(a);
//	if (strstr(a, "."))
//	{
//		for (i = size - 1; a[i] == '0'; i--)
//		{
//			a[size - 1] = '\0';
//			size--;
//		}
//	}
//	if (a[size - 1] == '.')
//	{
//		a[size - 1] = '\0';
//	}
//}