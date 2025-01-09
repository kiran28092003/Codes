#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* left;
    int data;
    struct node* right;
};
struct node* build_tree();
struct node* createnode(int);
void display(struct node*);
void main()
{
    struct node* root=NULL;
    root=build_tree();
    display(root);
}
struct node* build_tree()
{
    int data;
    struct node* root=NULL;
    puts("Enter a data\n");
    scanf("%d\n",&data);
    if(root == -1)
    {
        return NULL;
    }
    root=createnode(data);
    printf("Enter data for left of %d node\n",data);
    root->left=build_tree();
    printf("Enter data for right of %d node\n",data);
    root->right=build_tree();

    return root;
}
struct node* createnode(int a)
{
    struct node* newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode==NULL)
    {
        puts("Error in memory allocation");
        exit(EXIT_FAILURE);
    }
    newnode->data=a;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

void display(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d=>", root->data);
    display(root->left);
    display(root->right);
}