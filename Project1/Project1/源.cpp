#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;

};//�����ǽ��ṹ��ͽṹ��������һ��
struct node* createlist()
{
	struct node* headlist = (struct node*)malloc(sizeof(struct node));
	//h��Ϊ�˽ṹ�����
	//����ʹ��ǰ���뱻��ʼ��
//  headlist->data = 1; һ�㲻����ʼ��
	headlist->next = NULL;
	return headlist;
}

//2.
struct node* creatnode(int data)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}

//3. ��ӡ���������ڵ�
void printlist(struct node* headnode)
{
	struct node* pmove = headnode->next;
	while (pmove)
	{
		printf("%d ", pmove->data);
		pmove = pmove->next;
	}
	printf("\n");
}

//4.ͷ�巨�������㣬�����������ĸ�����������������Ƕ���
void insertnodebyhead(struct node* headnode, int data)
{
	//1����������Ľ��
	struct node* newnode = creatnode(data);
	newnode->next = headnode->next;
	headnode->next = newnode;

}

//5.ɾ�����
void deletenode(struct node* headnode, int posdata)
{
	struct note* posnode = headnode->next;//posnodeΪheadnode����һ��
	struct node* posnodefront = headnode;//posnodefrontΪheadnode
	if (posnode == NULL)
		printf("�޷�ɾ��������Ϊ��\n");
	else
	{
		while (posnode->data != posdata)
		{
			posnodefront = posnode;
			posnode = posnodefront->next;
			if (posnode == NULL)
			{
				printf("�޷��ҵ�\n");
				return;
			}

		}

		posnodefront->next = posnode->next;
		free(posnode);
	}
}

int main()
{
//	struct node node1 = {1, NULL};
//	struct node node2 = {2, NULL};
//	struct node node3 = {3, NULL};
//	node1.next = &node2;//node2���׵�ַ����node1.next
//	node2.next = &node3;//��̬���� 

	//��̬����: ��̬�ڴ�����+ģ�黯���
  /*1.��������
	2.�������
	3.����ڵ�
	4.ɾ���ڵ�
	5.��ӡ�����������ԣ�*/

	struct node* list = createlist();
	//����
	insertnodebyhead(list, 1);
	insertnodebyhead(list, 2);
	printlist(list);
	//ɾ��
	deletenode(list, 2);
	printlist(list);
	return 0;
}
