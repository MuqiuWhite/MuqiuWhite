#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;

};//链表是将结构体和结构体连接在一起
struct node* createlist()
{
	struct node* headlist = (struct node*)malloc(sizeof(struct node));
	//h成为了结构体变量
	//变量使用前必须被初始化
//  headlist->data = 1; 一般不被初始化
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

//3. 打印（遍历）节点
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

//4.头插法，插入结点，参数：插入哪个链表，插入结点的数据是多少
void insertnodebyhead(struct node* headnode, int data)
{
	//1、创建插入的结点
	struct node* newnode = creatnode(data);
	newnode->next = headnode->next;
	headnode->next = newnode;

}

//5.删除结点
void deletenode(struct node* headnode, int posdata)
{
	struct note* posnode = headnode->next;//posnode为headnode的下一个
	struct node* posnodefront = headnode;//posnodefront为headnode
	if (posnode == NULL)
		printf("无法删除，链表为空\n");
	else
	{
		while (posnode->data != posdata)
		{
			posnodefront = posnode;
			posnode = posnodefront->next;
			if (posnode == NULL)
			{
				printf("无法找到\n");
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
//	node1.next = &node2;//node2的首地址放入node1.next
//	node2.next = &node3;//静态链表 

	//动态链表: 动态内存申请+模块化设计
  /*1.创建链表
	2.创建结点
	3.插入节点
	4.删除节点
	5.打印遍历链表（测试）*/

	struct node* list = createlist();
	//插入
	insertnodebyhead(list, 1);
	insertnodebyhead(list, 2);
	printlist(list);
	//删除
	deletenode(list, 2);
	printlist(list);
	return 0;
}
