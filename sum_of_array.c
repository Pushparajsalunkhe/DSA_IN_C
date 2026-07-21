#include<stdio.h>
int sum_of_array(int arr[] , int size)
{
	int sum=0,i;
	for (i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	
	return sum;
}
int main()
{
	int size;
	printf("Enter The Array Size :");
	scanf("%d",&size);
	
	int arr[size],i=0;
	printf("Enter The Array Element :");
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	int result=sum_of_array(arr,size);
	printf("Array Sum is :%d",result);
}
