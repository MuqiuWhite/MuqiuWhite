#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int compare(int a, int b)
{
	if (a > b)
		printf("%d", a);
	else if (a < b)
		printf("%d", b);
	else
		printf("ÏàÍ¬\n");
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	compare(a, b);
	return 0;
}