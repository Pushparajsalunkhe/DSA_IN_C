#include<stdio.h>
int kadanes_algo(int arr[] , int size)
{
    int i , max_sum=arr[0] , cur_sum=0;
    for(i=0;i<size;i++)
    {
        cur_sum+=arr[i] ;
        if(cur_sum > max_sum)
        {
            max_sum=cur_sum;
        }

        if(cur_sum<0)
        {
            cur_sum=0;
        }

    }

    printf("%d",max_sum);

}
int main()
{
    int arr[]={3,-4,5,4,-1,7,-8};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    kadanes_algo(arr,size);
}