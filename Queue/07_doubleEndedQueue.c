#include<stdio.h>
#include<stdlib.h>

struct Deque
{
    int* i_array;
    int front; 
    int rear;
    int capacity;
};

struct Deque* create_deque(void);
void insert_rear(struct Deque*);
int is_full(struct Deque*);
void insert_front(struct Deque*);
void delete_front(struct Deque*);
int is_empty(struct Deque*);
void delete_rear(struct Deque*);
void display_deque(struct Deque*);

int main(void)
{
    int choice;
    struct Deque* deque = NULL;
    deque = create_deque();

    do
    {
        puts("1. Insert front");
        puts("2. Delete front");
        puts("3. Insert rear");
        puts("4. Delete rear");
        puts("5. Display front");

        puts("Enter your choice :");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : insert_front(deque);
            break;

            case 2 : delete_front(deque);
            break;

            case 3 : insert_rear(deque);
            break;

            case 4 : delete_rear(deque);
            break;

            case 5 : display_deque(deque);
            break;
        }
    } while(choice != 0);

    return 0;
}

struct Deque* create_deque(void)
{
    struct Deque* deque = NULL;
    deque = (struct Deque*)malloc(sizeof(struct Deque));
    if(deque == NULL)
    {
        fprintf(stderr, "Error in memory allocation");
        exit(EXIT_FAILURE);
    }

    puts("Enter capacity :");
    scanf("%d", &(deque->capacity));

    deque->i_array = (int*)malloc((deque->capacity) * sizeof(int));

    if(deque->i_array == NULL)
    {
        fprintf(stderr, "Error in memory allocation");
        exit(EXIT_FAILURE);
    }

    deque->rear = -1;
    deque->front = -1;

    return (deque);
}

void insert_rear(struct Deque* deque)
{
    int value;

    if(is_full(deque))
    {
        fprintf(stderr, "Deque is full");
        return;
    }

    puts("Enter value :");
    scanf("%d", &value);

    if(deque->front == -1 && deque->rear == -1)
    {
        deque->front = deque->rear = 0;
    }
    else
    {
        deque->rear = (deque->rear + 1) % deque->capacity;
    }

    deque->i_array[deque->rear] = value;
}

int is_full(struct Deque* deque)
{
    return (deque->front == (deque->rear + 1) % deque->capacity);
}

void insert_front(struct Deque* deque)
{
    int value;
    if(is_full(deque))
    {
        fprintf(stderr, "Deque is full\n");
        return;
    }

    puts("Enter value :");
    scanf("%d", &value);

    if(deque->front == -1 && deque->rear == -1)
    {
        deque->front = deque->rear = 0;
    }
    else
    {
        deque->front = (deque->front -1 + (deque->capacity)) % deque->capacity;
    }
    
    deque->i_array[deque->front] = value;

}

void delete_front(struct Deque* deque)
{
    if(is_empty(deque))
    {
        fprintf(stderr, "Deque is empty\n");
        return;
    }

    printf("Delete element : %d\n", deque->i_array[deque->front]);

    if(deque->front == deque->rear)
    {
        deque->front = deque->rear = -1;
    }
    else
    {
        deque->front = (deque->front + 1) % deque->capacity;
    }
}

int is_empty(struct Deque* deque)
{
    return (deque->front == -1 && deque->rear == -1);
}

void delete_rear(struct Deque* deque)
{
    if(is_empty(deque))
    {
        fprintf(stderr, "Deque is empty\n");
        return;
    }

    printf("Deleted element : %d\n", deque->i_array[deque->rear]);

    if(deque->front == deque->rear)
    {
        deque->front = deque->rear = -1;
    }
    else
    {
        deque->rear = (deque->rear - 1 + (deque->capacity)) % deque->capacity;
    }
}

void display_deque(struct Deque* deque)
{
    int i;

    if(is_empty(deque))
    {
        fprintf(stderr, "No element to display, deque is empty\n");
        return;
    }

    if(deque->front == deque->rear)
    {
        printf("[Front] -> [%d] -> [Rear]\n",deque->i_array[deque->rear]);
    }
    else{

        i = deque->front;

        printf("[Front] -> ");
        do
        {
            printf("[%d] -> ", deque->i_array[i]);
            i =(i + 1) % (deque->capacity);
            
        } while(i != deque->rear);

        printf("[%d] -> ", deque->i_array[deque->rear]);
        puts("[Rear]");
    }
}