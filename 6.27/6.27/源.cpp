#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("**************************\n");
	printf("**********������**********\n");
	printf("***0.exit********1.play***\n");
	printf("**************************\n");

}

void play()
{
	int key = rand() % 100 + 1;//ÿ��ʼһ����Ϸ�����²���һ�������
	int a = 0;
	while (1)
	{
		printf("����������\n");
		scanf("%d", &a);
		if (a == key)
		{
			printf("�¶���\n");
			break;
		}
		else if(a>key)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��С��\n");
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));//�����������㣬ֻ����һ��
	int i = 1;
	do
	{
		menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			play();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (i);

	return 0;
}