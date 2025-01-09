#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int* arr;
    int top;
    int capacity;
};

struct Stack* create_stack();
void push(struct Stack*);
int is_overflow(struct Stack*);
void display_stack(struct Stack*);
void pop(struct Stack*);
int is_underflow(struct Stack*);
void peak(struct Stack*);

int main(void)
{
    int choice;
    struct Stack* stack = NULL;

    stack = create_stack();

    do
    {
        puts("1. Push In Stack...");
        puts("2. Pop From Stack..."); // pop (element return kar ani mg delete kar)
        puts("3. Peak Inside Stack...");
        puts("4. Display Stack...");
        puts("0. Exit...");

        puts("Enter Your Choice...");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : push(stack);
                break;
            case 2 : pop(stack);
                break;
            case 3 : peak(stack);
                break;
            case 4: display_stack(stack);
                break;
        }

    } while(choice != 0);

    return 0;
}

struct Stack* create_stack()
{
    int cap; // cap(capacity)

    struct Stack* stack = NULL;

    stack = (struct Stack*)malloc(sizeof(struct Stack));

    if(stack == NULL)
    {
        puts("Error In Memory Allocation...");
        exit(EXIT_FAILURE);
    }

    puts("Enter Capacity :");
    scanf("%d", &cap);  // scanf("%d", &(stack -> capacity)); 

    stack -> capacity = cap; 

    stack -> arr = (int*)malloc((stack -> capacity) * sizeof(int));

    if(stack -> arr == NULL)
    {
        puts("Error In Memory Allocation...");
        exit(EXIT_FAILURE);
    }

    stack -> top = -1;
    
    return stack;
}


void push(struct Stack* stack)
{
    int data;

    puts("Enter A Data :");
    scanf("%d", &data);

    if(is_overflow(stack))  
    {
        puts("Stack Is Overflowed...");
        return;
    }
    
    stack -> arr[++(stack -> top)] = data;
}

int is_overflow(struct Stack* stack)
{
    return stack -> top == stack -> capacity - 1; // either returns 1(TRUE) or 0(FALSE)
}


void display_stack(struct Stack* stack)
{
    int i;
    
    if(is_underflow(stack))
    {
        puts("Stack Is Underflowed...");
        return;
    }

    for(i = 0 ; i <= (stack -> top) ; i++)
    {
        printf("%d => ", stack -> arr[i]);
    }

    printf("\n");
}

void pop(struct Stack* stack)
{
    if(is_underflow(stack))
    {
        puts("Stack Is Underflowed...");
        return;
    }

    printf("Popped Element Is = %d\n", stack -> arr[stack -> top]);
    (stack -> top)--;
}

void peak(struct Stack* stack)
{
    if(is_underflow(stack))
    {
        puts("Stack Is Underflowed...");
        return;
    }

    printf("Peeked Element Is = %d\n", stack -> arr[stack -> top]);
}

int is_underflow(struct Stack* stack)
{
    return stack -> top == -1;
}