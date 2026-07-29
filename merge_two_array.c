//Merge two arrays.                                                                 
#include<stdio.h>
int merge(int arr1[] ,  int arr2[] , int size1 , int size2)
{
    int tsize=size1+size2;
    int newarr[tsize];
    int i=0,j=0,k=0;
    while(i<size1)
    {
        newarr[k]=arr1[i];
        i++;
        k++;
    }
    
    k=size1;
    while(j<tsize)
    {
        newarr[k]=arr2[j];
        j++;
        k++;
    }
    

    int t=0;
    while(t<tsize)
    {
        printf("%d ",newarr[t]);
        t++;
    }
}
int main()
{
    int size1;
    printf("Enter The Array Size:");
    scanf("%d",&size1);

    int arr1[size1],i=0;
    printf("Enter The Array Element:");
    while(i<size1)
    {
        scanf("%d",&arr1[i]);
        i++;
    }
    int size2;
    printf("Enter The array Size:");
    scanf("%d",&size2);

    int arr2[size2],j=0;
    printf("Enter The Array Element:");

    while(j<size2)
    {
        scanf("%d",&arr2[j]);
        j++;
    }

    merge(arr1,arr2,size1,size2);

}