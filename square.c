// Constant Space Complexity
#include<stdio.h>
void square(int a)
{
	printf("Square Is:%d",a*a);
	printf("\nSize Of Int:%d",sizeof(int));
	printf("\nSize Of Variable:%d",sizeof(a));
}

int main()
{
	int num=5;
	square(num);
}
