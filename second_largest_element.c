// second largest element

#include<stdio.h>
int second_largest(int arr[],int size)
{
	int lar=arr[0],sec=arr[0],i=0;
	while(i<size)
	{
		if(arr[i]>lar)
		{
			sec=lar;
			lar=arr[i];
		}
		else if(arr[i]>sec && arr[i] !=lar)
		{
			sec=arr[i];
		}
		i++;
	}
	
	return sec;
}
int main()
{
	int size;
	printf("Enter The Array Size:");
	scanf("%d",&size);
	
	int arr[size],i=0;
	printf("Enter The Element In Array:");
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	int result = second_largest(arr,size);
	printf("The Second Largest Element Is:-%d",result);
}
