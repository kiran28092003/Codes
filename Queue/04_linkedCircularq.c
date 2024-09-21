#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct C_Queue
{
    struct node* front;
    struct node* rear;
};

struct C_Queue* create_queue(void);
void enqueue(struct C_Queue*);
struct node* create_node(void);
void display(struct C_Queue*);
void dequeue(struct C_Queue*);
void get_start(struct C_Queue*);
void get_end(struct C_Queue*);

int main(void)
{
    int choice;
    struct C_Queue* c_queue = NULL;
    c_queue = create_queue();

    do
    {
        puts("1. Enqueue");
        puts("2. Dequeue");
        puts("3. Display");
        puts("4. Get Start");
        puts("5. Get End");
        puts("0. Exit");

        puts("Enter your choice :");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : enqueue(c_queue);
            break;

            case 2 : dequeue(c_queue);
            break;

            case 3 : display(c_queue);
            break;

            case 4 : get_start(c_queue);
            break;

            case 5 : get_end(c_queue);
            break;
        }
    } while(choice != 0);

    return 0;
}

struct C_Queue* create_queue(void)
{
    struct C_Queue* c_queue = NULL;
    c_queue = (struct C_Queue*)malloc(sizeof(struct C_Queue));

    if(c_queue == NULL)
    {
        fprintf(stderr, "Error in memory allocation");
        exit(EXIT_FAILURE);
    }

    c_queue->front = NULL;
    c_queue->rear = NULL;

    return (c_queue);
}

void enqueue(struct C_Queue* c_queue)
{
    struct node* new_node = NULL;
    new_node = create_node();

    if(c_queue->front == NULL) 
    {
        c_queue->front = new_node;
    }
    else
    {
        c_queue->rear->next = new_node;
    }
    c_queue->rear = new_node;
    c_queue->rear->next = c_queue->front;
}

struct node* create_node(void)
{
    struct node* new_node = NULL;
    new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        fprintf(stderr, "Error in memory allocation");
        exit(EXIT_FAILURE);
    }

    puts("Enter data :");
    scanf("%d", &(new_node->data));

    new_node->next = NULL;

    return (new_node);
}

void display(struct C_Queue* c_queue)
{
    struct node* run = NULL;

    if(c_queue->front == NULL && c_queue->rear == NULL)
    {
        fprintf(stderr, "Queue is empty\n");
        return;
    }

    run = c_queue->front;

    printf("[Start] -> ");

    do
    {
        printf("[%d] -> ", run->data);
        run = run->next;

    } while(run != c_queue->front);

    puts("[End]");
}

void dequeue(struct C_Queue* c_queue)
{
    struct node* temp = c_queue->front;

    if(c_queue->front == NULL && c_queue->rear == NULL)
    {
        fprintf(stderr, "Queue is empty\n");
        return;
    }
    else if(c_queue->front == c_queue->rear)
    {
        printf("Dequeue element : %d\n", c_queue->front->data);
        free(c_queue->front);
        c_queue->rear = NULL;
        c_queue->front = NULL;
    }
    else
    {
        printf("Dequeue element : %d\n", c_queue->front->data);
        c_queue->front = c_queue->front->next;
        free(temp);
        c_queue->rear->next = c_queue->front;
    }
}

void get_start(struct C_Queue* c_queue)
{
    if(c_queue->front == NULL && c_queue->rear == NULL)
    {
        fprintf(stderr, "Queue is empty\n");
        return;
    }

    printf("Start element : %d\n", c_queue->front->data);
}

void get_end(struct C_Queue* c_queue)
{
    if(c_queue->front == NULL && c_queue->rear == NULL)
    {
        fprintf(stderr, "Queue is empty\n");
        return;
    }

    printf("End element : %d\n", c_queue->rear->data);
}