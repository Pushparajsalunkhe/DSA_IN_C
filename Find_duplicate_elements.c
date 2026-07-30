//Find duplicate elements.

#include<stdio.h>
int find_dupli(int arr[],int size)
{
    int i,j,k;
    for(i=0;i<size;i++)
    { 
        int count=0;
        for(j=i+1;j<size;j++)
        {
    
            if(arr[i]==arr[j])
            {
                count++;
            }
        }

        for (int k = 0; k < i; k++) 
        {
            if (arr[i] == arr[k]) 
            {
                count = 0;
                break;
            }
        }

        if (count > 0) 
        {
            printf("\n%d", arr[i]);
        }
    }

    

}
int print_array(int arr[],int size)
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
    
    find_dupli(arr,size);   
}