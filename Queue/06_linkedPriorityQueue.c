#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    int priority;
    struct node* next;
};

void enqueue(struct node**);
void display(struct node*);

int main(void)
{
    int choice;
    struct node* front = NULL;

    do
    {
        puts("1. Enqueue");
        puts("2. Display");
        puts("0. Exit");

        puts("Enter your choice");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : enqueue(&front);
            break;
            case 2 : display(front);
            break;
            default : puts("Invalid choice");
        }
    } while(choice != 0);

    return 0;
}

void enqueue(struct node** head)
{
    int data, priority;
    struct node* run = NULL;
    struct node* run_before = NULL;;
    struct node* new_node = NULL;
    new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        fprintf(stderr, "Error in memory allocation");
        exit(EXIT_FAILURE);
    }

    puts("Enter data :");
    scanf("%d", &data);
    new_node->data = data;

    puts("Enter priority :");
    scanf("%d", &priority);
    new_node->priority = priority;

    new_node->next = NULL;

    if(*head == NULL)
    {
        *head = new_node;
        return;
    }

    if((*head)->priority > new_node->priority)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        run = *head;

        while((run != NULL) && (run->priority <= new_node->priority))
        {
            run_before = run;
            run = run->next;
        }
        new_node->next = run;
        run_before->next = new_node;
    }
}

void display(struct node* head)
{
    struct node* run = head;

    if(head == NULL)
    {
        fprintf(stderr, "Queue Empty");
        return;
    }

    printf("[Start]-> ");
    while(run != NULL)
    {
        printf("[D:%d|P:%d] -> ", run->data, run->priority);
        run = run->next;
    }
    puts("[End]");
}