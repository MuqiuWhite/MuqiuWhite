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
	//struct he his = { "wdw",22,"��"��"2021" };
	//printf("%s,%d,%s,%s", his.name, his.age, his.sex, his.bir);
	//struct he* p = &his;

#include <stdio.h>
    int main()
    {
        int n = 0, x = 0, key = 0, i = 0;
        int count = 0;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
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

        int x, a;
        char p;
        while (scanf("%d", &x) != EOF)
        {
            a = x / 10;
            switch (a)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                p = 'E';
                break;
            case 6:
                p = 'D';
                break;
            case 7:
                p = 'C';
                break;
            case 8:
                p = 'B';
                break;
            case 9:
            case 10:
                p = 'A';
                break;
            default:
                p = 'F';
                break;

            }
            if (x > 100 || x < 0)
            {
                p = 'F';
            }
            printf("%c", p);

        }
        return 0;
    }

	return 0;
}