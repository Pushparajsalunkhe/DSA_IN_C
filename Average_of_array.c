//. Calculate the average of array elements.
#include<stdio.h>
float Calculest_avg(int arr[] , int size)
{
	int sum,i;
	float avg;
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/size;
	return avg;
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
	
	float result=Calculest_avg(arr,size);
	printf("Average of Array is:%f",result);
}
