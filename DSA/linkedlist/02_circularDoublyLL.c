#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

void create_linked_list(struct node**, struct node**);
struct node* create_node();
void display_forward_linked_list(struct node*);
void display_backward_linked_list(struct node*);
void insert_at_first(struct node**, struct node**);

int count_node(struct node*);

void main(void)
{
    int choice;
    struct node* first = NULL;
    struct node* last = NULL;

    do
    {
        puts("1. Create Linked List...");
        puts("2. Display Forward Linked List...");
        puts("3. Display Backward Linked List...");
        puts("4. Insert At First...");

        puts("Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: create_linked_list(&first, &last);
                break;
            case 2: display_forward_linked_list(first);
                break;
            case 3: display_backward_linked_list(last);
                break;
            case 4: insert_at_first(&first, &last);
                break;
        }
    } while(choice != 0);

    exit(EXIT_SUCCESS);
}

void create_linked_list(struct node** head, struct node** tail)
{
    struct node* new_node = NULL;
    new_node = create_node();

    if(*head == NULL && *tail == NULL)
    {
        *head = *tail = new_node;
        (*head) -> next = *tail;
        (*head) -> prev = *head;
    }
    else
    {
        new_node -> prev = *tail;
        new_node -> next = *head;
        (*tail) -> next = new_node;
        (*head) -> prev = new_node;
        *tail = new_node;
    }
}

struct node* create_node()
{
    int value;

    struct node* new_node = NULL;
    new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        puts("Error In Memory Allocation...");
        exit(EXIT_FAILURE);
    }

    puts("Enter Data : ");
    scanf("%d", &value);

    new_node -> prev = NULL;
    new_node -> data = value;
    new_node -> next = NULL;

    return new_node;
}

void display_forward_linked_list(struct node* head)
{
    struct node* trav_head = head;

    if(head == NULL)
    {
        printf("Linked Is Empty...");
        return;
    }
    printf("\n");

    do
    {
        printf("%d => ", trav_head -> data);
        trav_head = trav_head -> next;
    } while(trav_head != head);

    printf("\n\n");
}

void display_backward_linked_list(struct node* tail)
{
    struct node* trav_tail = tail;


    if(tail == NULL)
    {
        printf("Linked Is Empty...");
        return;
    }

    printf("\n");

    do
    {
        printf("%d => ", trav_tail -> data);
        trav_tail = trav_tail -> prev;
    } while(trav_tail != tail);

    printf("\n\n");
}

void insert_at_first(struct node** head, struct node** tail)
{
    struct node* new_node = NULL;
    new_node = create_node();

    if(*head == NULL && *tail == NULL)
    {
        *head = *tail = new_node;
        (*head) -> next = *tail;
        (*tail) -> prev = *head;
    }
    else
    {
        new_node -> next = *head;
        new_node -> prev = *tail;
        *head = new_node;
        (*tail) -> next = new_node;
    }
}