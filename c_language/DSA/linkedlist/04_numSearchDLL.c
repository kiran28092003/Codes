#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

void create_linked_list(struct node**, struct node**);
struct node* create_node();
void display_linked_list(struct node*, const char*);
int recursive_linear_search(struct node*, struct node*, int , int, int);

void main(void)
{
    int i, length, num_search, position;
    struct node* first = NULL;
    struct node* last = NULL;

    puts("Enter Length Of Linked List...");
    scanf("%d", &length);

    srand(time(0));

    for(i = 1 ; i <= length ; i++)
    {
        create_linked_list(&first, &last);
    }

    display_linked_list(first, "Linked List Is...");

    puts("Enter Element To Be Searched :");
    scanf("%d", &num_search);

    position = recursive_linear_search(first, last, num_search, 1, length);

    if(position == -1)
    {
        printf("%d Doesn't Exists Inside Linked List...\n", num_search);
    }
    else
    {
        printf("%d Found At %dth Node\n", num_search, position);
    }

    exit(EXIT_SUCCESS);
}

void create_linked_list(struct node** head, struct node** tail)
{
    struct node* new_node = NULL;
    new_node = create_node();

    if(*head == NULL && *tail == NULL)
    {
        *head = *tail = new_node;
    }
    else
    {
        (*tail) -> next = new_node;
        new_node -> prev = *tail;
        *tail = new_node;
    }
}

struct node* create_node()
{
    struct node* new_node = NULL;
    new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        puts("Error In Memory Allocation...");
        exit(EXIT_FAILURE);
    }

    new_node -> prev = NULL;
    new_node -> data = rand();
    new_node -> next = NULL;

    return new_node;
}

void display_linked_list(struct node* head, const char* msg)
{
    if(head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }

    if(msg != NULL)
        puts(msg);

    printf("\n");

    while(head != NULL)
    {
        printf("%d => ", head -> data);
        head = head -> next;
    }
    printf("\n\n");
}

int recursive_linear_search(struct node* head, struct node* tail, int num_search, int position1, int position2)
{
    int idx;
    
    do
    {
        if(head -> data == num_search)
            return position1; 

        if(tail-> data == num_search)
            return position2;

        return recursive_linear_search((head -> next), (tail -> prev), num_search, (position1+1), (position2-1));

    } while(head -> prev != tail -> next);

    return -1;
}