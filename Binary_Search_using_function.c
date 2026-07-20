#include<stdio.h>
int binary_search(int arr[], int size , int ele)
{
	int mid=0,low=0,up=size-1;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(arr[mid]==ele)
		{
			return 1;
		}
		if(arr[mid]<ele)
		{
			low=mid+1;
		}
		else
		{
			up=mid-1;
		}
	}
	
	return -1;
}
int main()
{
	int size ;
	printf("Enter The Array Size:");
	scanf("%d",&size);
	
	int arr[size],i=0,ele;
	printf("Enter The Element in Array:");
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	printf("Enter The Search Element:");
	scanf("%d",&ele);
	
	int result=binary_search(arr,size,ele);
	
	if(result==1)
	{
		printf("Element Is Found in Array");
	}
	else
	{
		printf("Element Is Not Found in Array:");
	}	
	
}
