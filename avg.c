#include<stdio.h>
int main()
{
	int count;
	printf("Enter the Num of Subject:");
	scanf("%d",&count);
	
	int sub[count],i,sum=0;
	float avg=0;
	printf("Enter The Marks:");
	for(i=0;i<count;i++)
	{
		scanf("%d",&sub[i]);
		sum=sum+sub[i];
	}
	
//	for (i=0;i<count;i++)
//	{
//		sum=sum+sub[i];
//	}
	printf("Sum is:%d",sum);
	avg=sum/count;
	printf("\nAvg is:%f",avg);
}
