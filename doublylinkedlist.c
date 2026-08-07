#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;

void Beginsert()
{
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;

    printf("Node inserted successfully.\n");
}


void deletebegining()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nUnderFlow");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("\nNode Deleted");
    }
    else{
        ptr=head;
        head=head->next;
        head->prev=NULL;
        free(ptr);
        printf("\nNode Deleted");
    }
}

void display()
{
    struct node *ptr;
    ptr=head;

    if (ptr == NULL)
    {
        printf("Nothing to Print");
        
    }

    printf("Doubly Linked List: ");

    while (ptr != NULL)
    {
        printf("\n%d", ptr->data);
        ptr = ptr->next;
    }

   
}

int main()
{
    int choice;
    while(choice != 6)
    {
        printf("\n...Choose One Option from the following list...\n");
        printf("\n1.Insert At Begining\n2.Show\n3.Insert At Last\n4.Delete At Begining\n5.Exit\n");
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

            // case 3:
            //     lastinsert();
            //     break;

            case 4:
                deletebegining();
                break;

            case 5:
                exit(0);
                break;

            default:
                printf("Invalid Choice..");
        }
    }
    return 0;
}


