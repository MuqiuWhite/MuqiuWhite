#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	char s[100][100];
	while (gets_s(a) && a[0] != '#')
	{	
		int i=0, j=0, m=0;//i��j��
		int size = strlen(a);
		while (m<size)//��������
		{
			if (a[m] == ' ')
			{
				m++;//ǰ��Ϊ�ո������һλ
			}
			else  
			{
				while (a[m] != ' ' && a[m] != '\0')//���ֵ���
				{				
					s[i][j] = a[m];//����ÿһ����ĸ�����ά����
					m++;//����һλ
					j++;//��һ�з���һ�����ʣ���������
				}
				//���ʴ�����
				s[i][j] = '\0';//ÿһ�н�β
				i++;//����
				j = 0;//�������㣬�洢��һ�еĵ���
			}
		}

		int count = 0;//��ͬ�ĵ��ʼ���
		int c = 0, v = 0;
		for (c = 0; c < i; c++)//����ÿ�еĵ���
		{			
			int flag = 0;
			for (v = c+1; v < i; v++)
			{
				if (strcmp(s[c], s[v]) == 0)
					flag = 1;//һ��һ�бȽϣ������ͬ����flag=1
			}
			//ÿһ�е�����ʣ�µĵ��ʱȽ����
			if (flag != 1)
				count++;//������ʺ�������ͬ
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