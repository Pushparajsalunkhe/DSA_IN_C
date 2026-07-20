#include<stdio.h>
int main()
{
	int size;
	printf("Enter The Array Size:");
	scanf("%d",&size);
	
	int arr[size],i=0,j=0,flag=0;
	printf("Enter The Element:");
	
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
	}

	int value;
	printf("\nEnter The Element:");
	scanf("%d",&value);
	
	while(j<size)
	{
		if(value==arr[j])
		{
			flag=1;
		}
		j++;
	}
	
	if(flag==1)
	{
		printf("Element Is Found");
	}
	else
	{
		printf("Element Is Not Found");
	}
}
