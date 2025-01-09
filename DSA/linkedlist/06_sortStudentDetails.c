#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct student
{
    int roll_number;
    char name[10];
    char mobile_number[10];
    int age;
};

struct node
{
    struct student data;
    struct node* next;
};

void create_linked_list(struct node**, int);
struct node* create_node();
void display_linked_list(struct node*);

int main(void)
{
    struct node* first = NULL;
    create_linked_list(&first, 2);
    display_linked_list(first);

    return 0;
}

void create_linked_list(struct node** head, int n) // n(total_records)
{   
    int i;
    struct node* new_node = NULL;
    struct node* trav_node;
    
    for(i = 1 ; i <= n ; i++)
    {
        new_node = create_node();
        
        if(*head == NULL)
        {
            *head = new_node;
        }
        else
        {
            trav_node = *head;
            while(trav_node -> next != NULL)
            {
                trav_node = trav_node -> next;
            }
            trav_node -> next = new_node;
        }
    }
}

struct node* create_node()
{
    struct node* new_node = NULL;
    int age, roll_number;
    char name[10];
    char mobile_number[10];
    char buffer;

    new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        puts("Error In Memory Allocation...");
        exit(EXIT_FAILURE);
    }

    puts("Enter Roll Number :");
    scanf("%d", &roll_number);
    (new_node -> data).roll_number = roll_number;

    scanf("%c", &buffer);

    puts("Enter Name :");
    fgets(name, sizeof(name), stdin);
    strcpy((new_node -> data).name, name);   // (new_node -> data).name = name -- *Wrong --(array internaly pointer mhanun kam karto)

    scanf("%c", &buffer);

    puts("Enter Mobile Number :");
    fgets(mobile_number, sizeof(mobile_number), stdin);
    strcpy((new_node -> data).mobile_number, mobile_number);

    puts("Enter Age :");
    scanf("%d", &age);
    (new_node -> data).age = age;

    new_node -> next = NULL;

    return new_node;
}

void display_linked_list(struct node* head)
{
    while(head != NULL)
    {
        printf("Name : %s", (head -> data).name);
        printf("Roll Number : %d\n", (head -> data).roll_number);
        printf("Mobile Number : %s\n", (head -> data).mobile_number);
        printf("Age : %d\n", (head -> data).age);
        printf("\n\n");

        head = head -> next;
    }
}