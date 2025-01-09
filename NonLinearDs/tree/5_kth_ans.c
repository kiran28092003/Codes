#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* built_tree();
struct node* createnode(int);
void display(struct node* );
struct node* least_common_ancester(struct node*,struct node*,struct node*);
int search_element(struct node*,int);
struct node* kth_ancestor(struct node*,struct node*,struct node*);

void main()
{
    int p,q;
    struct node* root=NULL;
    root=built_tree();
    puts("Given Tree is :");
    display(root);
    printf("\n");
    puts("Enter a value p");
    scanf("%d",&p);
    printf("\n");
    puts("Enter a value q");
    scanf("%d",&q);
    printf("%d",least_common_ancester(root,createnode(p),createnode(q))->data);
}

struct node* built_tree()
{
    int data;
    struct node* root=NULL;
    puts("Enter a data");
    scanf("%d",&data);

    if(data == -1)
        return NULL;

    root= createnode(data);

    printf("Enter a data for left of %d node\n",data);
        root->left = built_tree();
    
     printf("Enter a data for right of %d node\n",data);
        root->right = built_tree();
    
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

struct node* least_common_ancester(struct node*root,struct node* p,struct node* q)
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

    leftans=least_common_ancester(root->left,p,q);
    rightans=least_common_ancester(root->right,p,q);

    if(leftans ==NULL && rightans==NULL)
        return NULL;
    else if(leftans !=NULL && rightans==NULL)
        return leftans;
    else if(leftans ==NULL && rightans!=NULL)
        return rightans;
    else
        return root;
}
int search_element(struct node* root,int target)
{
    int data;
    struct node* left = NULL;
    struct node* right = NULL;
    printf("Enter the element you want to search");
    scanf("%d",&data);
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==target)
    {
        return data;
    }
    return search_element(root->left,target) || search_element(root->right,target);
}
struct node* kth_ancestor(struct node* root,struct node* p,struct node* k)
{
    int k;
    int leftans,rightans;
    struct node* left;
    struct node* right;
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==p->data)
    {
        return p;
    }
    leftans=kth_ancestor(root->left,p,k);
    if(leftans!=root->data)
    {
        rightans=kth_ancestor(root->right,p,k);
    }
    if(leftans || rightans)
    {
        (k->data)--;
    }
    if(k->data==0)
    {
        printf("%d\n",root->data);
        k->data=-1;
    }
    return leftans || rightans;
}
