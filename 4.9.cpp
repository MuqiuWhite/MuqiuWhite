#include <stdio.h>
int main()

{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	int k=7;
	int mid=(left+right)/2;
	while(left<=right)
	{
		if(arr[mid]>k)
		{right=mid-1;}
		else if(arr[mid]<k)
		{left=mid+1;}
		else
		{printf("�ҵ���%d",mid);break;}
	}
	if(left>right)
//	printf("")
	
	
	printf("�Ҳ���");
		
	
//	printf("��Ү");
	

return 0;
	}
	
