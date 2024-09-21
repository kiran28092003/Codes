#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void create_linked_list(struct node**);
struct node* createnode();
void display_linked_list(struct node*);
void insert_at_first(struct node**);
void insert_at_last(struct node**);
void insert_at_position(struct node**);
int count_node(struct node*);
void replace_at_first(struct node**);
void replace_at_position(struct node**);
void delete_at_first(struct node**);
void delete_at_last(struct node**);
void delete_at_last_2pointer(struct node**);
void delete_at_position(struct node**);
void display_reversed_linked_list(struct node*);

void main(void)
{
    int choice;
    struct node* first_node = NULL;

    do
    {
        puts("1. Create Linked List...");
        puts("2. Display Linked List...");
        puts("3. Insert At First...");
        puts("4. Insert At Last...");
        puts("5. Insert At Position...");
        puts("6. Replace At Position...");
        puts("7. Delete At First...");
        puts("8. Delete At Last...");
        puts("9. Delete At Position...");
        puts("10. Delete At Last(2pointer_method)...");
        puts("11. Display Reversed Linked List...");
        puts("0. Exit...");

        puts("Enter Your Choice :");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: create_linked_list(&first_node);
                break;
            case 2: display_linked_list(first_node);
                break;
            case 3: insert_at_first(&first_node);
                break;
            case 4: insert_at_last(&first_node);
                break;
            case 5: insert_at_position(&first_node);
                break;
            case 6: replace_at_position(&first_node);
                break;
            case 7: delete_at_first(&first_node);
                break;
            case 8: delete_at_last(&first_node);
                break;
            case 9: delete_at_position(&first_node);
                break;
            case 10: delete_at_last(&first_node);
                break;
            case 11: display_reversed_linked_list(first_node);
                break;
        }
    } while(choice != 0);
}

struct node* createnode()
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
    struct node* temp_node = *head;
    
    new_node = createnode();

    if(*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        while(temp_node -> next != NULL)
        {
            temp_node = temp_node -> next;
        }
        temp_node -> next = new_node;
    }
}

void display_linked_list(struct node* head)
{
    if(head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }
    else
    {
        while(head!= NULL)
        {
            printf("%d => ", head -> data);
            head = head -> next;
        }
        printf("\n\n");
    }
}

void insert_at_first(struct node** head)
{
    struct node* new_node = NULL;
    new_node = createnode();

    new_node -> next = *head;
    *head = new_node;
}

void insert_at_last(struct node** head)
{
    create_linked_list(head);
}

void insert_at_position(struct node** head)
{
    int pos, n, i; // pos(position), n(no_of_nodes), i(iterator)
    struct node* new_node = NULL;
    struct node* trav_node = *head; // trav_node(traversal_node)

    n = count_node(*head);

    puts("Enter Position Where New Node To Be Inserted :");
    scanf("%d", &pos);

    if(pos == 1)
    {
        insert_at_first(head);
    }
    else if(pos == (n+1))
    {
        insert_at_last(head);
    }
    else if(pos < 1 || pos > (n+1))
    {
        puts("Invalid Position...");
        insert_at_position(head);
    }
    else
    {
        new_node = createnode();

        for(i = 1 ; i < (pos-1) ; i++)
        {
            trav_node = trav_node -> next;
        }
        new_node -> next = trav_node -> next;
        trav_node -> next = new_node;
    }
}

int count_node(struct node* head)
{
    int count = 0;
    while(head != NULL)
    {
        count++;
        head = head -> next;
    }
    return count;
}

void replace_at_first(struct node** head)
{   
    struct node* new_node = NULL;
    struct node* temp_node = *head;
    new_node = createnode();

    new_node -> next = (*head) -> next;
    *head = new_node;

    free(temp_node);
    temp_node = NULL;
}

void replace_at_position(struct node** head)
{
    int pos, n, i; // pos(position), n(no_of_nodes), i(iterator)
    struct node* new_node = NULL;
    struct node* trav_node = *head;
    struct node* temp_node = NULL;


    if(head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }

    n = count_node(*head);

    puts("Enter Position :");
    scanf("%d", &pos);

    if(pos == 1)
    {
        replace_at_first(head);
    }
    else if(pos < 1 || pos > n)
    {
        puts("Invalid Position...");
        replace_at_position(head);
    }
    else
    {
        new_node = createnode();

        for(i = 1 ; i < (pos-1) ; i++)
        {   
            trav_node = trav_node -> next;
        }
        temp_node = trav_node -> next;
        new_node -> next = temp_node -> next;
        trav_node -> next = new_node;
        free(temp_node);
        temp_node = NULL;
    }
}

void delete_at_first(struct node** head)
{
    struct node* temp_node = *head;

    if(*head == NULL)
    {
        puts("Linked List Is Empty...");        // for empty
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);                            // for single_node
        *head = NULL;
    }
    else
    {
        *head = (*head) -> next;
        free(temp_node);                       // for more_than_one_node
        temp_node = NULL;
    }
}

void delete_at_last(struct node** head)
{
    struct node* trav_node = *head;
    struct node* temp_node = NULL;

    if(*head == NULL)
    {
        puts("Linked List Is Empty...");            // for empty
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);                                // for single_node
        *head = NULL;
    }
    else
    {
        while(trav_node -> next -> next != NULL)
        {
            trav_node = trav_node -> next;          // for more_than_one_node
        }
        free(trav_node -> next);
        trav_node -> next = NULL;
    }
}

// delete last via two pointer method(*its doesn't work for single node and even for two nodes)

void delete_at_last_2pointer(struct node** head)
{
    struct node* trav1 = *head;
    struct node* trav2 = *head;
    if(*head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);                                // 1_node
        *head = NULL;
    }
    else if((*head) -> next -> next == NULL)
    {
        free((*head) -> next);                      // 2_nodes
        (*head) -> next = NULL;
    }
    else
    {
        while(trav2 -> next != NULL)
        {
            trav1 = trav1 -> next;                  // more_than_2_nodes
            trav2 = trav1 -> next;
        }

        free(trav2);
        trav2 = NULL;
        trav1 -> next = NULL;
    }
}

void delete_at_position(struct node** head)
{
    int pos, n, i; // pos(position), n(no_of_nodes), i(iterator)
    struct node* trav_node = *head;
    struct node* temp_node = NULL;

    if(*head == NULL)
    {
        puts("Linked List Is Empty...");
        return;
    }

    n = count_node(*head);

    puts("Enter Position : ");
    scanf("%d", &pos);

    if(pos == 1)
    {
        delete_at_first(head);
    }
    else if(pos == n)
    {
        delete_at_last(head);
    }
    else if(pos < 1 || pos > n)
    {
        puts("Invalid Position...");
        delete_at_position(head);
    }
    else
    {
        for(i = 1 ; i < (pos-1) ; i++)
        {
            trav_node = trav_node -> next;
        }
        temp_node = trav_node -> next;
        trav_node -> next = temp_node -> next;
        free(temp_node);
        temp_node = NULL;
    }
}

void display_reversed_linked_list(struct node* head)
{
    if(head == NULL)
        return;

    display_reversed_linked_list(head -> next);
    printf("%d => ", head -> data);
}