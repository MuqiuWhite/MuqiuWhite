#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct he
//{
//	char name[20];
//	int age;
//	char sex[20];
//	char bir[20];
//
//};
int main()
{
	//int a = 1;
	//int b = 2;
	//struct he his = { "wdw",22,"ÄÐ"£¬"2021" };
	//printf("%s,%d,%s,%s", his.name, his.age, his.sex, his.bir);
	//struct he* p = &his;

        int n = 0, x = 0, key = 0, i = 0;
        int a[100] = { 0 }, count = 0;

        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            scanf("%d", a[i]);
        }

        scanf("%d", &key);

        for (i = 0; i < n; i++)
        {
            if (a[i] == key)
            {
                count++;
            }
        }
        printf("%d", count);

	return 0;
}