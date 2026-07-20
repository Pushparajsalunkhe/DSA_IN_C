#include<stdio.h>
int linear_search(int arr[], int size, int ele)
{
	int j;
	//for(j=0;j<size;j++)
	while(j<size)
	{
		if(arr[j]==ele)
		{
			return 1;
			
		}
		j++;
		
	}
	return -1;
}
int main()
{
	int size;
	printf("Enter The Array Size:");
	scanf("%d",&size);
	
	int arr[size],i=0,ele;
	printf("Enter Element In The Array:");
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	printf("Enter The Search Element:");
	scanf("%d",&ele);
	
	int result=linear_search(arr,size,ele);
	
	if(result==1)
	{
		printf("Element Is Found In The Array");
	}
	else
	{
		printf("Element Is Not Found");
	}
}
