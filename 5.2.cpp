#include <stdio.h> 
int transfer(int n,char A,char B,char C)
{	
	if(n>0)
	{
		printf("ǰ%d�� %c--->%c\n",n-1,'A','B');
		printf("��%d�� %c--->%c\n",n,'A','C');
		printf("ǰ%d�� %c--->%c\n",n-1,'B','A');
		transfer(n-1,A,B,C); 
	}

}
int main()
{
	int n=0;
	char A='A',B='B',C='C';
	scanf("%d",&n);
	transfer(n,A,B,C);
	return 0;
}
