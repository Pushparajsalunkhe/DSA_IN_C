#include<stdio.h>
int bubblesort(int arr[] , int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
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
	// Orignal Array print
	printf("Orignal Array:");
	print_array(arr,size);
	
	//Bubblesort print
	bubblesort(arr,size);
	
	// Sorted Array Print 
	printf("\nSorted Array:");
	print_array(arr,size);
	
}
