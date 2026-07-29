//Remove duplicate elements.
#include<stdio.h>
int rem_duplicate_ele(int arr[] , int size)
{
    int i,j,k;
    for(i=0;i<size;i++)
    {   
        
        for(j=i+1;j<size;j++)
        {
              if(arr[i]==arr[j])
              {
                // element shift to left
                for(k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1];
                }

                size--;
                j--; // check current index again
              }
        }
    }
    
    
}

int print_array(int arr[] , int size)
{
    int k=0;
    while(k<size)
    {
        printf("%d ",arr[k]);
        k++;
    }
}

int main()
{
    int size;
    printf("Enter The Array Size:");
    scanf("%d",&size);

    int arr[size],i=0;
    printf("Enter The Array Size:");
    while(i<size)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    
   printf("Orignal Array:\n");
   print_array(arr,size);

   int n= rem_duplicate_ele(arr,size);

   printf("\nRemove Duplicate:\n");
   print_array(arr,n);
}