#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* push(struct node*);
struct node* create_node();
struct node* pop(struct node*);
void peak(struct node*);
void display(struct node*);

int main(void)
{
    int choice;
    struct node* top = NULL;

    do
    {
        puts("1. Push...");
        puts("2. Pop...");
        puts("3. Peak...");
        puts("4. Display...");
        puts("0. Exit...");

        puts("Enter Your Choice :");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : top = push(top);
                break;
            case 2 : top = pop(top);
                break;
            case 3 : peak(top);
                break;
            case 4: display(top);
                break;
        }

    } while(choice != 0);

    return 0;
}

struct node* create_node()
{
    struct node* new_node = NULL;

    new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        fprintf(stderr, "Stack Underflow...");
        exit(EXIT_FAILURE);
    }

    printf("Enter A Data\n");
    scanf("%d", &(new_node -> data));

    new_node -> next = NULL;

    return new_node;
}

struct node* push(struct node* top)
{
    struct node* new_node = NULL;

    new_node = create_node();

    if(top == NULL)
    {
        top = new_node;
    }
    else
    {
        new_node -> next = top;
        top = new_node;
    }

    return top;
}

struct node* pop(struct node* top)
{
    struct node* temp_node = top;

    if(top == NULL)
    {
        puts("Stack Is Underflow...");
        return NULL;
    }

    printf("\nPopped : %d\n\n", top -> data);

    top = top -> next;
    free(temp_node);
    temp_node = NULL;

    return top;
}

void peak(struct node* top)
{
    if(top == NULL)
    {
        puts("Stack Underflow...");
        return;
    }

    printf("\nPeak : %d\n\n", top -> data);
}

void display(struct node* top)
{
    if(top == NULL)
    {
        puts("Stack Underflow...");
        return;
    }

    printf("\n");

    while(top != NULL)
    {
        printf("%d => ", top -> data);
        top = top -> next;
    }

    printf("\n\n");
}