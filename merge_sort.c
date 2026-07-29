#include<stdio.h>
int merge(int arr[] , int start , int mid , int end)
{
    int i,j,k;
    int sizeL=mid- start+1 ;
    int sizeR=end-mid ;
    int L[sizeL],R[sizeR];
    //copy data in temporary array
    for(i=0;i<sizeL;i++){

        L[i]=arr[start+i];
     }

    for(j=0;j<sizeR;j++){
    
        R[j]=arr[mid+1+j];
    }

    i=0;
    j=0;
    k=start;

    while(i<sizeL && j<sizeR)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<sizeL)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<sizeR)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
int m_sort(int arr[] , int start , int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;

        m_sort(arr,start,mid);
        m_sort(arr,mid+1,end);

        merge(arr,start,mid,end);
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

    // int arr[]={5,3,1,4,2};
    // int size=sizeof(arr)/sizeof(arr[0]);

    printf("Orignal Array:\n");
    print_array(arr,size);

    m_sort(arr,0,size-1);

    printf("\nSorted Array:\n");
    print_array(arr,size);
    
    return 0;
}