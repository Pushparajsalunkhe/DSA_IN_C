// Linear Search 
#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int ele;
	printf("Enter The Element:-");
	scanf("%d",&ele);
	int i=0;
	int flag=0;
	while(i<5)
	{
		if(arr[i]==ele)
		{
			flag=1;
		}
		i++;
	}
	
	if(flag==1)
	{
		printf("Element Is Found");
	}
	else
	{
		printf("Element Is Not Found");
	}
}

