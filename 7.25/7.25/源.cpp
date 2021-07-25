#define _CRT_SECURE_NO_WARNINGS 1
//#define LOCAL
#define INF 100000000
#include <stdio.h>
#include <math.h>

int main()
{
	FILE *in, *out;
	in = fopen("data.in", "rb");
	out = fopen("data.out", "wb");
	int i = 0, sum = 1, a = 0, n;
	int max = -INF;
	int min = INF;
	while (fscanf(in,"%d", &n)==1)
	{

		sum = sum + n;
		if (n < min)
			min = n;
		if (n > max)
			max = n;
	}
	fprintf(out,"%d %d\n", max, min);
	fclose(in);
	fclose(out);
	return 0;
}
//int main()
//{
	/*const double pi = cos(3.1415926);
	printf("%lf", pi);*/
	//	printf("%lf\n",sqrt(-10) );
	//	int a,b;
	//	char b[10];
	//	scanf("%d%d", &a, &b);
	//	printf("%d %d", a, b);
	//	printf("%%d %%d");
	//	int a, b;
		//for (a = 1; a <= 9; a++)
		//{
		//	for (b = 0; b <= 9; b++)
		//	{
		//		int m = a * 1100 + b * 11;
		//		int n = sqrt(n) + 0.5;
		//		if(m*m=n)
		//			printf("Yes")£»
		//for(int x=1; ;x++)
		//{
		//	int n = x * x;
		//	if (n < 1000)
		//		continue;
		//	if (n > 9999)
		//		break;
		//	int l = n / 100;
		//	int r = n % 100;
	//		long long a= 100000000000000;
	//		printf("%ld  ", a);
			//if ((l / 10 == l % 10) && (r / 10 == r % 10))
			//{
			//	printf("%d  ", n);
			//}
	//	}
	//#ifdef LOCAL
	//	
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	//#endif