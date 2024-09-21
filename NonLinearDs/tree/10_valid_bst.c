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
int is_valid_bst(struct node*);

void main()
{
    int*path=NULL;
    
    struct node* root=NULL;
    root=built_tree();
    
    puts("Given Tree is :");
    display(root);

    if(is_valid_bst(root))
    {   
        printf("\nGiven Tree is Valid Binary Search Tree\n");
    }
    
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

int is_valid_bst(struct node* root)
{
    int leftnode,rightnode;
    long long int INT_MIN = ~(1LL <<(sizeof(long long int)*8 -1));
    long long int INT_MAX = (1LL << (sizeof(long long int)*8-1))-1;
    
    if(root == NULL)
        return;

    if(root->left->data > INT_MIN && root->left->data < root->data )
        return 1;

    if(root->right->data < INT_MAX && root->right->data > root->data)
        return 1;

    leftnode = is_valid_bst(root ->left);
    rightnode = is_valid_bst(root ->right);

    return (leftnode && rightnode);
}
