#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void create_linked_list(struct node**);
struct node* create_node();
void display_linked_list(struct node*);
void insert_at_first(struct node**);
void insert_at_last(struct node**);
int count_node(struct node*);
void insert_at_position(struct node**);
void delete_at_first(struct node**);
void delete_at_last(struct node**);
void delete_at_first(struct node**);
void delete_at_position(struct node**, int);

void main(void)
{
    int choice;
    struct node* first = NULL;

    do
    {
        puts("1. Create Linked List...");
        puts("2. Display Linked List...");
        puts("3. Insert At First...");
        puts("4. Insert At Last...");
        puts("5. Insert At Position...");
        puts("6. Delete At First...");
        puts("7. Delete At Last...");
        puts("8. Delete At Position...");
        puts("0. Exit...");

        puts("Enter Your Choice :");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: create_linked_list(&first);
                break;
            case 2: display_linked_list(first);
                break;
            case 3: insert_at_first(&first);
                break;
            case 4: insert_at_last(&first);
                break;
            case 5: insert_at_position(&first);
                break;
            case 6: delete_at_first(&first);
                break;
            case 7: delete_at_last(&first);
                break;
            case 8: delete_at_position(&first, 0);
                break;
        }
    } while(choice != 0);

    exit(EXIT_SUCCESS);
}

struct node* create_node()
{
    int value;

    struct node* newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        puts("Error In Memory Allocation...");
        exit(EXIT_FAILURE);
    }

    puts("Enter Data :");
    scanf("%d", &value);

    newnode -> data = value;
    newnode -> next = NULL;

    return newnode;
}

void create_linked_list(struct node** head)
{
    struct node* new_node = NULL;
    struct node* trav_node = *head;
    
    new_node = create_node();

    if(*head == NULL)
    {
        *head = new_node;
        (*head) -> next = new_node;
    }
    else
    {
        while(trav_node -> next != *head)
        {
            trav_node = trav_node -> next;
        }

        trav_node -> next = new_node;
        new_node -> next = *head;
    }
}

void display_linked_list(struct node* head)
{
    struct node* trav_node = head;

    if(head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }
    else
    {
        printf("\n");

        do
        {
            printf("%d => ", trav_node -> data);
            trav_node = trav_node -> next;

        } while(trav_node != head);

        printf("\n\n");
    }
}

void insert_at_first(struct node** head)
{
    struct node* new_node = NULL;
    struct node* trav_node = *head;

    new_node = create_node();

    if(*head == NULL)
    {
        *head = new_node;
        (*head) -> next = new_node;
    }
    else
    {
        while(trav_node -> next != *head)
        {
            trav_node = trav_node -> next;
        }
        new_node -> next = *head;
        trav_node -> next = new_node;
        *head = new_node;
    }
}

void insert_at_last(struct node** head)
{
    create_linked_list(head);
}

int count_node(struct node* head)
{
    int count = 0;
    struct node* trav_node = head;

    if(head == NULL)
        return 0;

    do
    {
        count++;
        trav_node = trav_node -> next;

    } while(trav_node != head);

    return count;
    
}

void insert_at_position(struct node** head)
{
    int position, total_nodes, iterator;

    struct node* new_node = NULL;
    struct node* trav_node = *head;

    total_nodes = count_node(*head);

    printf("Enter Position (*Valid Positions( 1-%d )...\n", total_nodes + 1);
    scanf("%d", &position);

    if(position == 1)
    {
        insert_at_first(head);
    }
    else if(position == (total_nodes + 1))
    {
        insert_at_last(head);
    }
    else if(position < 1 || position > (total_nodes + 1))
    {
        puts("Invalid Position...");
        insert_at_position(head);
    }
    else
    {    
        new_node = create_node();

        for(iterator = 1 ; iterator < (position - 1) ; iterator++)
            trav_node = trav_node -> next;

        new_node -> next = trav_node -> next;
        trav_node -> next = new_node;
    }
}

void delete_at_first(struct node** head)
{
    struct node* trav_node = *head;

    if(*head == NULL)
    {
        puts("Linked List Empty...");
        return;
    }
    else if((*head) -> next == *head)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        while(trav_node -> next != *head)
            trav_node = trav_node -> next;

        trav_node -> next = (*head) -> next;
        free(*head);
        *head = trav_node -> next;
    }
}

void delete_at_last(struct node** head)
{
    struct node* trav_node = *head;

    if(*head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }
    else if((*head) -> next == *head)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        while(trav_node -> next -> next != *head)
            trav_node = trav_node -> next;

        free(trav_node -> next);
        trav_node -> next = *head;
    }
}

void delete_at_position(struct node** head, int trial_count)
{

    int position, total_nodes, iterator;
    struct node* trav_node = *head;
    struct node* temp_node = NULL;

    if(trial_count == 3) {
        printf("Entered Invalid Positions Multiple Times.\n");
        exit(EXIT_FAILURE);
    }

    if(*head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }

    total_nodes = count_node(*head);

    printf("Enter Position(Valid Positions (1-%d) ))\n", total_nodes);
    scanf("%d", &position);

    if(position == 1)
    {
        delete_at_first(head);
    }
    else if(position == total_nodes)
    {
        delete_at_last(head);
    }
    else if(position < 1 || position > total_nodes)
    {
        puts("Invalid Position...");
        delete_at_position(head, (trial_count + 1));
    }
    else
    {
        for(iterator = 1 ; iterator < (position - 1) ; iterator++)
            trav_node = trav_node -> next;

        temp_node = trav_node -> next;
        trav_node -> next = temp_node -> next;
        free(temp_node);
        temp_node = NULL;
    }
}