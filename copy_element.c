//Copy one array into another.   
#include<stdio.h>
int copy_arr(int arr[] , int arr1[] , int size)
{
    int i=0;
    while(i<size)
    {
       arr1[i]=arr[i];
        i++;
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
    printf("Enter The Array size:");
    scanf("%d",&size);

    int arr[size], arr1[size],i=0;
    printf("Enter The Array Element:");
    while(i<size)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    printf("Orignal Array:\n");
    print_array(arr,size);

    copy_arr(arr , arr1, size);
    
    printf("\nCopy Array:\n");
    print_array(arr1,size);
}