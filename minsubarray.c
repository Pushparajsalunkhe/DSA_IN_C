// Minimum Subarray Sum.   
#include<stdio.h>
int min_subarray(int arr[] , int size)
{
    int i,min_arr=arr[0],cur_arr=0;
    for(i=0;i<size;i++)
    {
        cur_arr +=arr[i];

        if(cur_arr < min_arr)
        {
            min_arr=cur_arr;
        }

        if(cur_arr<0)
        {
            cur_arr=0;
        }
    }

    printf("%d",min_arr);
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

    min_subarray(arr,size);
}