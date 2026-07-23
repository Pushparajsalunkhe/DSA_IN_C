//Find the maximum and minimum element.
#include<stdio.h>
int max_min_element(int arr[] , int size)
{
	int min=arr[0],max=arr[0],i;
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	printf("Maximum Element is:%d",max);
	printf("\nMinimum Element is:%d",min);
}
int main()
{
	int size;
	printf("Enter The Array Size");
	scanf("%d",&size);
	
	int arr[size],i=0;
	printf("Enter The Array Element:");
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	max_min_element(arr,size);
}
