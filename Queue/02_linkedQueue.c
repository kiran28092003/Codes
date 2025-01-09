#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct Queue
{
    struct node* front;
    struct node* rear;
};

struct node* create_node(void);
struct Queue* create_queue(void);
void enqueue(struct Queue*);
void dequeue(struct Queue*);
void display(struct Queue*);

int main(void)
{
    int choice;
    struct Queue* queue = NULL;

    queue = create_queue();

    do
    {   
        puts("1. Enqueue");
        puts("2. Dequeue");
        puts("3. Display");
        puts("0. Exit");

        puts("Enter your choice :");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: enqueue(queue);
            break;
            
            case 2: dequeue(queue);
            break;

            case 3: display(queue);
            break;
        }

    } while(choice != 0);

    return 0;
}


struct node* create_node(void)
{
    int value;
    struct node* new_node = NULL;

    new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        fprintf(stderr, "Error in memory allocation\n");
        exit(EXIT_FAILURE);
    }

    puts("Enter data :");
    scanf("%d", &value);

    new_node->data = value;
    new_node->next = NULL;

    return (new_node);
}

struct Queue* create_queue(void)
{
    struct Queue* queue = NULL;

    queue = (struct Queue*)malloc(sizeof(struct Queue));

    queue->front = NULL;    
    queue->rear = NULL;    

    return (queue);
}

void enqueue(struct Queue* queue)
{
    struct node* new_node = NULL;

    new_node = create_node();

    if(queue->front == NULL && queue->rear == NULL)
    {
        queue->front = queue->rear = new_node;
        return;
    }
    queue->rear->next = new_node;
    queue->rear = new_node;
}

void dequeue(struct Queue* queue)
{
    struct node* temp = NULL;

    if(queue->front == NULL && queue->rear == NULL)
    {
        fprintf(stderr, "Queue empty\n");
        return;
    }

    temp = queue->front;
    queue->front = queue->front->next;

    printf("Dequeue element : %d\n", temp->data);

    free(temp);

    if(queue->front == NULL)
    {
        queue->rear = NULL;
    }
}


void display(struct Queue* queue)
{
    struct node* run = NULL;

    if(queue->front == NULL && queue->rear == NULL)
    {
        fprintf(stderr, "Queue empty\n");
        return;
    }

    run = queue->front;

    printf("[Start]->");
    while(run != NULL)
    {
        printf("[%d]->", run->data);
        run = run->next;
    }
    puts("[End]->");
}