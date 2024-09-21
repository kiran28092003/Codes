#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int *array;
    int capacity;
    int front;
    int rear;
};

void enqueue(struct Queue* queue, int);
struct Queue* create_queue(void);
int is_full(struct Queue*);
void dequeue(struct Queue* queue);
int is_empty(struct Queue*);
void display(struct Queue*);
void get_front(struct Queue*);
void get_end(struct Queue*);


int main(void) 
{
    int choice, data;
    struct Queue* queue = NULL;
    queue = create_queue();

    do
    {
        puts("1. Enqueue");
        puts("2. Dequeue");
        puts("3. Display");
        puts("4. Get front");
        puts("5. Get end");
        puts("0. exit");

        puts("Enter your choice");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                puts("Enter data");
                scanf("%d", &data);
                enqueue(queue, data);
                break;

            case 2: 
                dequeue(queue);
                break; 
            
            case 3:
                display(queue);
                break;
            case 4: 
                get_front(queue);
                break;
            case 5: 
                get_end(queue);
                break;    
        }

    } while(choice != 0);

    return 0;
}


struct Queue* create_queue(void)
{
    struct Queue* queue = NULL;
    queue = (struct Queue*)malloc(sizeof(struct Queue));

    if(queue == NULL)
    {
        fprintf(stderr, "Error in memory allocation\n");
        exit(EXIT_FAILURE);
    }

    puts("Enter capacity :");
    scanf("%d", &(queue->capacity)); 

    queue->array = (int*)malloc((queue->capacity) * sizeof(int));

    if(queue->array == NULL)
    {
        fprintf(stderr, "Error in memory allocation\n");
        exit(EXIT_FAILURE);
    }

    queue->front = -1;
    queue->rear = -1;

    return queue;
}


void enqueue(struct Queue* queue, int data)
{
    if(is_full(queue))
    {
        fprintf(stderr, "Queue full\n");
        return;
    }
    (queue->rear)++;
    queue->array[queue->rear] = data;
}

int is_full(struct Queue* queue)
{
    return queue->rear == (queue->capacity)-1;
}

void dequeue(struct Queue* queue)
{
    if(is_empty(queue))
    {
        fprintf(stderr, "Queue empty\n");
        queue->front = queue->rear = -1;
        return;
    }

    (queue->front)++;
    printf("Dequeue element is = [%d]\n", queue->array[queue->front]);

}

int is_empty(struct Queue* queue)
{
    return queue->front == queue->rear;
}


void display(struct Queue* queue)
{
    int i;

    if(is_empty(queue))
    {
        fprintf(stderr, "Queue empty\n");
        return;
    }

    printf("[start]->");
    for(i = (queue->front)+1 ; i <= queue->rear ; i++)
    {
        printf("[%d]->", queue->array[i]);
    }
    puts("[End]->");
}


void get_front(struct Queue* queue)
{
    if(is_empty(queue))
    {
        fprintf(stderr, "Queue empty\n");
        return;
    }
    printf("Front element is = %d\n", queue->array[queue->front+1]);
}


void get_end(struct Queue* queue)
{
    if(is_empty(queue))
    {
        fprintf(stderr, "Queue empty\n");
        return;
    }
    printf("Rear element is = [%d]\n", queue->array[queue->rear]);
}