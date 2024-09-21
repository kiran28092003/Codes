#include<stdio.h>
#include<stdlib.h>

struct element 
{
    int value;
    int priority;
};

struct node
{
    struct element* data;
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
        puts("2. Dequeue");
        puts("3. Display");
        puts("4. Peek");
        puts("0. Exit");

        puts("Enter your choice :");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : enqueue(&front);
            break;

            case 3 : display(front);
            break;
        }

    } while(choice != 0);

    return 0;
}

void enqueue(struct node** head)
{
    int data, priority;
    struct node* run = NULL;
    struct node* new_node = NULL;
    new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        fprintf(stderr, "Error in memory allocation");
        exit(EXIT_FAILURE);
    }

    new_node->data = (struct element*)malloc(sizeof(struct element));

    if(new_node->data == NULL)
    {
        fprintf(stderr, "Error in memory allocation");
        exit(EXIT_FAILURE);   
    }

    puts("Enter data");
    scanf("%d", &data);
    new_node->data->value = data;

    puts("Enter priority");
    scanf("%d", &priority);
    new_node->data->priority = priority;

    new_node->next = NULL;

    if(*head == NULL)
    {
        *head = new_node;
        return;
    }

    if((*head)->data->priority > new_node->data->priority)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        run = *head;
        while((run->next->data->priority <= new_node->data->priority) && (run != NULL))
        {   
            run = run->next;   
        }
        new_node->next = run->next;
        run->next = new_node;
    }
}

void display(struct node* head)
{
    if(head == NULL)
    {
        fprintf(stderr, "Queue empty");
        return;
    }
    printf("[Start] -> ");
    while(head != NULL)
    {
        printf("[D:%d|P:%d] -> ", head->data->value, head->data->priority);
        head = head->next;
    }
    puts("[End]");
}