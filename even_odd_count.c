// Count even and odd numbers.
#include<stdio.h>
int count_even_odd(int arr[] , int size)
{
	int e_count=0,o_count=0,i;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			e_count=e_count+1;
		}
		else
		{
			o_count=o_count+1;
		}
	}
	
    printf("Even Count is:%d",e_count);
	printf("\nOdd Count is:%d",o_count);
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
	count_even_odd(arr,size);

}
