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
int search(struct node*,int);
struct node* max_data(struct node*);
struct node* min_data(struct node*);
void main()
{   
    int data,target;
    struct node* root=NULL;

    do
    {
      puts("Enter data :");
      scanf("%d",&data);
      
      if(data != -1)
       root=create_bst(root,data);

    } while (data != -1);
    display(root);
    puts("\nEnter value to search:");
    scanf("%d",&target);
    if(search(root,target))
        puts("Found");
    else{
        puts("Target not Found");
    }
    printf("max element in tree=%d\n",max_data(root)->data);
    printf("min element in tree=%d\n",min_data(root)->data);
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

int search(struct node* root,int target)
{
    if(root==NULL)
        return 0;
    if(target == root->data)
    {   printf("%d is ",root->data);
        return 1;
    }
    if(target >root->data)
        search(root->right,target);
    else
        search(root->left,target);
    
}

struct node* max_data(struct node* root)
{
    
    if(root == NULL)
        return 0;
    while(root->right != NULL)
        root=root->right;

    return root;
}

struct node* min_data(struct node* root)
{
    if(root == NULL)
        return 0;
    while(root->left != NULL)
        root = root->left;
    
    return root;
}
