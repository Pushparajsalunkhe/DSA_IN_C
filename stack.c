#include<stdio.h>
int stack[5];
int top=-1;
void push(int value)
{
    if(top==5-1)
    {
        printf("stack Overflow! Cannot Push%d\n",value);
    }
    else{
        top++;
        stack[top]=value;
        printf("%d Pushed To Stack.\n",value);
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("Stack UnderFlow! Cannot Pop\n");
    }
    else{
        item=stack[top];
        top--;
        printf("\n%d Poped From Stack\n",item);
    }
}

void dispaly()
{
    if(top==-1)
    {
        printf("Stack Is Empty");
    }
    else{
        printf("stack Element:");
        int i;
        for(i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}


int main()
{
     push(4);
     push(20);
     push(30);
     dispaly();
     pop();
     dispaly();
     pop();
     dispaly();

     return 0;
}