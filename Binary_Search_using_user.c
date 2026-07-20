#include<stdio.h>
int main()
{
	int size;
	printf("Enter The Array Size:");
	scanf("%d",&size);
	
	int arr[size],i=0,mid=0,low=0,up=size,flag=0;
	printf("Enter The Element In Array:");
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
		
	}
	
	int ele;
	printf("Enter The Search Element:");
	scanf("%d",&ele);
	
	while(low<=up)
	{
		mid=(low+up)/2;
		
		if(arr[mid]==ele)
		{
			flag=1;
			break;
		}
		if(arr[mid]<ele) 
		{
			up=mid+1;
		}
		else
		{
			low=mid-1;
		}
	}
	if(flag==1)
	{
		printf("Element Is Found And Location Is:%d",mid);
	}
	else
	{
		printf("Element Is Not Found");
	}
	
}
