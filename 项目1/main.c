#include "contact.h"
/* ���� */

int main(int argc, char *argv[]) 
{	
	//����ͨѶ¼ 
	num_con con;
	
	Initialize_con(&con); //��ʼ�� 
	int input=0; 
	int i=0;
//��ȡ����	
	read(&con);	

	do
	{
		menu();
		printf("���ѡ��Ѽ��\n");
		scanf("%d",&input);
		switch(input)
		{
			case Exit:
				save(&con);//�������� 
				destory(&con);//����ͨѶ¼���ͷ��ڴ� 
				system("cls"); 
				printf("�˳��ɹ�\n"); 
				break;
				
			case Add:
				add(&con);
				break;
				
			case Dele:
				dele(&con); 
				break;
				
			case Find:
				i=find_kind(); 
				if(i==1)
					findname(&con);
				else if(i==2) 				
					findkind(&con);
				break;
				
			case Modify:
				modify(&con);
				break;
				
			case Sort:
				sort(&con);
				break;
				
			case Show:
				show(&con);
				break;	
			
			case Destory:
				destory(&con);
				break;
				
			case Save:
				save(&con);
				break; 
				
			default:
				printf("�������Ѽ������������Ŷ��\n");
				break; 
		}
		
	}while(input); 

	return 0;
}
