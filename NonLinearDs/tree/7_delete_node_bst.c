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
int max_data(struct node*);
struct node* delete_from_bst(struct node* , int );

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

    do
    {   
        printf("\n");
        puts("Enter Target to delete  a node from BST");
        scanf("%d",&target);

        if(target != -1)
        {
            root = delete_from_bst(root,target);
        }
        puts("After Delete ");
        display(root);
    } while (target != -1);
  
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

struct node* delete_from_bst(struct node* root, int target)
{
    struct node* temp=NULL;
    int max_element;
    if(root == NULL)
        return NULL;
    if(root->data == target)
    {
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->left != NULL && root ->right == NULL)
        {
            temp=root->left;
            free(root);
            return temp;
        }
        else if (root->left == NULL && root ->right != NULL)
        {
            temp=root->right;
            free(root);
            return temp;
        }
        else
        {
            max_element= max_data(root->left);
            root->data=max_element;
            root->left=delete_from_bst(root->left,max_element);
        }
    }

    else if (target < root->data)
        root->left = delete_from_bst(root->left,target);
    
    else
        root->right = delete_from_bst(root->right,target);
    
    return root;
}
