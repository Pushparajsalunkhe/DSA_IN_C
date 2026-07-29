//Find the frequency of each element
#include<stdio.h>
freq_count(int arr[] , int size)
{
	
	int i,j;
	int visit[size];
	for(i=0;i<size;i++)
		visit[i]=0;
	
	for(i=0;i<size;i++)
	{   
	    if(visit[i]==1)
	    {
	    	continue;
		}
	    int count=1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count=count+1;
				visit[j]=1;
			}
		}
		printf("\nElemet:%d , count:%d",arr[i],count);
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
	
	freq_count(arr,size);

}
