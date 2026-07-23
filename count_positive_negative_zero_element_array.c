// Count positive, negative, and zero elements.

#include<stdio.h>
int count(int arr[] , int size)
{
	int p_count=0,n_count=0,z_count=0,i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==0)
		{
			z_count=z_count+1;
		}
		else if(arr[i]>0)
		{
			p_count=p_count+1;
		}
		else
		{
			n_count=n_count+1;
		}
	}
	
	printf("Count of Positive Element is:%d",p_count);
	printf("\nCount of Negative Element is:%d",n_count);
	printf("\ncount of Zero Element is:%d",z_count);
	
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
	
	count(arr,size);
}
