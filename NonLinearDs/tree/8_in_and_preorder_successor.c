#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create_bst(struct node*,int);
struct node* createnode(int);
void display(struct node* );
void find_inorder_predecessor_successor(struct node*,int,int*,int*);
int max_data(struct node* );
int min_data(struct node* );


void main()
{   
    int data,element,predecessor,successor;
    struct node* root=NULL;

    do
    {
      puts("Enter data :");
      scanf("%d",&data);
      
      if(data != -1)
       root=create_bst(root,data);

    } while (data != -1);
    display(root);
    
    puts("\nEnter Element to search Inorder Predecessor and Successor: ");
    scanf("%d",&element);
    find_inorder_predecessor_successor(root,element,&predecessor,&successor);
    
    if(predecessor != 0)
        printf("Predecessor of %d=%d\n",element,predecessor);
    else
        puts("Predecessor not found");
    
    if(successor != 0)
        printf("Successor of %d=%d\n",element,successor);
    else
        puts("Successor not found");

}

struct node* create_bst(struct node* root, int data)
{
    
    if(root == NULL)
    {
        root=createnode(data);
        return root;
    }   

    if(data < root -> data)
    {
        root->left = create_bst(root->left,data);
    }

    else
    {
        root->right = create_bst(root->right,data);
    }

    return root;
}

struct node* createnode(int data)
{
    struct node* newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        return NULL;
    }
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

void display(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%d=>",root->data);
    display(root->left);
    display(root->right);   
}

int max_data(struct node* root)
{
    
    if(root == NULL)
        return 0;
    while(root->right != NULL)
        root=root->right;

    return root->data;
}

int min_data(struct node* root)
{
    if(root == NULL)
        return 0;
    while(root->left != NULL)
        root = root->left;
    
    return root->data;
}

void find_inorder_predecessor_successor(struct node* root, int element, int* predecessor, int* successor)
{
    if(root == NULL)
        return;

    if(root->data == element)
    {
        if(root->left != NULL)
            *predecessor = max_data(root->left);

        if(root->right != NULL)
            *successor = min_data(root->right);
        
        return;
    }

    else if(element < root->data)
    {
        *successor = root->data;
        find_inorder_predecessor_successor(root->left,element,predecessor,successor);
    }

    else
    {
        *predecessor = root->data;
        find_inorder_predecessor_successor(root->right,element,predecessor,successor);
    }
}
