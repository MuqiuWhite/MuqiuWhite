#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>
int main()
{
	int a[10] = { 0 };
	int i = 0;
	int t = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	int max = a[0];
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			t = max;
			max = a[i];
			a[i] = t;
		}
	}
	printf("%d", max);	
	return 0;
}


//int n = 0, a = 0;
//for (n = 1; n <= 100; n++)
//{
//	if (n % 10 == 9)
//		a++;
//	if (n / 10 == 9)
//		a++;

//}
//printf("%d", a);

	/*int a = 1;
	int b = 1;
	double t = 0, s = 0;
	for (a = 1; a <= 100; a++)
	{
		b = 1;
		if (a % 2 == 0)
		{
			b = -1;
		}
		t = (1.0 / a) * b;
		s = s + t;
	}
	printf("%lf", s);*/