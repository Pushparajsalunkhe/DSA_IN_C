#include<stdio.h>
int largest_element(int arr[] , int size)
{
	int largest=arr[0],i,j;
	for(i=0;i<size;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	return largest;
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
	
	int result=largest_element(arr,size);
	printf("Largest Element Is:%d",result);
}
