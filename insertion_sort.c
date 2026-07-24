#include<stdio.h>
int insertionsort(int arr[] , int size)
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=arr[i];

        for(j=i-1 ; j>=0 && arr[j]>key ; j--) //(0 ; 0>0 && 7>6 ; -1)
        {
             arr[j+1]=arr[j];  // arr[1]=arr[0] arr[1]=7
        }
        // j-- = 0-1=-1
        arr[j+1]=key; // -1+1=0  arr[0]=6
    }
    
}
print_array(int arr[] , int size)
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
    printf("Enter The  Array Size:");
    scanf("%d",&size);

    int arr[size],i=0;
    printf("Enter The Array Element:");
    while(i<size)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    printf("Unsorted Array\n");
    print_array(arr,size);

    insertionsort(arr,size);

    printf("\nSorted Array\n");
    print_array(arr,size);
}