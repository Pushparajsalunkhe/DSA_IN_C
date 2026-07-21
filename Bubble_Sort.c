// Bubble Sort
#include<stdio.h>
int main()
{
	int size;
	printf("Enter The Array Size:");
	scanf("%d",&size);
	
	printf("Enter The Array Element:");
	int arr[size],i=0,j,k,temp;
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;                    
	}
	
	for(k=0;k<size-1;k++) 
	{
		for(j=0;j<size-k-1;j++)
		{
			if(arr[k]<arr[j])  
			{
				temp=arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	int s=0;
	while(s<size)
	{
		printf("%d",arr[s]);
		s++;
	}
}
