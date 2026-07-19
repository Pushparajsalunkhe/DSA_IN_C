#include<stdio.h>
int two_sum(int arr[], int size , int target)
{
    int i,j;
    for(i=0;i<size;i++)
    {
		for (j=i+1;j<size;j++)
		{
		    if(arr[i]+arr[j]==target)
			{
                printf("%d %d",i,j);
            }    
        }     
    }
} 
int main()
{
    int size;
    printf("Enter Size:");
    scanf("%d",&size);

    int arr[size],i=0;
    printf("Enter Element:");
    while(i<size)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    int target;
    printf("Enter The Target:");
    scanf("%d",&target);
    two_sum(arr,size,target);

}
