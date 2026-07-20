// Second Smallest Element In Array

#include<stdio.h>
int second_smallest_element(int arr[] , int size )
{
	int smallest=arr[0],second=arr[0],i=0; // 1 2 3
	while(i<size)
	{
		if(arr[i]<smallest)
		{
			second=smallest;
			smallest=arr[i];
		}
		else if(arr[i]<second && arr[i] != smallest)
		{
			second=arr[i];
		}
		i++;
	}
	
	return second;
}
int main()
{
	int size;
	printf("Enter The Array Size:");
	scanf("%d",&size);
	
	int arr[size],i=0;
	printf("Enter The Array Element:");
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	int result=second_smallest_element(arr,size);
	printf("Second Smallest Element Is :%d",result);
	
}
