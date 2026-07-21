#include<stdio.h>
int smallest_element(int arr[] , int size)
{
	int smallest=arr[0],i;
	for (i=0;i<size;i++)
	{
		if(arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}
	return smallest;
}
int main()
{
	int size;
	printf("Enter The Size :");
	scanf("%d",&size);
	
	int arr[size],i=0;
	printf("Enter The Array Element :");
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	int result=smallest_element(arr,size);
	printf("Smallest Element Is :%d",result);
}
