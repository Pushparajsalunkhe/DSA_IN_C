// Selection Sort

#include<stdio.h>
int selection(int arr[] , int size)
{
	int i,j,minindex,temp;
	for(i=0;i<size;i++)
	{
		minindex=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[minindex])
			{
				minindex=j;
			}
		}
		
		temp=arr[minindex];
		arr[minindex]=arr[i];
		arr[i]=temp;
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
	
	selection(arr,size);
	
	printf("\nSorted Array:\n");
	print_array(arr,size);
}
