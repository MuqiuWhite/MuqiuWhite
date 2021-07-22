#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main()
{
	int x = 1, y = 2;
	add(x, y);
	printf("%p", &add);
	void (*p)(char*) = Print;
	return 0;
}