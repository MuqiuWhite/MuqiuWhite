// ͷ�ļ� 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <errno.h>
#define na 20
#define te 20
#define em 30
#define cate 20
#define first_size 3
enum Select
{
	Exit,
	Add,
	Dele,
	Find,
	Modify,
	Sort,
	Show,
	Destory, 
	Save,
};

typedef struct people
{
	char name[na];
	char tele[te];
	char category[cate];
	char email[em];
	
}people;

typedef struct num_con  //ͨѶ¼
{
	people *data;//�ṹ������ ��źö�����Ϣ 
	int size;//��¼��ǰ���е�Ԫ�ظ��� 
	int capa;//��ǰ������� capa ==sizeʱ���������� 
}num_con;


void menu();

void check(num_con *ps);//����Ƿ���Ҫ���� 

int find_kind();//ѡ��������� 

int find(num_con *ps,char name[na]);//�������� 

void Initialize_con(num_con *ps);//��ʼ��

void add(num_con *ps);//���� 

void dele(num_con *ps);//ɾ��

void findkind(num_con *ps);//�������� 

void findname(num_con *ps);//�����ֲ���

void modify(num_con *ps);//�޸� 
 
void sort(num_con *ps);//���� 

void show(const num_con *ps);//��ʾ 

void destory(num_con * ps);//��� 

void save(num_con *ps); //���� 

void load(num_con *ps);//���� 
