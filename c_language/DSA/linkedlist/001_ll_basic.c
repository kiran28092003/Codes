#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;

};

void createlinkedlist(struct node**);
struct node* createnode();
void displaylinkedlist(struct node*);

void main()
{  
     int choice;
    struct node* first_node=NULL;
    do
    {
        puts("1. create linked list");
        puts("2. display linked list");
        puts("0. exit");

        puts("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:createlinkedlist(&first_node);
                break;
            case 2:displaylinkedlist(first_node);
                break;
         }
    }while(choice!=0);

}

void createlinkedlist(struct node** head)
{
    struct node* new_node=NULL;
    struct node* tempnode=*head;
    new_node=createnode();


    if(*head==NULL)
    {
        *head=new_node;
    }
    else
    {
        while(tempnode->next!=NULL)
        {
            tempnode=tempnode->next;
        }

        tempnode->next=new_node;
    }
}

struct node* createnode()
{   int value;
    struct node* newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode==NULL)
    {
        puts("Error in Memory Alloction");
        exit(EXIT_FAILURE);
    }
    else
    {
        puts("Enter data\n");
        scanf("%d",&value);

        newnode->data=value;
        newnode->next=NULL;
    }
        return newnode;
    
}


void displaylinkedlist(struct node* head)
{
    if(head==NULL)
    {
    printf("List is Empty");
    }
    else
    {

    while(head!=NULL)
    {
        printf("%d\n", head->data);
        head=head->next;
    }
    }
    printf("\n\n");
}