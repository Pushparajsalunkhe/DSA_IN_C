#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};

struct node *head;

void Beginsert()
{
    struct node *ptr;
    int ele;
    ptr=(struct node *)malloc(sizeof(struct node *));

    if(ptr==NULL)
    {
        printf("\nOverFlow");
    }

    else{
        printf("\n Enter The Value:");
        scanf("%d",&ele);
        ptr ->data = ele;
        ptr ->next=head;
        head=ptr;
        printf("Element Inserted");
    }
}
void lastinsert()
{
    struct node *ptr , *temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("\nOverFlow");
    }
    else{
        printf("\nEnter The value:");
        scanf("%d",&item);
        ptr->data=item;

        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("Item Inserted");
        }
        else{
            temp=head;
            while(temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("Item Inserted");
        }

    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("Nothing To Print\n");
    }
   
    else{
           while(ptr!=NULL)
           {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
           }
        
    }
}

int main()
{
    int choice;
    while(choice != 5)
    {
        printf("\n...Choose One Option from the following list...\n");
        printf("\n1.Insert At Begining\n2.Show\n3.Insert At Last\n4.Exit\n");
        printf("\nEnter Your Choice:");
        scanf("\n%d",&choice);

        switch(choice)
        {
            case 1:
                Beginsert();
                break;

            case 2:
                display();
                break;
            case 3:
                lastinsert();
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Invalid Choice..");
        }
    }
    return 0;
}

