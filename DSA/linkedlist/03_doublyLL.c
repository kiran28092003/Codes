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
void insert_at_last(struct node**, struct node**);
void delete_at_first(struct node**, struct node**);
void delete_at_last(struct node**, struct node**);
void delete_at_position(struct node**, struct node**);
void insert_at_position(struct node**, struct node**);

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
        puts("5. Insert At Last...");
        puts("6. Insert At Position...");
        puts("7. Delete At First...");
        puts("8. Delete At Last...");
        puts("9. Delete At Position...");
        puts("10. Count Number Of Nodes...");
        puts("0. Exit");

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
            case 5: insert_at_last(&first, &last);
                break;
            case 6: insert_at_position(&first, &last);
                break;
            case 7: delete_at_first(&first, &last);
                break;
            case 8: delete_at_last(&first, &last);
                break;
            case 9: delete_at_position(&first, &last);
                break;
            case 10: printf("Total Numbers Of Nodes : %d\n", count_node(first));
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
    if(head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }
    
    printf("\n");

    while(head != NULL)
    {
        printf("%d => ", head -> data);
        head = head -> next;
    }
    printf("\n\n");
}

void display_backward_linked_list(struct node* tail)
{
    if(tail == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }
    
    printf("\n");

    while(tail != NULL)
    {
        printf("%d => ", tail -> data);
        tail = tail -> prev;
    }
    printf("\n\n");
}

void insert_at_first(struct node** head, struct node** tail)
{
    struct node* new_node = NULL;
    new_node = create_node();

    if(*head == NULL && *tail == NULL)
    {
        *head = *tail = new_node;
    }
    else
    {
        new_node -> next = *head;
        (*head) -> prev = new_node;
        *head = new_node;
    }
}

void insert_at_last(struct node** head, struct node** tail)
{
    create_linked_list(head, tail);
}

void insert_at_position(struct node** head, struct node** tail)
{
    int pos, n, i; //pos(position), n(total_nodes), i(iterator)

    n = count_node(*head);

    struct node* new_node = NULL;
    struct node* trav_head = *head;
    struct node* trav_tail = *tail;


    puts("Enter Position At New Node To Be Inserted :");
    scanf("%d", &pos);
    
    new_node = create_node();

    if(pos == 1)
    {
        insert_at_first(head, tail);
    }
    else if(pos == (n+1))
    {
        insert_at_last(head, tail);
    }
    else if(pos < 1 || pos > (n+1))
    {
        puts("Invalid Position...");
        insert_at_position(head, tail);
    }
    else
    {
        if(pos <= n/2)
        {
            for(i = 1 ; i < (pos-1) ; i++)
            {
                trav_head = trav_head -> next;
            }
            new_node -> next = trav_head -> next;
            new_node -> prev = trav_head -> next -> prev;
            trav_head -> next -> prev = new_node;
            trav_head -> next = new_node;
        }
        else if(pos > n/2)
        {
            for(i = n ; i > pos ; i--)
            {
                trav_tail = trav_tail -> prev;
            }
            new_node -> next = trav_tail;
            new_node -> prev = trav_tail -> prev;
            trav_tail -> prev -> next = new_node;
            trav_tail -> prev = new_node;
        }
    }
}

void delete_at_first(struct node** head, struct node** tail)
{
    struct node* temp_node = *head;

    if(*head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }

    if((*head) -> next == NULL && (*tail) -> prev == NULL)
    {
        free(*head);
        free(*tail);
        *head = *tail = NULL;
    }
    else
    {
        (*head) = (*head) -> next;
        (*head) -> prev = NULL;
        free(temp_node);
        temp_node = NULL;
    }
}

void delete_at_last(struct node** head, struct node** tail)
{
    struct node* temp_node = *tail;
 
    if(*head == NULL && *tail == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }

    if((*head) -> next == NULL && (*tail) -> prev == NULL)
    {
        free(*head);
        free(*tail);
        *head = *tail = NULL;
    }
    else
    {
        (*tail) = (*tail) -> prev;
        (*tail) -> next = NULL;
        free(temp_node);
    }
}

void delete_at_position(struct node** head, struct node** tail)
{
    int pos, n, i;  //pos(position), n(total_nodes), i(iterator)
    struct node* trav_head = *head;
    struct node* trav_tail = *tail;

    if(*head == NULL && *tail == NULL)
    {
        puts("Linked List Is Emtpy...");
        return;
    }

    puts("Enter Position To Be Deleted :");
    scanf("%d", &pos);

    if(pos == 1)
    {
        delete_at_first(head, tail);
    }
    else if(pos == n)
    {
        delete_at_last(head, tail);
    }
    else if(pos < 1 || pos > n)
    {
        puts("Invalid Position...");
        delete_at_position(head, tail);
    }
    else
    {
        n = count_node(*head);

        if(pos != 1 && pos <= n/2)
        {
            for(i = 1 ; i < pos ; i++)
            {
                trav_head = trav_head -> next;
            }
            
            trav_head -> prev -> next = trav_head -> next;
            trav_head -> next -> prev = trav_head -> prev;


            free(trav_head);
            trav_head = NULL;
        }

        if(pos != n && pos > n/2)
        {
            for(i = n ; i > pos ; i--)
            {
                trav_tail = trav_tail -> prev;
            }

            trav_tail -> prev -> next = trav_tail -> next;
            trav_tail -> next -> prev = trav_tail -> prev;

            free(trav_tail);
            trav_tail = NULL;
        }
    }
}

int count_node(struct node* head)
{
    int count;

    if(head == NULL)
        return 0;

    while(head != NULL)
    {
        count++;
        head = head -> next;
    }
    return count;
}