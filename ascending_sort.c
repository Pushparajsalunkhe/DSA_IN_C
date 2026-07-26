//Sort an array in ascending order.
#include<stdio.h>
int ascending(int arr[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int print_array(int arr[] , int size)
{
	int i=0;
	while(i<size)
	{
		printf("%d",arr[i]);
		i++;
	}
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
	
	printf("Orignal Array:\n");
	print_array(arr,size);
	
	ascending(arr,size);
	
	printf("\nSorted Array:\n");
	print_array(arr,size);
}
