#include <stdio.h>
int main(){
//	int n = 10;
//char *pc = (char*)&n;
//int *pi = &n;
//printf("%p\n", &n);
//printf("%p\n", pc);
//printf("%p\n", pc+1);
//printf("%p\n", pi);
//printf("%p\n", pi+1);
//return 0;
int n = 0x11223344;
char *pc = (char *)&n;
int *pi = &n;
*pc = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
*pi = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
return 0;

} 
