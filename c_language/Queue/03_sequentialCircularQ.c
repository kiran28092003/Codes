#include<stdio.h>
#include<stdlib.h>

struct C_Queue
{
    int* arr;
    int capacity;
    int size;
    int front;
    int rear;
};

struct C_Queue* create_queue(void);
void enqueue(struct C_Queue*);
int is_full(struct C_Queue*);
void dequeue(struct C_Queue*);
int is_empty(struct C_Queue*);
void display(struct C_Queue*);
  
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
        fprintf(stderr, "Error in memory allocation\n");
        exit(EXIT_FAILURE);
    }

    puts("Enter capacity :");
    scanf("%d", &(c_queue->capacity));

    c_queue->arr = (int*)malloc((c_queue->capacity) * sizeof(int));

    if((c_queue->arr) == NULL)
    {
        fprintf(stderr, "Error in memory allocation\n");
        exit(EXIT_FAILURE);
    }

    c_queue->size = 0;
    c_queue->front = -1;
    c_queue->rear = -1;

    return (c_queue);
}

void enqueue(struct C_Queue* c_queue)
{
    int value;

    if(is_full(c_queue))
    {
        fprintf(stderr, "Queue is full\n");
        return;
    }

    puts("Enter data :");
    scanf("%d", &value);

    c_queue->rear = (c_queue->rear + 1) % (c_queue->capacity);

    c_queue->arr[c_queue->rear] = value;

    (c_queue->size)++;
}

int is_full(struct C_Queue* c_queue)
{
    return (c_queue->size == c_queue->capacity);
}

void dequeue(struct C_Queue* c_queue)
{
    if(is_empty(c_queue))
    {
        fprintf(stderr, "Queue is empty\n");
        return;
    }

    c_queue->front = (c_queue->front + 1) % c_queue->capacity;
    printf("Dequeue element : %d\n", c_queue->arr[c_queue->front]);
    (c_queue->size)--;
}

void display(struct C_Queue* c_queue)
{
    int iterator, index;

    if(is_empty(c_queue))
    {
        fprintf(stderr, "Queue is empty\n");
        return;
    }

    index = (c_queue->front) + 1;

    printf("[Start] -> ");
    for(iterator = 1 ; iterator <= c_queue->size ; iterator++)
    {
        printf("[%d] -> ", c_queue->arr[index]);
        index = (index + 1) % c_queue->capacity;
    }
    puts("[End]");
}

int is_empty(struct C_Queue* c_queue)
{
    return (c_queue->size == 0);
}