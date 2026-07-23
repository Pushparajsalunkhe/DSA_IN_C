// Insert an element at a specific position.
#include<stdio.h>
int insert_element(int arr[] , int size , int ele , int index)
{
	int i,temp;   // 1=0 2=1 3=2 4=3 5=4  ind=2 12 
	if(index<size)
	{
		for(i=size+1;i>index-1;i--)
       	{
	     	arr[i]=arr[i-1];
	    }
	    arr[index]=ele;
	}
	
}

print_element(int arr[] , int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	
}

print_ele(int arr[] , int size)
{
	int i;
	for(i=0;i<size+1;i++)
	{
		printf("%d",arr[i]);
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
	
	int ele,index;
	printf("Enter The Element:");
	scanf("%d",&ele);
	
	printf("Enter The index:");
	scanf("%d",&index);
	
	printf("Before Insert:");
	print_element(arr,size);
	
	insert_element(arr,size,ele,index);
	
	printf("\nAfter Insert");
	print_ele(arr,size);
}
