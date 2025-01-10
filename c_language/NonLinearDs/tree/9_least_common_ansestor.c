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
struct node* least_common_ancester_bst(struct node*,struct node* ,struct node*);

void main()
{   
    int data,target,p,q;
    struct node* root=NULL;

    do
    {
      puts("Enter data :");
      scanf("%d",&data);
      
      if(data != -1)
       root=create_bst(root,data);

    } while (data != -1);
    display(root);
    printf("\n");
    puts("Enter the value of p ");
    scanf("%d",&p);
    puts("Enter the value of q ");
    scanf("%d",&q);

    puts("Least Common Ancester of P and Q ");
    printf("%d",least_common_ancester_bst(root,createnode(p),createnode(q))->data);


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

struct node* least_common_ancester_bst(struct node* root,struct node* p,struct node* q)
{
    if(root== NULL)
    {
        return NULL;
    }
    if(p->data < root->data && q->data < root->data)
    {
        
    struct node* leftans=NULL;
    struct node* rightans=NULL;

    if(root== NULL)
    {
        return NULL;
    }
    if(root->data == p->data )
        return p;
    if(root->data == q->data)
        return q;

    leftans=least_common_ancester_bst(root->left,p,q);
    rightans=least_common_ancester_bst(root->right,p,q);

    if(leftans ==NULL && rightans==NULL)
        return NULL;
    else if(leftans !=NULL && rightans==NULL)
        return leftans;
    else if(leftans ==NULL && rightans!=NULL)
        return rightans;
    else
        return root;

    }
    else
    {
        return root;
    }
}
