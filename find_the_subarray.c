#include<stdio.h>
int subarray(int arr[] , int size)
{
    int start,end,i;

    for(start=0;start<size;start++)
    {
        for(end=start;end<size;end++)
        {
            for(i=start;i<=end;i++)
            {
                printf("%d",arr[i]);
            }
            printf(" ");
        }
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

    subarray(arr,size);

}