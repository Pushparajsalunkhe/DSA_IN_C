#include<stdio.h>
int sort(int *a , int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[] , int start , int end)
{
    int pivot=arr[end];
    int i=start-1;
    int j;
    for(j=start ; j<end ; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            sort(&arr[i],&arr[j]);
        }
    }
    i++;
    sort(&arr[i],&arr[j]);
    return i;
}
int quick(int arr[] , int start , int end)
{
    if(start<end)
    {
        int pivotindex=partition(arr,start,end);
        quick(arr,start,pivotindex-1);
        quick(arr,pivotindex+1,end);
    }
}
int print_array(int arr[] , int size)
{
    int i=0;
    while(i<size)
    {
        printf("%d ",arr[i]);
        i++;
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

    printf("Orignal Array:\n");
    print_array(arr,size);

    quick(arr,0,size-1);

    printf("\nSorted Array:\n");
    print_array(arr,size);

}