#include<stdio.h>
int max_subarray(int arr[] , int size)
{
    int start,end,max_arr=arr[0];
    for(start=0;start<size;start++)
    {
        int currnt_sum=0;

        for(end=start;end<size;end++)
        {
            currnt_sum+=arr[end];
            if(currnt_sum>max_arr)
            {
                max_arr=currnt_sum;
            }
        
        }
    }

    printf("%d",max_arr);
}
int main()
{
    // int arr[]={3,-4,5,4,-1,7,-8};
    // int size=sizeof(arr)/sizeof(arr[0]);

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

    max_subarray(arr,size);
}
